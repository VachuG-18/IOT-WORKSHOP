#include<Adafruit_ESP8266.h>
#include<softwareSerial.h>
#include<stdlib.h>
#define IP "184.106.153.149"
String msg="GET/update?key=OXVO4T8HVDZ9UJRO";
softwareserial esp8266(9,10);
void setup()
{
  serial.begin(115200);
  esp 8266.begin(115200);
  serial.println("AT");
  esp8266.pritnln("AT");
  delay(5000);
  if(esp8266find("ok"))
  {
    connect Wifi();
  }
  void loop()
  {
    Start:
    error=0;
     
  }
}
