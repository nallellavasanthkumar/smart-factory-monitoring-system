/*WAP to read val from POT and print it on serial monitor*/

void setup() 
{
  Serial.begin(9600);
}

unsigned int sensor_val;
unsigned int map_val;

void loop()
{
  sensor_val = analogRead(A0);

  Serial.print("analog val is ");
  Serial.println(sensor_val);

  map_val = map(sensor_val, 0 , 1023, 0 , 100);

  Serial.print("maped val is ");
  Serial.println(map_val);
  
  delay(1000);
}
