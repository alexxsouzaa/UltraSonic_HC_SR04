/*
  Nome do Arquivo: UltraSonic_HC_SR04.h
  Autor: Bruno Álex
  Data de Criação: 08 de janeiro de 2024
*/

#ifndef ULTRASONIC_HC_SR04_H_INCLUDED
#define ULTRASONIC_HC_SR04_H_INCLUDED

// Classe que representa o sensor de distância ultrassônico HC-SR04
class UltraSonic_HC_SR04{
public:
    // Construtor que recebe os pinos de trigger e echo como parâmetros
    UltraSonic_HC_SR04(int trigger, int echo);

    // Função para medir e retornar a distância em centímetros
    double distancia_cm();

    // Função para medir e retornar a distância em milímetros
    double distancia_mm();

    // Função para medir e retornar o tempo de viagem do sinal ultrassônico em microssegundos
    int distanceInMicroseconds();

private:
    int pin_trigger;  // Pino de controle para enviar o pulso ultrassônico
    int pin_echo;     // Pino de leitura para receber o eco do pulso ultrassônico
};

#endif // ULTRASONIC_HC_SR04_H_INCLUDED
