

 //Flashing LED Circuit
void setup()
{
  for(int y=3;y<7;y++)
{
pinMode(y,OUTPUT);  //sets the digital pin as output
}
}

void loop()

{
  for(int y=3;y<7;y++)
  {
digitalWrite(y,HIGH);  //turns the LED on
delay(500);  //waits for a second
digitalWrite(y,LOW);  //turns the LED off
delay(500);  //waits for a second
}
}
