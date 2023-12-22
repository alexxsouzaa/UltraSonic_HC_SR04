# Biblioteca UltraSonic_HC_SR04 para Arduino

![HC-SR04](https://i.imgur.com/sHhnGdE.jpg)

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
#include <Arduino.h>

// Define os pinos de trigger e echo
const int PinoTrigger = 4;
const int PinoEcho = 3;

UltraSonic_HC_SR04 sensor_ultrassonico(PinoTrigger, PinoEcho);

void setup() {
  Serial.begin(9600);
}

void loop() {
  double distancia_cm = sensor_ultrassonico.distancia_cm();
  
  if (distancia_cm >= 0) {
    Serial.print("Distância em centímetros: ");
    Serial.println(distancia_cm);
  } else {
    Serial.println("Leitura inválida. Verifique a conexão do sensor.");
  }
  
  delay(1000);
}
```

## Contribuições

Se encontrar problemas ou tiver sugestões de melhorias, por favor, [abra uma issue](https://github.com/YOUR_USERNAME/UltraSonic_HC_SR04/issues) ou [faça um pull request](https://github.com/YOUR_USERNAME/UltraSonic_HC_SR04/pulls).

## Licença

Este projeto é licenciado sob a Licença MIT - consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
