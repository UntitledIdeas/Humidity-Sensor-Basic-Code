#include <dht11.h>
dht11 DHT11;
#define DHT11PIN 8
void setup()
{
Serial.begin(9600);
}
void loop()
{
DHT11.read(DHT11PIN);
Serial.print("Temperature=");
Serial.print(DHT11.temperature);
Serial.print(" C");
Serial.print('\t');
Serial.print("Humidity=%");
Serial.println(DHT11.humidity);
delay(500);
}

