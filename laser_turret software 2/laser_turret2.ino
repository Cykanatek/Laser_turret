// nastavení servomotorů
#include <Servo.h>
Servo vertical;
Servo horizontal;
// poziční proměnné servomotorů
int vertpos = 85;
int horpos = 1;

// output for step motor
const int in1 =  8;
const int in2 =  9;
const int in3 = 10;
const int in4 = 11;

// output for servomotor
const int vservo = 6;
const int hservo = 5;

void setup() {

  vertical.attach(vservo);
  horizontal.attach(hservo);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

}

void loop() {

  for (horpos = 0; horpos <= 180; horpos += 1) //je od uhlu 0 do uhlu 180
  {
    horizontal.write(horpos);
    vertical.write(70);
    delay(10);
  }
  for (horpos = 180; horpos >= 0; horpos -= 1)
  {
    horizontal.write(horpos);
    vertical.write(85);
    delay(10);

  }
}
