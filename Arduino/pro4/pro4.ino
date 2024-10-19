const char*ssid="friday";
const char*password="12345678";

int LED=16;

void setup()
{
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
  digitalWrite(LED,LOW);
  serial.print("Connecting to Internet");
  Wifi.begin(ssid,password);
  while(Wifi.status()!=WL_CONNECTED)


  
  {
    delay(500);
    serial.print(".");
  }
  serial.println("Wifi connecte");
  
  serial.begin();
  serial.println("Server Started");
  
  serial.print("IP address of network:");
  serial.println(Wifi.localP());
  serial.print("copy and paste the following URL:https://");
  serial.print(Wifi.localIP());
  serial.println("/");
}
void loop()
{
  WifiClient client=server.availbale();
  if(!client)
  {
    return;
  }
  Serial.println("Waiting for new client");
  while(!cliend.available())
  {
    delay(1);
  }
  String request=client.readStringUntil('\r');
  Serial.println(request);
  client.flush();
  int value=LOW; 
  if(request.indexOf("/LED=OFF")!=-1)
  {
    digital Write(LED,Low);
    value=LOW;
  }
  client.println("HTTP/1.1 200 ok");
  client.println("content_Type:text/html");
  client.println(" ");
  client.println("<!DOCTYPE HTML>");
  client.println("<html>");
  client.print("LED is:");
  if(value==HIGH)
  {
    client.print("ON");
  }
  else
  {
    client.print("OFF");
  }
  client.println("<br><br>");
  client.println("<a href=\"/LED=ON\"\><button>ON</button></a>");
  client.println("<a href=\"/LED=OFF\"\><button>OFF</button></a>");
  delay(1);
  Serial.println("Client disconnected");
  Serial.println(" ");  
}
