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
- La aplicación toma como entrada un número entero positivo que corresponde a la velocidad en mph
- y retorna la velocidad en m/s
*/

//Librerías
#include <stdio.h>

//Función principal

int main () {
    //Declaración de variables
    int mph; //Variable que almacena la velocidad en mph ingresada por el usuario
    float ms; // Variable que almacena la velocidad en m/s

    //Entrada
    printf("Por favor, digite la cantidad de mph que desea convertir a m/s: ");
    scanf("%i", &mph);

    //Conversión
    ms = mph * 0.44704;

    //Salida
    printf("\n%i mph equivalen a %.2f m/s", mph, ms);

    return 0;
}