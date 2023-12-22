#include <UltraSonic_HC_SR04.h>

#define pinTrigger 4
#define pinEcho 5

UltraSonic_HC_SR04 hc_sr04(pinTrigger, pinEcho);

float dist_cm, dist_m;

void setup() {
  Serial.begin(9600);
}

void loop() {
  dist_cm = hc_sr04.distancia_cm();
  dist_m = dist_cm / 100;
  Serial.print("Distancia: ");
  Serial.print(dist_cm);
  Serial.print("cm | ");
  Serial.print(dist_m);
  Serial.println("m");
  Serial.println("____________________________________");
  delay(1000);
}
