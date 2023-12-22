# Biblioteca UltraSonic_HC_SR04

A biblioteca UltraSonic_HC_SR04 é uma implementação em C++ para utilizar o sensor ultrassônico HC-SR04 com a plataforma Arduino.

## Requisitos

- Placa Arduino compatível
- Sensor Ultrassônico HC-SR04
- Fios de conexão

## Mapa de Conexões

Certifique-se de conectar o sensor aos pinos corretos na sua placa Arduino:

- Pino Trigger do HC-SR04 -> Pino de saída digital no Arduino (por exemplo, pin 4)
- Pino Echo do HC-SR04 -> Pino de entrada digital no Arduino (por exemplo, pin 5)
  
![Arduino_and_HC_SR04](https://github.com/alexxsouzaa/UltraSonic_HC_SR04/assets/132787362/17cb2b34-fda8-4a18-802c-d52b00999779)

## Como Funciona

A classe `UltraSonic_HC_SR04` inclui métodos para medir a distância em centímetros (`distancia_cm()`) e metros (`distancia_m()`) utilizando o sensor HC-SR04.

O método `distancia_cm()` realiza a medição em centímetros, enquanto o método `distancia_m()` converte a medida para metros. Ambos os métodos utilizam os princípios de ultrassom para calcular a distância com base no tempo de ida e volta do pulso.

## Licença

Este projeto é licenciado sob a licença [MIT](LICENSE), o que significa que você é livre para utilizá-lo e modificar o código conforme necessário. Consulte o arquivo de licença para obter mais detalhes.

---

**Nota:** Certifique-se de verificar as especificações do seu sensor HC-SR04 e adaptar os pinos de acordo com a sua configuração específica.

Esperamos que esta biblioteca seja útil para os seus projetos! Se encontrar problemas ou tiver sugestões de melhorias, sinta-se à vontade para contribuir ou relatar problemas.
