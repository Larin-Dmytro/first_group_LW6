#define LED_B 13
#define LED_D 12
#define LED_G 11
void setup()
{
  pinMode(LED_B,OUTPUT);
  pinMode(LED_D,OUTPUT);
  pinMode(LED_G,OUTPUT);
}
void loop()
{
  Bezpalko();
  LED_Dmitrenko ( );
  LED_Golovko ( );
}
void Bezpalko()
{
  digitalWrite(LED_B,HIGH);
  delay(1500);
  digitalWrite(LED_B,LOW);
  
  delay(500);
   digitalWrite(LED_B,HIGH);
  delay(500);
  digitalWrite(LED_B,LOW);
  
  delay(500);
   digitalWrite(LED_B,HIGH);
  delay(500);
  digitalWrite(LED_B,LOW);
  delay(500);
  
  digitalWrite(LED_B,HIGH);
  delay(500);
  digitalWrite(LED_B,LOW);
  delay(1500);
}

void LED_Dmitrenko ( )
{
  digitalWrite(LED_D, HIGH);
  delay(1500);
  digitalWrite(LED_D, LOW);
  
  delay(500);
  
  digitalWrite(LED_D, HIGH);
  delay(500);
  digitalWrite(LED_D, LOW);
  
  delay(500);
  
  digitalWrite(LED_D, HIGH);
  delay(500);
  digitalWrite(LED_D, LOW);
  
  delay(1500);
}
void LED_Golovko ( )  {
  digitalWrite(LED_G, HIGH);
  delay (1500);
  digitalWrite(LED_G, LOW);
  delay (500);
  digitalWrite(LED_G, HIGH);
  delay (1500);
  digitalWrite(LED_G, LOW);
  delay (500);
  digitalWrite(LED_G, HIGH);
  delay (500);
  digitalWrite(LED_G, LOW);
  delay (1500);
}
