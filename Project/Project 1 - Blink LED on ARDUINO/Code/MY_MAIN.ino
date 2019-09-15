#define PIN_LED 13
#define LED(x)  digitalWrite(PIN_LED,x)

void setup() 
{
  // put your setup code here, to run once:

  pinMode(13,OUTPUT);
//  digitalWrite(13,LOW);
  LED(0);

}

void loop() 
{
  // put your main code here, to run repeatedly:

//  digitalWrite(13,HIGH);
  LED(1);
  delay(500);
//  digitalWrite(13,LOW);
  LED(0);
  delay(500);
  
}
