/*
- Fecha: 13 de agosto 2023
- Hora: 1:27 pm
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- La aplicación recibe como valor de entrada un número, con este valor se evalúa la siguiente ecuación:
- \frac{{x \cdot \frac{1}{2} + 25}}{{\frac{\sqrt{169}}{\sqrt{144}} + \frac{\sqrt{x}}{x}}} 
- Entrada: número ∈ R
- Salida: resultado de la ecuación
- Restricciones: x | x ∈ R 
*/

//Librerías
#include <stdio.h>
#include <math.h>

//Función principal

int main () {
    //Declaración de variables
    float x, resultado;
    /*
    la variable x almacena la entrada del usuario, el número que se va a evaluar en la ecuación
    la variable resultado almacena el resultado de evaluar la ecuación
    */

    //Entrada de datos
    printf("Por favor, ingrese el valor que le quiere asignar a x: ");
    scanf("%f", &x);

    //Evaluar ecuación
    resultado = (x * 0.5 + 25) / ((sqrt(169) / sqrt(144)) + (sqrt(x) / x));

    //Salida de datos
    printf("\nEl resultado de la ecuación para un valor de %.2f es de %f", x, resultado);

    return 0;
}