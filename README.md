# -REAL-TIME-VEHICLE-STATUS-MONITORING-USING-CAN-PROTOCOL.
The aim of the project is to enhance vehicle safety and monitoring by using Controller Area Network (CAN) protocol. This system is designed to display critical vehicle parameters such as fuel percentage, indicator status, and airbag status/activation in real time.

-------------------------------------------------------------------------------------------------------------------------------------------------------------
# Real Time Vehicle Status Monitoring Using CAN Protocol

## Overview
This project implements a **real-time vehicle status monitoring system** using the **Controller Area Network (CAN) protocol**.  
It continuously monitors critical vehicle parameters such as:

- **Fuel Percentage**
- **Indicator Status**
- **Airbag Status / Activation**
- Other customizable sensor data

By utilizing CAN communication, this system provides reliable and efficient data transfer between different ECUs (Electronic Control Units) in a vehicle.
-------------------------------------------------------------------------------------------------------------------------------------------------------------
##  Features
-  **CAN Bus Communication** – Standardized and reliable data exchange.
-  **Real-Time Monitoring** – Instant updates on parameters.
-  **Dynamic Parameter Display** – View live status of sensors.
-  **Modular Design** – Easy to add or remove monitored parameters.
-  **Compatible with Real or Simulated CAN Environments**.
-------------------------------------------------------------------------------------------------------------------------------------------------------------
## 🛠 Hardware & Software Requirements

### Hardware
- CAN-enabled microcontroller or development board  
  *(e.g., Arduino with MCP2515 CAN Module, STM32, Raspberry Pi with CAN hat)*  
- Vehicle or CAN simulator setup
- Display / debugging interface (Serial Monitor, LCD, etc.)

### Software
- **C / C++** for firmware  
- **CAN library** for chosen hardware platform  
- **GNU GCC** or platform toolchain for compilation  
- **PlatformIO** / Arduino IDE / STM32CubeIDE (depending on MCU)
- **Git** for version control

------------------------------------------------------------------------------------------------------------------------------------------------------------

##  Project Structure
/src
 ├── main_node.c
 ├── fuel_node.c
 ├── indicator_node.c
 ├── lcd.c
 ├── lcd_defines.h
 ├── can.c
 ├── can.h
 ├── can_defines.h
 ├── adc.c
 ├── adc_defines.h
 ├── interrupt.h
 ├── types.h

2. **Build & Upload Firmware**
- Using Arduino IDE:
  - Install required CAN library (e.g., MCP_CAN_lib for MCP2515)
  - Select correct board & COM port
  - Compile and upload

3. **Connect Hardware**
- Hook up CAN transceiver module to the microcontroller.
- Connect to the vehicle CAN bus or a CAN simulator.

------------------------------------------------------------------------------------------------------------------------------------------------------------

##  Usage
1. Power on the system and connect to the CAN network.
2. The microcontroller will continuously read CAN frames.
3. The system will extract:
- Fuel percentage
- Indicator (left/right) status
- Airbag status (enabled/triggered)
4. Results are displayed in real time via:
- Serial Monitor
- LCD/OLED display
- Or sent to a logging system

-----------------------------------------------------------------------------------------------------------------------------------------------------------
##  Example Menu Map / UI Flow
*Replace with your actual monitoring interface diagram.*
![UI Flow Diagram](images/example-ui-flow.png)

-----------------------------------------------------------------------------------------------------------------------------------------------------------
## License
This project is licensed under the **MIT License** – See the [LICENSE](LICENSE) file for details.

------------------------------------------------------------------------------------------------------------------------------------------------------------
##  Contributors
- **SRIRAM** – Project Lead & Developer
---------------------------------------------------------------------------------------------------------------------------------------------------------

## Contact
For questions, feedback, or collaboration requests:  
📩 jkokoi4546@gmail.com
