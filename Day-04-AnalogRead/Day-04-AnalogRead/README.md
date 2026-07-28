# Day 04 - Analog Read & map() Function

## Virtual Internship
**Organization:** Emertxe Information Technologies

## Objective
To understand how to read analog values from a potentiometer and convert the ADC value into a meaningful range using the map() function.

## Platform
- Arduino UNO Simulation
- PICSimLab

## Software Used
- Arduino IDE
- PICSimLab

## Concepts Learned

- Analog Input using analogRead()
- ADC Value Conversion
- Serial Communication
- Serial Monitor
- map() Function

## Working Principle

The potentiometer provides an analog voltage value to the Arduino analog pin A0.  
The Arduino ADC converts this analog voltage into a digital value between 0 and 1023.

The map() function converts this ADC value into a percentage range from 0 to 100 for easier understanding.

## Output

The Serial Monitor displays:

- Raw Analog Value (0-1023)
- Mapped Percentage Value (0-100)

## Learning Outcome

This experiment helped in understanding analog sensor reading, ADC conversion, and serial communication concepts used in embedded systems.
