#include <IRremote.h>

int receiverpin = 11;

IRrecv irrecv(receiverpin);
decode_results results;


void setup() {
  pinMode(receiverpin, INPUT);
  Serial.begin(115200);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX);
    irrecv.resume();
    delay(150);
  }
}
