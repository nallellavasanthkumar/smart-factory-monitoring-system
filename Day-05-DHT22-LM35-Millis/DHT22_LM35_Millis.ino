/*
 * Day 05 - DHT22 Sensor with millis()
 *
 * Virtual Internship:
 * Smart Factory Monitoring System
 *
 * Description:
 * Reads temperature and humidity values from DHT22 sensor
 * and prints the data on Serial Monitor every 2 seconds
 * using millis() function.
 */

#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22

// Create DHT sensor object
DHT dht(DHTPIN, DHTTYPE);

unsigned long now;
unsigned long prev;

float h;
float t;

void setup()
{
  dht.begin();
  Serial.begin(9600);

  Serial.println("Test DHT22 Sensor");
}

void loop()
{
  now = millis();   // Time elapsed in milliseconds

  if ((now - prev) > 2000)
  {
    prev = now;

    // Read humidity and temperature
    h = dht.readHumidity();
    t = dht.readTemperature();

    // Handle sensor reading failure
    if (isnan(h) || isnan(t))
    {
      Serial.println("Read failed!");
      return;
    }

    Serial.print("Temperature is ");
    Serial.print(t);
    Serial.println(" Celsius");

    Serial.print("Humidity is ");
    Serial.print(h);
    Serial.println(" Percentage");
  }
}
