#include <Arduino.h>

//motor A
const byte motorA_1A = 16;  //pinos de controle do motor A +
const byte motorA_1B = 17;  //pinos de controle do motor A -

// //motor B
const byte motorB_1A = 18;  //pinos de controle do motor B +
const byte motorB_1B = 19;  //pinos de controle do motor B -

void init_driver_motor()
{
    pinMode(motorA_1A, OUTPUT);   // motor A +
    pinMode(motorA_1B, OUTPUT);   // motor A -
    pinMode(motorB_1A, OUTPUT);   // motor B +
    pinMode(motorB_1B, OUTPUT);   // motor B -
    Serial.println("Motores inicializados...");
}

void sentido_frente(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
{
    digitalWrite(motorA_1A, HIGH);
    digitalWrite(motorA_1B, LOW);
    digitalWrite(motorB_1A, HIGH);
    digitalWrite(motorB_1B, LOW);
}

void sentido_re(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
{
    digitalWrite(motorA_1A, LOW);
    digitalWrite(motorA_1B, HIGH);
    digitalWrite(motorB_1A, LOW);
    digitalWrite(motorB_1B, HIGH);
}

void sentido_esquerda(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
{
    digitalWrite(motorA_1A, HIGH);
    digitalWrite(motorA_1B, LOW);
    digitalWrite(motorB_1A, LOW);
    digitalWrite(motorB_1B, HIGH);
}

void sentido_direita(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
{
    digitalWrite(motorA_1A, LOW);
    digitalWrite(motorA_1B, HIGH);
    digitalWrite(motorB_1A, HIGH);
    digitalWrite(motorB_1B, LOW);
}

void parar(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
{
    digitalWrite(motorA_1A, LOW);
    digitalWrite(motorA_1B, LOW);
    digitalWrite(motorB_1A, LOW);
    digitalWrite(motorB_1B, LOW);
}