/*
- Fecha: 13 de agosto 2023
- Hora: 1:52 am
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprimira el resultado de la siguiente operación:
- ((17/11) + (23/2)) / ((943/10) + √144) = 0.656925
- Entrada: Ninguna
- Salida: Resultado de la operación
- Restricciones: Ninguna
*/

//Librerías
#include <stdio.h>
#include <math.h>

//Función principal

int main () {
    //Declaración de variables
    double ecuacion;

    //Ecuación
    ecuacion = ((17.0/11) + (23.0/2)) / ((943.0/120)+ sqrt(144));

    //Output
    printf("El resultado de la ecuación ((17/11) + (23/2)) / ((943/10) + √144) es: %lf", ecuacion);

    return 0;
}