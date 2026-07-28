# Day 05 - DHT22 Sensor & millis() Function

## Virtual Internship
**Project:** Smart Factory Monitoring System  
**Organization:** Emertxe Information Technologies

## Objective

To interface a DHT22 temperature and humidity sensor with Arduino and read sensor values periodically using the millis() function.

## Components Used

- Arduino UNO
- DHT22 Temperature & Humidity Sensor
- Jumper Wires
- USB Cable

## Software Used

- Arduino IDE
- PICSimLab (Simulation)

## Concepts Learned

- DHT22 Sensor Interfacing
- Temperature Measurement
- Humidity Measurement
- millis() Function
- Serial Communication

## Working Principle

The DHT22 sensor measures temperature and humidity from the environment.

The Arduino reads the sensor data and displays the temperature and humidity values on the Serial Monitor.

The millis() function is used to execute the sensor reading at a fixed interval of 2 seconds without stopping the program execution.

## Program Flow

1. Initialize DHT22 sensor.
2. Start serial communication.
3. Check elapsed time using millis().
4. Read temperature and humidity values.
5. Display the data on Serial Monitor.

## Output

Example:
