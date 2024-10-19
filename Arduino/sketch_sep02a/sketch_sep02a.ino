
 #include<dht.h>
#define dht_apin Ao
Dht;
void setup()
{
    pinMode(A0,INPUT);
    serial.begin(9600);
    delay(500); 
    serial.println("DHTII Humidity & temperature sensor \n\n");
    delay(1000);
}
void loop()
{
    DHT.read11(dht_apin);
    serial.print("THS:Thol:None:");
    serial.print(DHT.humidity);
    serial.print("%");
    serial.print(DHT.temperature);
    serial.println("degC");
    delay(2000);
}
 
