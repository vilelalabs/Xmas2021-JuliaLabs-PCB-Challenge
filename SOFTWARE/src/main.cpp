#include <Arduino.h>

#define L0 0b00000000  // Todos LEDS apagados
#define LA 0b11111111  // Todos os LEDs acesos

#define D1 0b00000001  // Leds individuais
#define D2 0b00000010
#define D3 0b00000100
#define D4 0b00001000
#define D5 0b00010000
#define D6 0b00100000
#define D7 0b01000000
#define D8 0b10000000

#define BA 0b11110000  // Leds Azuis acesos
#define WA 0b00001111  // Leds Brancos acesos

// Declare the shift register pins
int dataPin = 0;   // Connected to DS (pin 14) on the 74HC595.
int latchPin = 1;  // Connected to STCP (pin 12) on the 74HC595.
int clockPin = 2;  // Connected to SHCP (pin 11) on the 74HC595.

// prototipo de função
void seq(uint8_t sequencia);
void seqSimples(uint8_t sequencia, int vezes);

void setup() {
  // Set the three shift register pins to output.
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  // Start with the clockPin set to a LOW state
  digitalWrite(clockPin, LOW);
}

void loop() {
  // pisca alternando cores
  for (int i = 0; i < 5; i++) {
    seq(BA);
    seq(WA);
  }
  // gira sentido horario
  for (int i = 0; i < 2; i++) {
    seq(D1);
    seq(D6);
    seq(D2);
    seq(D7);
    seq(D4);
    seq(D8);
    seq(D3);
    seq(D5);
  }
  // pisca todos alternando acesso/apagado
  for (int i = 0; i < 5; i++) {
    seq(L0);
    seq(LA);
  }

  // gira sentido anti-horario
  for (int i = 0; i < 2; i++) {
    seq(D1);
    seq(D5);
    seq(D3);
    seq(D8);
    seq(D4);
    seq(D7);
    seq(D2);
    seq(D6);
  }
  seqSimples(L0, 3);
  seqSimples(LA, 3);
  seqSimples(L0, 5);
}
//------------------------------------------------------------------------------
void seq(uint8_t sequencia) {
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, MSBFIRST, sequencia);
  digitalWrite(latchPin, HIGH);
  delay(200);
}
//------------------------------------------------------------------------------
void seqSimples(uint8_t sequencia, int vezes) {
  for (int i = 0; i < vezes; i++) {
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, sequencia);
    digitalWrite(latchPin, HIGH);
    delay(200);
  }
}