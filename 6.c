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
- La aplicación toma como valor de entrada un entero positivo (minutos) y convierte este valor a horas y minutos.
- Entrada: entero positivo (minutos)
- Salida: entero positivo (horas) y entero positivo (minutos)
- Restricciones: el valor de entrada debe ser un entero positivo
*/

// Librerías
#include <stdio.h>

// Función principal

int main () {
    // Declaración de variables
    int minutos, horas, minutosRestantes;//Se declaran las variables de tipo entero, (minutos) almacenará el numero ingresado por el usuario
    // (horas) almacenará el resultado de la conversión de minutos a horas y (minutosRestantes) almacenará el residuo de la conversión de minutos a horas

    // Entrada de datos
    printf("Por favor, digite la cantidad de minutos: ");
    scanf("%d", &minutos);

    // Conversión
    horas = minutos / 60;
    minutosRestantes = minutos % 60;

    // Salida de datos
    printf("\n%i minutos equivalen a %d horas y %d minutos", minutos, horas, minutosRestantes);

}