

#include <IRremote.h>

IRsend irsend;

void setup()
{
Serial.begin(9600);
}

void loop() {
  int khz = 38; // 38kHz carrier frequency for the NEC protocol
  unsigned int irSignal1[] = {3450, -1700, 450, -450, 400, -1300, 450, -400, 450, -450, 400, -450, 450, -400, 450, -400, 450, -400, 450, -450, 400, -450, 450, -450, 400, -400, 450, -450, 400, -1300, 400, -450, 450, -450, 400, -450, 450, -400, 450, -400, 450, -450, 400, -450, 400, -1300, 450, -1300, 400, -1300, 450, -400, 450, -450, 400, -1300, 450, -400, 450, -400, 450, -450, 450, -400, 450, -400, 450, -400, 450, -450, 400, -450, 450, -400 ,450, -400 ,450, -450, 400, -450, 450, -400, 450, -400, 450 ,-450, 400, -450, 450, -400, 450, -400, 450, -400, 450, -450, 400, -450, 450, -400 }; //AnalysIR Batch Export (IRremote) - RAW
//  unsigned int irSignal1[] = {3950,2050, 550,450, 500,1000, 500,1000, 500,450, 600,1000, 500,500, 500,450, 500,1000, 550,450, 550,450, 500,450, 500,450, 600,450, 500,1000, 500,450, 500,1000, 600,1000, 500,450, 550,1000, 500,450, 550,450, 550,450, 500,450, 500,450, 600,450, 500,400, 550,450, 500,450, 600,450, 500,450, 500,450, 550,450, 550,500, 500,450, 500,450, 500,450, 600,450, 500,450, 500,450, 550,450, 550,1000, 500,1000, 550,400, 550,450, 500}; //AnalysIR Batch Export (IRremote) - RAW
  Serial.println("ON");
  irsend.sendRaw(irSignal1, sizeof(irSignal1) / sizeof(irSignal1[0]), khz); //Note the approach used to automatically calculate the size of the array.

  delay(10000);
  delay(10000);
  unsigned int irSignal2[] = {3400, -1750, 400, -450, 400, -1350, 350, -500, 400, -450, 400, -500, 400, -450, 350, -500, 400, -450, 400, -450, 400, -500, 350, -500, 400, -400, 450, -450, 400, -1350, 400, -450, 400, -500, 350, -500, 350, -500, 350, -500, 400, -450, 400, -500, 350, -1350, 400, -1350, 350, -1300, 400, -450, 450, -500, 350, -1350, 350, -500, 400, -450, 400, -500, 350, -500, 350, -450, 450, -450, 400, -450, 400, -500, 350, -500, 400, -450, 400, -500, 350, -450, 400, -500, 350, -500, 400, -450, 400, -450, 400, -450, 400, -500, 400, -450, 400, -450, 400, -500, 400, -400 }; //AnalysIR Batch Export (IRremote) - RAW
//  unsigned int irSignal2[] = {3950,1950, 600,400, 550,1000, 500,1000, 550,450, 550,1000, 550,400, 550,400, 550,1000, 550,450, 550,400, 550,450, 500,450, 600,400, 550,1000, 500,450, 550,450, 550,1000, 550,400, 550,950, 550,450, 600,400, 550,400, 550,450, 500,450, 600,400, 550,450, 500,450, 550,400, 600,450, 500,450, 550,400, 550,400, 650,400, 550,450, 500,450, 550,400, 600,400, 550,450, 550,400, 550,400, 600,1000, 500,1000, 550,400, 550,400, 550}; //AnalysIR Batch Export (IRremote) - RAW
  Serial.println("OFF");
  irsend.sendRaw(irSignal2, sizeof(irSignal2) / sizeof(irSignal2[0]), khz); //Note the approach used to automatically calculate the size of the array.
  delay(10000);
  delay(10000);
}
