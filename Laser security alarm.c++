const int LDR_VCC = 8;
const int LDR_GND = 9;
const int LDR_DO = 10;

const int LASER_GND = 11;
const int LASER_VCC = 12;
const int LASER_SIGNAL = 13;

const int BUZZER_GND = A0;
const int BUZZER_VCC = A3;

const int LED_GND = A5;
const int LED_VCC = A4;

enum SystemState { NORMAL, ALARM_ACTIVE, ALARM_COMPLETED };
SystemState currentState = NORMAL;

unsigned long alarmStartTime = 0;
const unsigned long ALARM_DURATION = 5000;

unsigned long lastSirenTime = 0;
bool sirenOn = false;
const unsigned long SIREN_ON_TIME = 700;
const unsigned long SIREN_OFF_TIME = 300;

void setup() {
  pinMode(LDR_VCC, OUTPUT);
  pinMode(LDR_GND, OUTPUT);
  pinMode(LDR_DO, INPUT);
  
  pinMode(LASER_GND, OUTPUT);
  pinMode(LASER_VCC, OUTPUT);
  pinMode(LASER_SIGNAL, OUTPUT);
  
  pinMode(BUZZER_GND, OUTPUT);
  pinMode(BUZZER_VCC, OUTPUT);
  
  pinMode(LED_GND, OUTPUT);
  pinMode(LED_VCC, OUTPUT);
  
  digitalWrite(LDR_VCC, HIGH);
  digitalWrite(LDR_GND, LOW);
  
  digitalWrite(LASER_GND, LOW);
  digitalWrite(LASER_VCC, HIGH);
  digitalWrite(LASER_SIGNAL, HIGH);
  
  digitalWrite(BUZZER_GND, LOW);
  digitalWrite(BUZZER_VCC, LOW);
  digitalWrite(LED_GND, LOW);
  digitalWrite(LED_VCC, LOW);
  
  Serial.begin(9600);
  Serial.println("Laser Security System Started");
  Serial.println("System is ACTIVE");
}

void updateSirenPattern() {
  unsigned long currentTime = millis();
  unsigned long timeInAlarm = currentTime - alarmStartTime;
  unsigned long timeLeft = ALARM_DURATION - timeInAlarm;
  
  if (timeLeft < 100) {
    digitalWrite(LED_VCC, LOW);
    digitalWrite(BUZZER_VCC, LOW);
    return;
  }
  
  if (sirenOn) {
    if (currentTime - lastSirenTime >= SIREN_ON_TIME) {
      sirenOn = false;
      lastSirenTime = currentTime;
      digitalWrite(LED_VCC, LOW);
      digitalWrite(BUZZER_VCC, LOW);
    }
  } else {
    if (currentTime - lastSirenTime >= SIREN_OFF_TIME) {
      if (timeLeft > SIREN_ON_TIME + 100) {
        sirenOn = true;
        lastSirenTime = currentTime;
        digitalWrite(LED_VCC, HIGH);
        digitalWrite(BUZZER_VCC, HIGH);
      }
    }
  }
}

void loop() {
  int ldrValue = digitalRead(LDR_DO);
  
  switch (currentState) {
    case NORMAL:
      if (ldrValue == HIGH) {
        currentState = ALARM_ACTIVE;
        alarmStartTime = millis();
        lastSirenTime = millis();
        sirenOn = true;
        digitalWrite(LED_VCC, HIGH);
        digitalWrite(BUZZER_VCC, HIGH);
        Serial.println("ALARM! Laser beam broken! Starting 5-second alarm.");
      }
      break;
      
    case ALARM_ACTIVE:
      updateSirenPattern();
      if (millis() - alarmStartTime >= ALARM_DURATION) {
        currentState = ALARM_COMPLETED;
        digitalWrite(LED_VCC, LOW);
        digitalWrite(BUZZER_VCC, LOW);
        Serial.println("5-second alarm completed. Checking laser status.");
      }
      break;
      
    case ALARM_COMPLETED:
      if (ldrValue == LOW) {
        currentState = NORMAL;
        Serial.println("Laser restored. System NORMAL");
      } else {
        currentState = ALARM_ACTIVE;
        alarmStartTime = millis();
        lastSirenTime = millis();
        sirenOn = true;
        digitalWrite(LED_VCC, HIGH);
        digitalWrite(BUZZER_VCC, HIGH);
        Serial.println("Laser still broken! Starting another 5-second alarm.");
      }
      break;
  }
  
  delay(10);
}
