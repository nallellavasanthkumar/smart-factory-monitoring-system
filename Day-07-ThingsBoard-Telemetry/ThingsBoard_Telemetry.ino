/*
 * Day 07 - ThingsBoard Cloud Telemetry
 *
 * Virtual Internship:
 * Smart Factory Monitoring System
 *
 * Platform:
 * Arduino UNO + Ethernet Shield
 */

#include <SPI.h>
#include <Ethernet.h>
#include <PubSubClient.h>


// Ethernet MAC Address
byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};


// ThingsBoard Details
const char* token = "YOUR_ACCESS_TOKEN";

const char* broker = "mqtt.thingsboard.cloud";


// Create Ethernet and MQTT objects
EthernetClient ethClient;
PubSubClient client(ethClient);


void setup()
{
  Serial.begin(9600);

  Ethernet.begin(mac);

  delay(1500);

  client.setServer(broker, 1883);

  Serial.println("ThingsBoard Telemetry Test");
}


// Connect to ThingsBoard
void reconnect()
{
  while (!client.connected())
  {
    Serial.println("Connecting to ThingsBoard...");

    if (client.connect("Node1", token, NULL))
    {
      Serial.println("Connected to ThingsBoard");
    }
    else
    {
      Serial.println("Retrying...");
      delay(2000);
    }
  }
}


void loop()
{
  if (!client.connected())
  {
    reconnect();
  }

  client.loop();


  char payload[50];


  int temperature = 28;


  sprintf(payload,
          "{\"temperature\":%d}",
          temperature);


  client.publish("v1/devices/me/telemetry", payload);


  Serial.println(payload);


  delay(5000);
}
