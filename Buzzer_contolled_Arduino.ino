int trigger_pin=2;
int echo_pin=3;

int buzz=7;
int time;
int distance;
void setup()
{
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        
        pinMode(buzz, OUTPUT);
 
  
}
void loop() 
{
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.034) / 2;

  if (distance <= 40) 
        {
               
        digitalWrite (buzz, HIGH);
        delay (500);
       
        }
  else {
               
        digitalWrite (buzz, LOW);
        delay (500);     
        
       } 
}
               
  
