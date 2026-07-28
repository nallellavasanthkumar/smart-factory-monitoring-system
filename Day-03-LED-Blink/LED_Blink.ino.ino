/*
 * Project : Smart Factory Monitoring System
 * Module  : Day 03 - LED Blink Test
 * Platform: Arduino UNO
 * Author  : Nallella Vasanth Kumar
 * Description:
 * This program blinks the onboard LED connected to pin 13
 * to verify the Arduino UNO board and digital output.
 */

#define LED_PIN 13

void setup()
{
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(500);

    digitalWrite(LED_PIN, LOW);
    delay(500);
}