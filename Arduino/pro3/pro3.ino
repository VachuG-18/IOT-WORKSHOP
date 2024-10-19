void setup()
{
  pinMode(13,output);
  pinMode(7,output);
}
void loop()
{
  for(int i=0;i<5;i++)
  {
    digital write(13,HIGH);
    delay(300);
   }
   for(int j=0;j<5;j++)
   {
    digital write(7,HIGH);
    digital write(8,HIGH);
    dealu(300);
    digital write(7,LOW);
    digital write(8,LOW);
    dealy(300);
   }
}
