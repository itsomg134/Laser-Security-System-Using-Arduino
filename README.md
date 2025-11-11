# Laser Security System Using Arduino

A sophisticated intrusion detection system that uses laser technology to create an invisible security perimeter. When the laser beam is broken, the system immediately triggers both audible and visual alarms to alert you of potential breaches.

## 🎯 Project Overview

This Arduino-based security system leverages laser beam detection to monitor restricted areas, doorways, or valuable items. Perfect for hobbyists, makers, and anyone looking to learn about sensor integration and security systems.
demo:- https://app.cirkitdesigner.com/project/d306a3d7-3d51-4645-a921-246d3d76ce1a  
but square mirror not available sorry
## ✨ Key Features

- **Laser Beam Detection**: Continuous monitoring using a focused laser beam
- **Dual Alert System**: Synchronized buzzer and LED warnings
- **Smart Alarm Pattern**: Distinctive "tuuuuu tuuuuu" sound pattern (700ms on, 300ms off)
- **Automatic Reset**: Returns to monitoring mode once beam is restored
- **Persistent Alerts**: Repeats 5-second alarm cycles while intrusion continues
- **Portable Design**: Battery-powered for flexible placement
- **3D Printable Enclosure**: Custom housing for professional installation

## 🔧 How It Works

1. **Standby Mode**: Laser module continuously emits a beam toward the LDR sensor
2. **Detection**: LDR monitors light levels and maintains system in ready state
3. **Intrusion Event**: When beam is interrupted (person/object breaks the line):
   - 5-second alarm cycle activates
   - Buzzer sounds with characteristic pattern
   - LED flashes synchronously for visual alert
4. **Beam Check**: After each cycle, system verifies beam status
   - **Restored**: Returns to standby monitoring
   - **Still broken**: Initiates another alarm cycle
5. **Continuous Protection**: Cycle repeats until intrusion clears

## 🛠️ Components Required

| Component | Description | Purchase Link |
|-----------|-------------|---------------|
| **Arduino Uno** | Main microcontroller board | [Buy Here](#) |
| **Laser Module** | Emits the detection beam | [Buy Here](#) |
| **LDR Module** | Light-dependent resistor sensor | [Buy Here](#) |
| **5V Buzzer** | Audible alarm component | [Buy Here](#) |
| **Red LED** | Visual indicator | [Buy Here](#) |
| **220Ω Resistor** | Current limiting for LED | [Buy Here](#) |
| **Jumper Wires** | Connections between components | [Buy Here](#) |
| **7.4V Battery** | Portable power source | [Buy Here](#) |
| **Square Mirrors** | Beam direction control (optional) | [Buy Here](#) |

# Laser Security System - Components List with Prices

## 💰 Complete Bill of Materials (India Pricing)

### 1. Arduino Uno R3
![Arduino Uno](https://via.placeholder.com/300x200/4285F4/ffffff?text=Arduino+Uno+R3)

**Description**: Main microcontroller board (ATmega328P)
- **Specifications**: 
  - Operating Voltage: 5V
  - Digital I/O Pins: 14
  - Analog Input Pins: 6
  - Flash Memory: 32 KB
- **Price**: ₹450 
- **Where to Buy**: Amazon India, Robu.in, ElectronicComp

---

### 2. Laser Diode Module (5V, Red)
![Laser Module](https://via.placeholder.com/300x200/FF0000/ffffff?text=Laser+Module+5V)

**Description**: Red laser beam emitter module
- **Specifications**:
  - Wavelength: 650nm (Red)
  - Operating Voltage: 5V DC
  - Power: 5mW
  - Beam Range: Up to 200-500 meters
- **Price**:  ₹120
- **Where to Buy**: Amazon, Robu.in, local electronics markets

---

### 3. LDR Sensor Module
![LDR Module](https://via.placeholder.com/300x200/8B4513/ffffff?text=LDR+Sensor+Module)

**Description**: Light Dependent Resistor with built-in comparator
- **Specifications**:
  - Operating Voltage: 3.3V - 5V
  - Digital Output: HIGH/LOW based on light threshold
  - Adjustable sensitivity via potentiometer
  - Built-in power LED indicator
- **Price**:  ₹80
- **Where to Buy**: Amazon, Robu.in, ElectronicComp

---

### 4. 5V Active Buzzer
![Buzzer](https://via.placeholder.com/300x200/000000/ffffff?text=5V+Buzzer)

**Description**: Active piezo buzzer for alarm sound
- **Specifications**:
  - Operating Voltage: 5V DC
  - Type: Active (built-in oscillator)
  - Sound Level: 85dB
  - Frequency: ~2300Hz
- **Price**:  ₹40
- **Where to Buy**: Local electronics shops, Amazon, Robu.in

---

### 5. Red LED (5mm)
![Red LED](https://via.placeholder.com/300x200/FF0000/ffffff?text=5mm+Red+LED)

**Description**: Standard red LED for visual alarm indication
- **Specifications**:
  - Forward Voltage: 1.8V - 2.2V
  - Forward Current: 20mA
  - Brightness: 2000-3000 mcd
  - Size: 5mm diameter
- **Price**:  ₹5 per piece
- **Where to Buy**: Any electronics shop, bulk packs online

---

### 6. 220Ω Resistor (1/4W)
![Resistor](https://via.placeholder.com/300x200/D2B48C/000000?text=220+Ohm+Resistor)

**Description**: Current limiting resistor for LED
- **Specifications**:
  - Resistance: 220Ω (Red-Red-Brown)
  - Power Rating: 1/4 Watt
  - Tolerance: ±5%
- **Price**:  ₹2 per piece
- **Where to Buy**: Any electronics shop (pack of 100 for ₹50-100)

---

### 7. Jumper Wires (Male-to-Male, Male-to-Female)
![Jumper Wires](https://via.placeholder.com/300x200/FF6347/ffffff?text=Jumper+Wires)

**Description**: Connection wires for breadboard/components
- **Specifications**:
  - Length: 20cm standard
  - Types needed: 
    - Male-to-Male: 10 pieces
    - Male-to-Female: 5 pieces
- **Price**: ₹150 (pack of 40 wires)
- **Where to Buy**: Amazon, Robu.in, local shops

---

### 8. 7.4V Li-ion Battery (2S)
![Battery](https://via.placeholder.com/300x200/4169E1/ffffff?text=7.4V+Li-ion+Battery)

**Description**: Rechargeable battery pack for portable power
- **Specifications**:
  - Voltage: 7.4V (2S configuration)
  - Capacity: 1000mAh - 2200mAh
  - Type: Li-ion/Li-Po
  - Connector: JST or DC barrel jack
- **Price**:  ₹500
- **Where to Buy**: Amazon, battery specialty stores, RC hobby shops

---

### 9. Battery Holder/Connector (Optional)
![Battery Connector](https://via.placeholder.com/300x200/696969/ffffff?text=Battery+Connector)

**Description**: DC barrel jack adapter for battery
- **Specifications**:
  - Output: 5.5mm x 2.1mm DC jack (Arduino compatible)
  - Input: Battery connector
- **Price**: ₹60
- **Where to Buy**: Local electronics markets, Amazon

---

### 10. Small Breadboard (Optional but Recommended)
![Breadboard](https://via.placeholder.com/300x200/FFFFFF/000000?text=Breadboard+400+Points)

**Description**: Solderless prototyping board
- **Specifications**:
  - Size: 400 tie-points (mini)
  - Dimensions: 8.5cm x 5.5cm
- **Price**: ₹40 - ₹80
- **Where to Buy**: Amazon, Robu.in, local shops

---

### 11. Square Mirrors (Optional - for beam redirection)
![Mirrors](https://via.placeholder.com/300x200/C0C0C0/000000?text=Small+Mirrors)

**Description**: Small mirrors to redirect laser beam at corners
- **Specifications**:
  - Size: 3cm x 3cm or 5cm x 5cm
  - Type: Flat glass mirrors
  - Quantity: 2-4 pieces
- **Price**: ₹20 - ₹50 per piece
- **Where to Buy**: Craft stores, Amazon, local hardware shops

---

## 📊 Total Project Cost Estimate

| Category | Estimated Cost (₹) |
|----------|-------------------|
| **Minimum Budget** |  ₹1,200 |
| **Recommended Budget** |  ₹1,700 |
| **With 3D Printed Case** |  ₹2,000 |

### Cost Breakdown by Component:

```
Arduino Uno R3          :  ₹650
Laser Module            :  ₹120
LDR Sensor Module       :  ₹80
5V Buzzer               :  ₹40
Red LED                 :  ₹5
220Ω Resistor           :  ₹2
Jumper Wires (pack)     :  ₹150
7.4V Battery            :  ₹500
Battery Connector       :  ₹60
Breadboard (optional)   :  ₹80
Mirrors (optional)      :  ₹200
─────────────────────────────────────
TOTAL                   :- ₹1,887
```

---

## 🛒 Where to Buy in India

### Online Stores:
1. **Amazon India** - Wide selection, fast delivery
2. **Robu.in** - Electronics components specialist
3. **ElectronicComp** - Good for bulk components
4. **Flipkart** - General electronics
5. **BaazaarCart** - Arduino & robotics components

### Offline Options:
- **Lamington Road, Mumbai** - Electronics market
- **SP Road, Bangalore** - Electronics components hub
- **Chandni Chowk, Delhi** - Electronic parts market
- **Ritchie Street, Chennai** - Electronics shopping area
- **Local electronics shops** - Available in most cities

---

## 💡 Money-Saving Tips

1. **Buy Combo Kits**: Arduino starter kits often include LEDs, resistors, and jumper wires
2. **Bulk Purchase**: Buy resistors and LEDs in packs of 50-100
3. **Clone Boards**: Arduino-compatible boards cost ₹200-300 (work identically)
4. **Wait for Sales**: Flipkart/Amazon electronics sales (50% off possible)
5. **Local Markets**: Often 20-30% cheaper than online for basic components

---

## ⚠️ Important Notes

- Prices are approximate and vary by seller/location (as of 2024)
- Shipping charges not included
- GST (18%) may apply on online purchases
- Always verify seller ratings before purchasing
- Buy extra LEDs and resistors (they're cheap and easy to damage)

---

## 📦 Recommended Combo Purchase

**Budget Starter Pack (₹1,200-1,500)**:
- Arduino Uno clone (₹250)
- Arduino component kit with LEDs, resistors, wires (₹300)
- Laser + LDR combo (₹100)
- Buzzer (₹20)
- 7.4V battery (₹300)
- Breadboard (₹50)
## 🚀 Applications

- Home security for doorways and windows
- Perimeter protection for restricted areas
- Museum display case monitoring
- Warehouse and storage facility security
- Educational projects for learning Arduino
- DIY alarm system prototypes

## 📋 Getting Started

1. Clone this repository
2. Connect components according to circuit diagram
3. Upload Arduino code to your board
4. Align laser beam with LDR sensor
5. Power system with 7.4V battery
6. Test by breaking the beam

## 🔍 Technical Specifications

- **Power Supply**: 7.4V battery (suitable for Arduino Uno via Vin pin)
- **Alarm Duration**: 5-second cycles
- **Buzzer Pattern**: 700ms ON / 300ms OFF
- **Detection Type**: Light-based (laser to LDR)
- **Response Time**: Immediate upon beam interruption

## 📧 Author Contact detail 

- GitHub: [@itsomg134](https://github.com/itsomg134)
- Twitter: [@omgedam](https://x.com/its_om_g_143?t=8I7F1GBJO6jLU1AaoQLgYQ&s=09)
- Email: omgedam123098@gmail.com
- Portfolio: [ogworks.lovable.app](https://ogworks.lovable.app)  
- LinkedIn: [Om Gedam](https://www.linkedin.com/in/om-gedam-39686432a)
  
⚠️ **Safety Note**: Exercise caution when working with laser modules. Avoid direct eye exposure to laser beams.

![IMG_20251110_212508486](https://github.com/user-attachments/assets/f3bb0bf7-9a93-47b4-aa89-17b9c72a0875)
