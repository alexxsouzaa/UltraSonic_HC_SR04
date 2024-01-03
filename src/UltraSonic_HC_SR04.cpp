#include <UltraSonic_HC_SR04.h>
#include <Arduino.h>

UltraSonic_HC_SR04::UltraSonic_HC_SR04(int trigger, int echo)
{
    this->pin_trigger=trigger;
    this->pin_echo=echo;
    pinMode(this->pin_trigger,OUTPUT);
    pinMode(this->pin_echo,INPUT);

    digitalWrite(this->pin_trigger, LOW);
}

int UltraSonic_HC_SR04::distanceInMicroseconds()
{
    digitalWrite(pin_trigger,LOW);
    delayMicroseconds(2);
    digitalWrite(pin_trigger,HIGH);
    delayMicroseconds(10);
    digitalWrite(pin_trigger,LOW);

    return (pulseIn(this->pin_echo, HIGH));
}

double UltraSonic_HC_SR04::distancia_cm()
{
    double distancia_cm=this->distanceInMicroseconds()*0.034/2;
    return distancia_cm;
}
