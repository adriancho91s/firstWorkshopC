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
- La aplicación recibe dos valores enteros positivos, convierte horas y minutos a sólo minutos
- Entrada: 2 valores enteros positivos (horas, minutos)
- Salida: 1 valor entero positivo (minutos)
- Restricciones: No se aceptan valores negativos ni decimales
*/

// Librerías

#include <stdio.h>

// Función principal

int main (){
    // Declaración de variables
    int horas, minutos, minutosTotales;// (horas, minutos) almacenará los valores de entrada, minutosTotales almacenará el resultado de la conversión

    // Entrada de datos
    printf("Por favor dígite la cantidad de horas: ");
    scanf("%d", &horas);
    printf("Por favor dígite la cantidad de minutos: ");
    scanf("%d", &minutos);

    // Conversión
    minutosTotales = (horas * 60) + minutos;

    // Salida de datos
    printf("\n%i horas y %i minutos equivalen a %i minutos", horas, minutos, minutosTotales);


    return 0;
}