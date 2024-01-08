/*
  Nome do Arquivo: HC_SR04.cpp
  Autor: Bruno Álex
  Data de Criação: 08 de janeiro de 2024
  Descrição: Este programa utiliza um sensor de distância ultrassônico HC-SR04
             para medir a distância em centímetros e milímetros. Os resultados
             são exibidos no Serial Monitor.
*/

#include <UltraSonic_HC_SR04.h>

const int pinTrigger = 4;
const int pinEcho = 3;

UltraSonic_HC_SR04 sensor(pinTrigger, pinEcho);

float dist_cm, dist_mm;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Mede a distância
  dist_mm = sensor.distancia_mm();
  dist_cm = sensor.distancia_cm();

  // Exibe a distância no Serial Monitor
  Serial.print("Distancia: ");
  Serial.print(dist_cm);
  Serial.print(" cm | ");
  Serial.print(dist_mm);
  Serial.println(" mm");
}
