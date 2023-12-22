#ifndef ULTRASONIC_HC_SR04_H_INCLUDED
#define ULTRASONIC_HC_SR04_H_INCLUDED

class UltraSonic_HC_SR04{
public:
    UltraSonic_HC_SR04(int trigger, int echo);
    double distancia_cm();
    double distancia_mm();
    int distanceInMicroseconds();
private:
    int pin_trigger;
    int pin_echo;
};

#endif // ULTRASONIC_HC_SR04_H_INCLUDED
