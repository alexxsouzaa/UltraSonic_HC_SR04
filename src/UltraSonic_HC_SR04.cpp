#include <UltraSonic_HC_SR04.h>
#include <Arduino.h>

UltraSonic_HC_SR04::UltraSonic_HC_SR04(int pt, int pe)
{
    this->pin_trigger=pt;
    this->pin_echo=pe;
    pinMode(pin_trigger,OUTPUT);
    pinMode(pin_echo,INPUT);
}

double UltraSonic_HC_SR04::distancia_cm()
{
    digitalWrite(pin_trigger,LOW);
    delayMicroseconds(2);
    digitalWrite(pin_trigger,HIGH);
    delayMicroseconds(10);
    digitalWrite(pin_trigger,LOW);
    unsigned long microSegundos=pulseIn(pin_echo,HIGH);
    double distancia_cm=(microSegundos*0.0340)/2;
    if(distancia_cm==0 || distancia_cm > 400)
    {
        return -1.0;
    }
    else
    {
        return distancia_cm;
    }
}
