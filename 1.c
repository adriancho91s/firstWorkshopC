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
- Este programa calcula la cantidad de grados farenheit a partir de una cantidad de grados centigrados
- Entrada: Grados centigrados
- Salida: Grados farenheit
- Restricciones: No se aceptan valores menores a -273.15; cero kelvin
- Formulas: F = (9/5) * C + 32
*/

// Librerías
#include <stdio.h>

// Función principal

int main() {
    // Declaración de variables
    float celsius, farenheit;//celsius(almacenará la cantidad de grados centigrados) y farenheit

    // Entradas
    printf("Por favor, ingrese los centigrados a convertir a Farenheit: ");
    scanf("%f", &celsius);

    // Proceso
    farenheit = (9.0/5.0) * celsius + 32;//Operación para convertir de grados centigrados a grados farenheit

    // Salidas
    printf("\n%.0f°C son %.2f grados Farenheit", celsius, farenheit);


    return 0;
}