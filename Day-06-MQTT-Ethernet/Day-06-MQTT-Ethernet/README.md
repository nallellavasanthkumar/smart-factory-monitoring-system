# Day 06 - MQTT Communication using Ethernet Shield

## Virtual Internship

**Project:** Smart Factory Monitoring System  
**Organization:** Emertxe Information Technologies

---

## Objective

To learn MQTT communication using Arduino UNO with Ethernet Shield and publish sensor data to an MQTT broker.

---

## Components Used

- Arduino UNO
- Ethernet Shield
- Jumper Wires
- USB Cable

---

## Software / Libraries Used

- Arduino IDE
- SPI Library
- Ethernet Library
- PubSubClient Library

---

## Concepts Learned

- Ethernet Shield interfacing
- MQTT protocol
- MQTT Broker
- Publishing messages
- Subscribing to topics
- Callback functions
- millis() based periodic data transmission

---

## MQTT Communication

MQTT (Message Queuing Telemetry Transport) is a lightweight communication protocol used in IoT applications.

In this experiment:

- Arduino acts as MQTT client
- HiveMQ broker is used for communication
- Sensor data is published to an MQTT topic

---

## Working Principle

1. Arduino connects to the network using Ethernet Shield.
2. MQTT client connects with the MQTT broker.
3. Arduino reads analog sensor value from A0.
4. The sensor value is published to the MQTT topic.
5. Incoming MQTT messages are received using callback function.

---

## MQTT Details

Broker:

Port:


Publish Topic:


Subscribe Topic:


---

## Output

Example:


---

## Learning Outcome

Through this experiment, we learned how IoT devices communicate using MQTT protocol and how sensor data can be transmitted over a network using an Ethernet Shield.
