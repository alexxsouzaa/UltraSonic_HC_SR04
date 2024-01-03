#include <UltraSonic_HC_SR04.h>

#define pinTrigger 4
#define pinEcho 3

UltraSonic_HC_SR04 sensor(pinTrigger, pinEcho);

float dist_cm, dist_mm;

void setup() {
  Serial.begin(9600);
}

void loop() {
  dist_cm = sensor.distancia_cm();
  dist_mm = dist_cm * 10;
  Serial.print("Distancia: ");
  Serial.print(dist_cm);
  Serial.print("cm | ");
  Serial.print(dist_mm);
  Serial.println("mm");
  delay(100);
}