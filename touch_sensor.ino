#include <CapacitiveSensor.h>

/*
* CapitiveSense Library Demo Sketch
* Paul Badger 2008
* Uses a high value resistor e.g. 10M between send pin and receive pin
* Resistor effects sensitivity, experiment with values, 50K – 50M. Larger resistor values yield larger sensor values.
* Receive pin is the sensor pin – try different amounts of foil/metal on this pin
*/

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_2_4 = CapacitiveSensor(2,4);
CapacitiveSensor   cs_2_5 = CapacitiveSensor(2,5);
CapacitiveSensor   cs_2_6 = CapacitiveSensor(2,6);
CapacitiveSensor   cs_2_7 = CapacitiveSensor(2,7);

CapacitiveSensor   cs_8_9 = CapacitiveSensor(8,9);
CapacitiveSensor   cs_8_10 = CapacitiveSensor(8,10);
CapacitiveSensor   cs_8_11 = CapacitiveSensor(8,11);

int soglia=800;
byte a_1;
byte b_1;
byte a_2;
byte b_2;
byte a_3;
byte b_3;
byte a_4;
byte b_4;
byte a_5;
byte b_5;
byte a_6;
byte b_6;
byte a_7;
byte b_7;
byte a_8;
byte b_8;
byte c;

void setup()
{
cs_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF);     // turn off autocalibrate on channel 1 – just as an example
Serial.begin(9600);
}

void loop()
{
long total1 =  cs_2_3.capacitiveSensor(500);
long total2 =  cs_2_4.capacitiveSensor(500);
long total3 =  cs_2_5.capacitiveSensor(500);
long total4 =  cs_2_6.capacitiveSensor(500);
long total5 =  cs_2_7.capacitiveSensor(500);
long total6 =  cs_8_9.capacitiveSensor(500);
long total7 =  cs_8_10.capacitiveSensor(500);
long total8 =  cs_8_11.capacitiveSensor(500);

if(total1>soglia){
a_1=1;
}else{
a_1=0;
}

if(total2>soglia){
a_2=1;
}else{
a_2=0;
}

if(total3>soglia){
a_3=1;
}else{
a_3=0;
}

if(total4>soglia){
a_4=1;
}else{
a_4=0;
}

if(total5>soglia){
a_5=1;
}else{
a_5=0;
}

if(total6>soglia){
a_6=1;
}else{
a_6=0;
}

if(total7>soglia){
a_7=1;
}else{
a_7=0;
}

if(total8>soglia){
a_8=1;
}else{
a_8=0;
}

if ((a_1==1) && (b_1==0)){
  c=1; 
} else if ((a_2==1) && (b_2==0)){
 c=2;
 } else if ((a_3==1) && (b_3==0)){
 c=3;
 } else if ((a_4==1) && (b_4==0)){
 c=4;
 } else if ((a_5==1) && (b_5==0)){
 c=5; 
 } else if ((a_6==1) && (b_6==0)){
 c=6; 
  } else if ((a_7==1) && (b_7==0)){
 c=7; 
   } else if ((a_8==1) && (b_8==0)){
 c=8; } else {
  c=0;
 }
 
b_1=a_1;
b_2=a_2;
b_3=a_3;
b_4=a_4;
b_5=a_5;
b_6=a_6;
b_7=a_7;
b_8=a_8;

Serial.write(c);

//Serial.print(c);
/* Serial.print("\t");
Serial.print(total1);
Serial.print("\t");
Serial.print(total2);
Serial.print("\t");
Serial.print(total3);
Serial.print("\t");
Serial.print(total4);
Serial.print("\t");
Serial.print(total5);
Serial.print("\t");
Serial.print(total6);
Serial.print("\t");
Serial.print(total7);
Serial.print("\t");
Serial.println(total8); */

delay(100);                             // arbitrary delay to limit data to serial port
}



