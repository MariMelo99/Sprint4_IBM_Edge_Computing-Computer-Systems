#include <Servo.h>

Servo servoBase;    // Servo para a base do braço
Servo servoDireito;  // Servo para o braço direito
Servo servoEsquerdo; // Servo para o braço esquerdo
Servo servoGarra;    // Servo para a garra

int joyX, joyY;  // Variáveis para armazenar as leituras do joystick
int botaoGarraEsquerdo;  // Variável para armazenar o estado do botão esquerdo da garra
int botaoGarraDireito;  // Variável para armazenar o estado do botão direito da garra

void setup() {
  servoBase.attach(9);      // Conecte o pino de controle do servo da base ao pino 9
  servoDireito.attach(10);   // Conecte o pino de controle do servo direito ao pino 10
  servoEsquerdo.attach(11);  // Conecte o pino de controle do servo esquerdo ao pino 11
  servoGarra.attach(12);     // Conecte o pino de controle do servo da garra ao pino 12
  pinMode(A0, INPUT);        // Configura o pino A0 como entrada para o botão esquerdo da garra
  pinMode(A3, INPUT);        // Configura o pino A3 como entrada para o botão direito da garra
}

void loop() {
  lerJoystick();
  lerBotoesGarra();
  moverBarras();
  delay(15); // Aguarde 15 milissegundos para os servos alcançarem a posição desejada
}

void lerJoystick() {
  joyX = analogRead(A5);  // Leia a posição X do joystick direito (conectado ao pino A5)
  joyY = analogRead(A4);  // Leia a posição Y do joystick direito (conectado ao pino A4)

  // Mapeie os valores do joystick para o intervalo de 0 a 180 para os servos
  joyX = map(joyX, 0, 1023, 0, 180);
  joyY = map(joyY, 0, 1023, 0, 180);
}

void lerBotoesGarra() {
  botaoGarraEsquerdo = digitalRead(A0); // Leia o estado do botão esquerdo da garra conectado ao pino A0
  botaoGarraDireito = digitalRead(A3);  // Leia o estado do botão direito da garra conectado ao pino A3
}

void moverBarras() {
  // Código para mover os servos com base nas leituras do joystick
  servoBase.write(joyX);
  servoDireito.write(joyY);
  servoEsquerdo.write(joyY);

  // Controle da garra usando os botões do joystick
  if (botaoGarraEsquerdo == HIGH) {
    servoGarra.write(180);  // Abra a garra
  } else if (botaoGarraDireito == HIGH) {
    servoGarra.write(90);   // Feche a garra
  }
}
