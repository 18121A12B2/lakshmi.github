int led=D0;
void setup() 
   {
     pinMode(led,OUTPUT);
   }

void loop() {
 
digitalWrite(led,1);
delay(1000);
digitalWrite(led,0);
delay(500);
}
