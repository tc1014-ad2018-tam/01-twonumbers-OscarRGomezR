/*
 * Este programa nos ayudará a calcular el resultado
 * de la suma, la resta, la multiplicacion y la division
 * entre dos números.
 *
 * Autor: Óscar Rubén Gómez Ríos
 * Fecha: 23 de Agosto de 2018
 * Correo: A01411750@itesm.mx
 *
 */
#include <stdio.h>
int main () {
    // Declaración de variables
    double Número1;
    double Número2;
    double Súma;
    double Resta;
    double Multiplicación;
    double División;

    printf ("Hola, hoy te ayudare a sumar, restar, multiplicar y dividir los números que me proporcionaste");
    printf ("Digite el primer número: ");
    scanf("%lf", &Número1);
    printf("Digite el segundo número ");
    scanf("%lf", &Número2);

    Súma = (Número1 + Número2);
    Resta = (Número1 - Número2);
    Multiplicación = (Número1 * Número2);
    División = (Número1 / Número2);
    printf("El resúltado de la Súma es: %lf\n", Súma);
    printf("El resúltado de la Resta es:%lf\n", Resta);
    printf("El resúltado de la Multiplicación es: %lf\n", Multiplicación);
    printf("El resúltado de la División es; %lf\n", División);

    return 0;

}