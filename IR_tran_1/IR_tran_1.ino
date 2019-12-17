#include <IRremote.h>

IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(5000);
  //Power//
  irsend.sendNEC(0x10EFEB14, 32); //Power Code
  delay(25);
  irsend.sendNEC(0xFFFFFFFF, 32);
  delay(25);
  irsend.sendNEC(0xFFFFFFFF, 32);
  delay(25);
  irsend.sendNEC(0xFFFFFFFF, 32);
  Serial.println("Power");
  delay(10000);
  //Volume Up//
  for (int i = 0; i < 10; i++) {
    irsend.sendNEC(0x10EFC13E, 32); //Volume Up Code
    Serial.println("Volume Up");
    delay(250);
  }
  delay(5000);
  //Volume Down//
  for (int i = 0; i < 10; i++) {
    irsend.sendNEC(0x10EF619E, 32); //Volume Down Code
    Serial.println("Volume Down");
    delay(250);
  }
  delay(5000);
  //Menu//
  irsend.sendNEC(0x10EF2BD4, 32); //Netflix Code
  Serial.println("Menu");
  delay(10000);
}
