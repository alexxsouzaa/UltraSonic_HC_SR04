# Biblioteca UltraSonic_HC_SR04 para Arduino

## Visão Geral

A biblioteca UltraSonic_HC_SR04 simplifica a integração do sensor de distância ultrassônico HC-SR04 com a plataforma Arduino. Este sensor amplamente utilizado mede distâncias emitindo ondas ultrassônicas e calculando o tempo que as ondas levam para retornar.

## Principais Características

- **Integração Fácil:** Fornece uma interface intuitiva para configurar e ler distâncias usando o sensor HC-SR04.

- **Medições Precisas de Distância:** Oferece métodos para obter distâncias em centímetros (`distancia_cm()`) e metros (`distancia_m()`), garantindo medições precisas.

- **Proteção Contra Leituras Inválidas:** A função `distancia_cm()` inclui validação para evitar leituras inválidas, retornando -1,0 se a distância for zero ou exceder 400 centímetros.

## Instalação

1. Baixe o [arquivo ZIP da biblioteca UltraSonic_HC_SR04](https://github.com/YOUR_USERNAME/UltraSonic_HC_SR04/archive/main.zip).
2. Abra o Arduino IDE.
3. Vá para "Sketch" -> "Incluir Biblioteca" -> "Adicionar Biblioteca .ZIP...".
4. Selecione o arquivo ZIP baixado.

## Exemplo de Uso

```cpp
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
```

## Licença

Este projeto é licenciado sob a Licença MIT - consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
