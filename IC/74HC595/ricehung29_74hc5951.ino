int latchPin = 5;	
int clockPin = 4;	
int dataPin = 6;	

void setup() 
{
  // Set all the pins of 74HC595 as OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
}

void loop() 
{
  updateShiftRegister(0,1,0,1,0,1,0,1);
  delay(500);
  updateShiftRegister(1,0,1,0,1,0,1,0);
  delay(500);
}

//updateShiftRegister() - This function sets the latchPin to low, then calls the Arduino function 'shiftOut' to shift out contents of variable 'leds' in the shift register before putting the 'latchPin' high again.
void updateShiftRegister(int z , int o , int tw , int th , int fo , int fi , int s , int se )
{
  int leds = z*pow(2,0) + o*pow(2,1) + tw*pow(2,2) + th*pow(2,3) + fo*pow(2,4) + fi*pow(2,5) + s*pow(2,6) + se*pow(2,7) ;
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, leds);
  digitalWrite(latchPin, HIGH);
}

/* 
Modified by ricehung29 on 2022-05-04
Author : https://lastminuteengineers.com/74hc595-shift-register-arduino-tutorial/
*/