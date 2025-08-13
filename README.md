# -REAL-TIME-VEHICLE-STATUS-MONITORING-USING-CAN-PROTOCOL.
The aim of the project is to enhance vehicle safety and monitoring by using Controller Area Network (CAN) protocol. This system is designed to display critical vehicle parameters such as fuel percentage, indicator status, and airbag status/activation in real time.

------------------------------------------------------------------------------------------------------------------------------------------------------------
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
Core Components:
    -> LPC2129 ARM7 Microcontroller Board – Main controller for CAN communication and sensor interfacing.

    -> MCP2551 / SN65HVD230 CAN Transceiver – Converts CAN protocol signals between the microcontroller and CAN bus.

    -> 16x2 LCD Display – For displaying status messages (indicator status, fuel level, airbag alert).

-**Sensors**->MMA7660 Accelerometer – Detects sudden impact or acceleration changes for airbag detection.
    Fuel Level Sensor – Provides fuel percentage data to be transmitted over CAN.

-**Switches / Inputs**:
    Push Buttons or Toggle Switches – For Left & Right indicator signal triggering (via EINT0 and EINT1).

### Software
- **C / C++** for firmware  
- **CAN library** for chosen hardware platform  
- **PlatformIO** Keil µVision – For ARM7 (LPC2129) embedded C development, code compilation, and hardware debugging.
- **Serial Terminal** – For UART-based debugging and monitoring CAN message flow during runtime.

------------------------------------------------------------------------------------------------------------------------------------------------------------

##  Project Structure
'''
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
 ├-─ types.h
 |-- uart_tx.c
 |-- uart_defines.h
'''
2. **Syatem Architecture.**
   Mention nodes and their functions clearly:

    - Main Node – Has MMA7660 accelerometer for sudden impact detection (airbag deployment alert). Sends alert to other nodes.

   - Fuel Node – Measures fuel level (via ADC) and sends it over CAN.

    - Indicator Node – Handles indicator lights, hazard alerts, etc.
    All communicate over the CAN bus.

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
