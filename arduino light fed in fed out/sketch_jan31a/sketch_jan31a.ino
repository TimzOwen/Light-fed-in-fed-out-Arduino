//simple fed in and fed out light 
//by Code ninja Owen

int ledPin =11;
void setup() {
 pinMode(ledPin, OUTPUT);
}

void loop() {
  int i;
  for(i=0; i<255;i++)
  {
    analogWrite(ledPin , i);
    delay(1000);
  }
  for(i=255; i>0; i--)
  {
    analogWrite(ledPin, i);
    delay(1000);
  }
  
  }
