// C++ code
//
/*
  code for security system
*/
float temp; 
float vout; 
float vout1; 
int LED = 13;
void setup()
{
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT); 
  pinMode(LED,OUTPUT);
}

void loop()
{
  if (digitalRead(7) == HIGH) {
    tone(9, 523, 1000); // play tone 60 (C5 = 523 Hz)
  } else {
    digitalWrite(8, LOW);
    noTone(9);
  }
  vout=analogRead(A1); 
vout1=(vout/1023)*5000; 
temp=(vout1-500)/10; 

if (temp>=80) 
{ 
digitalWrite(LED,HIGH); 
} 
else 
{ 
digitalWrite(LED,LOW); 
} 
  delay(1000); // Wait for 1000 millisecond(s)
}