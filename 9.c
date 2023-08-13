/*
- Fecha: 13 de agosto 2023
- Hora: 1:00 am
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada dos números enteros que corresponden al valor de dos angulos
- de un triángulo. El programa calcula el valor del tercer angulo
- Entrada: Dos números enteros (angulos)
- Salida: Un número entero (angulo)
- Restricciones: Los angulos deben ser enteros positivos
*/

//Librerías
#include <stdio.h>

//Función principal

int main() {
    //Declaración de variables
    int angulo1, angulo2, angulo3;
    /*
    angulo1, angulo2: almacenan los ángulos ingresados por el usuario
    angulo3: almacena el valor del tercer ángulo del triángulo
    */

   //Entrada de datos
    printf("Por favor, digite el valor del primer angulo: ");
    scanf("%d", &angulo1);
    printf("Por favor, digite el valor del segundo angulo: ");
    scanf("%d", &angulo2);

    //Determinar tercer ángulo
    angulo3 = 180 - (angulo1 + angulo2);

    //Salida
    printf("\nEl valor del tercer angulo de un triángulo de %d° y %d° es: %d°", angulo1, angulo2, angulo3);

    return 0;
}