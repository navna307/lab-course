void setup () 
{
pinMode(5,OUTPUT)
pinMode(8,OUTPUT)
pinMode(10,OUTPUT)
pinMode(13,OUTPUT)
}
void loop()
{
digitalWrite(13,HIGH);
dalay(1000);
digitalWrite(13,LOW);
digitalWrite(10,HIGH);
dalay(1000);
digitalWrite(10,LOW);
digitalWrite(8,HIGH);
dalay(1000);
digitalWrite(8,LOW);
digitalWrite(5,HIGH);
dalay(1000);
digitalWrite(5,LOW);
}


