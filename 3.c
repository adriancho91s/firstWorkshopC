/*
- Fecha: 12 de agosto 2023
- Hora: 12:00
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa calcula el perimetro de un rectángulo a partir de la medida de dos de sus lados: ancho y largo.
- Entrada: ancho y largo, enteros positivos (distancia)
- Salida: perimetro, entero positivo (distancia)
- Restricciones: ancho y largo deben ser enteros positivos
*/

//Librerías

#include <stdio.h>

// Función principal

int main () {
    //Declaración de variables
    int ancho, largo, perimetro;

    //Entrada de datos
    printf("Por favor digite el largo del rectángulo: ");
    scanf("%d", &largo);
    printf("Por favor digite el ancho del rectángulo: ");
    scanf("%d", &ancho);

    //calcular el perimetro
    perimetro = 2 * (ancho + largo);

    //Salida de datos
    printf("\nEl perimetro de un rectángulo de ancho %d y largo %d es: %d", ancho, largo, perimetro);

    return 0;
}