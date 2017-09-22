#include "mbed.h"
//#include "Motor.h"
#include "motordriver.h"

DigitalOut led1(LED_RED);
DigitalOut led2(LED_GREEN);

Motor m_r(D10,D4,D3,1);
Motor m_l(D7,D6,D5,1);

int main()
{
  led1 = 1;
  led2 = 1;
    while(true) {
       led1 = 0;
       m_l.speed(0.75); 
       m_r.speed(0.75);
       wait(2);
       //m_l.speed(1); 
       //m_r.speed(1);
       //wait(1);
       //m_l.stop(1.0);
       //m_r.stop(1.0);
       m_l.speed(0); 
       m_r.speed(0);
       wait(2);
       led1 = 1;
       led2 = 0;
       m_l.speed(0.75); 
       m_r.speed(0.75);
       wait(2);
       //m_l.speed(-1); 
       //m_r.speed(-1);
       //wait(1);
       m_l.stop(1.0);
       m_r.stop(1.0);
       //.speed(0); 
       //m_r.speed(0);
       wait(1);
       led1 = 1;
       led2 = 1;
    } 
}