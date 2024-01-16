/*
  Nome do Arquivo: UltraSonic_HC_SR04.h
  Autor: Bruno Álex
  Data de Criação: 08 de janeiro de 2024
  Descrição: Este arquivo contém a implementação da classe UltraSonic_HC_SR04,
             que representa um sensor de distância ultrassônico HC-SR04.
             O sensor é usado para medir distâncias em centímetros e milímetros.
*/

#include <UltraSonic_HC_SR04.h>
#include <Arduino.h>

const short int TRIGGER_DELAY = 2;  // Tempo de espera para o pino trigger em microssegundos
const short int PULSE_DELAY = 10;   // Tempo de pulso em microssegundos
const double SOUND_SPEED = 0.034;  // Velocidade do som em cm/microssegundo

UltraSonic_HC_SR04::UltraSonic_HC_SR04(int trigger, int echo)
{
    this->pin_trigger = trigger;
    this->pin_echo = echo;

    // Configuração dos pinos
    pinMode(this->pin_trigger, OUTPUT);
    pinMode(this->pin_echo, INPUT);

    // Inicialização do pino trigger em estado baixo
    digitalWrite(this->pin_trigger, LOW);
}

int UltraSonic_HC_SR04::distanceInMicroseconds()
{
    // Envio do pulso ultrassônico
    digitalWrite(pin_trigger, LOW);
    delayMicroseconds(TRIGGER_DELAY);
    digitalWrite(pin_trigger, HIGH);
    delayMicroseconds(PULSE_DELAY);
    digitalWrite(pin_trigger, LOW);

    // Leitura do tempo de retorno do eco
    return pulseIn(this->pin_echo, HIGH);
}

double UltraSonic_HC_SR04::distancia_cm()
{
    delay(10);  // Pequeno atraso antes da leitura para evitar interferências

    // Cálculo da distância em centímetros
    return (distanceInMicroseconds() * SOUND_SPEED) / 2;
}

double UltraSonic_HC_SR04::distancia_mm()
{
    delay(10);  // Pequeno atraso antes da leitura para evitar interferências

    // Cálculo da distância em milímetros
    return ((distanceInMicroseconds() * SOUND_SPEED) / 2) * 10;
}
