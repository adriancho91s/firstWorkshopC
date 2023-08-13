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
- Este programa recibe un número entero como entrada que corresponde a la cantidad de km/h y lo convierte a mph
- Entrada: 1 número entero (km/h)
- Salida: 1 número entero (mph)
- Restricciones: El número debe ser entero y positivo
*/

// Librerías
#include <stdio.h>

// Función principal

int main() {
    // Declaración de variables
    float kmh, mph;// Kmh almacenará la entrada de datos y mph almacenará el resultado de la conversión

    // Entrada de datos
    printf("Por favor, dígite cuantos km/h desea convertir a mph: ");
    scanf("%f", &kmh);

    // Conversión de km/h a mph
    mph = kmh * 0.6213712;

    // Salida de datos
    printf("\n%.0f km/h equivale a %.2f mph", kmh, mph);


    return 0;
}