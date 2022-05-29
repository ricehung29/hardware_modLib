#include "TM1637.h"
TM1637 tm1637(2,3);

void setup()
{
  tm1637.init();
  tm1637.set(0);//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;
}
void loop()
{
    tm1637.display(0,1);
    tm1637.display(1,2);
    tm1637.display(2,3);
    tm1637.display(3,4);
}
