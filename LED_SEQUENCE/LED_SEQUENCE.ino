#define LED_XY 2
#define LED_XZ 9
int i;

void setup() 
{                
  for (i = LED_XY; i < LED_XZ+1; i++)  
 {
  pinMode(i, OUTPUT);
 }
}
 
void loop() 
{
  for (i = LED_XY; i < LED_XZ+1; i++) 
 {
   digitalWrite(i, HIGH);
   delay(200);
   digitalWrite(i, LOW);
 }

}

