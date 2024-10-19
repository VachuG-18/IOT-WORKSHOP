#include<dht.h>
#define dht_apin A0
DHT;
void setup()
{
  pinMode(a0,input);
  serial.negin(9600);
  dealy(500);
  serial.println("DHT || Humidity & Temperature sensor\n\n");
  delay(1000);
}
void loop();
{
  DHT.read ||(dht_apin);
  serail.print("THS:tho1:none");
  serial.print(DHT.humidity);
  serail.print("%,");
  //serail.print("temperature);
  serial.print(DHT.temperature);
  serial.printlm("dey C");
  delay(2000);
}
