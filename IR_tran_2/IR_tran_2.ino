#include <IRremote.h>

IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(5000);
  //Power//
  irsend.sendNEC(0x880E7DF5, 16); //Power Code
  delay(25);
  irsend.sendNEC(0x880E7DF5, 16);
  delay(25);
  irsend.sendNEC(0x880E7DF5, 16);
  delay(25);
  irsend.sendNEC(0x880E7DF5, 16);
  Serial.println("ON");
//  delay(10000);
//  //Volume Up//
//  for (int i = 0; i < 10; i++) {
//    irsend.sendNEC(0x10EFC13E, 32); //Volume Up Code
//    Serial.println("Volume Up");
//    delay(250);
//  }
//  delay(5000);
//  //Volume Down//
//  for (int i = 0; i < 10; i++) {
//    irsend.sendNEC(0x10EF619E, 32); //Volume Down Code
//    Serial.println("Volume Down");
//    delay(250);
//  }
//  delay(5000);
//  //Menu//
//  irsend.sendNEC(0x76945E4A, 32); //Netflix Code
//  Serial.println("OFF");
//  delay(10000);
}
