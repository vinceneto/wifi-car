#include <Arduino.h>

void sentidoFrente(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
{
    digitalWrite(motorA_1A, HIGH);
    digitalWrite(motorA_1B, LOW);
    digitalWrite(motorB_1A, HIGH);
    digitalWrite(motorB_1B, LOW);
}

void sentidoRe(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
{
    digitalWrite(motorA_1A, LOW);
    digitalWrite(motorA_1B, HIGH);
    digitalWrite(motorB_1A, LOW);
    digitalWrite(motorB_1B, HIGH);
}

void sentidoEsquerda(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
{
    digitalWrite(motorA_1A, HIGH);
    digitalWrite(motorA_1B, LOW);
    digitalWrite(motorB_1A, LOW);
    digitalWrite(motorB_1B, HIGH);
}

void sentidoDireita(const int motorA_1A, const int motorA_1B, const int motorB_1A, const int motorB_1B)
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