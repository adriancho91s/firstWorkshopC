/*
- Fecha: 13 de agosto 2023
- Hora: 12:30 am
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma dos números dados por el usuario, y realiza las operaciones aritmeticas basicas con ellos
- retorna el resultado de las operaciones en consola
- Entrada: Dos numeros tipo float
- Salida: Resultado de las operaciones aritmeticas basicas
- Restricciones: Los numeros ingresados deben ser tipo float
- Nota: se ajustan dos decimales en la impresión de resultados
*/

//Librerías
#include <stdio.h>

//Función Principal

int main () {
    //Declaración de variables 
    float num1, num2, suma, resta, multiplicacion, division;

    //Solicitud de datos al usuario
    printf("Por favor, ingrese el primer número: ");
    scanf("%f", &num1);
    printf("Por favor, ingrese el segundo número: ");
    scanf("%f", &num2);

    //Operaciones aritmeticas
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    //Impresión de resultados
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicación: %.2f\n", multiplicacion);
    printf("División: %.2f\n", division);

    return 0;
}