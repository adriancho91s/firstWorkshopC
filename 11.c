/*
- Fecha: 13 de agosto 2023
- Hora: 1:33 am
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada 3 números enteros positivos
- que corresponden a horas, minutos y segundos respectivamente. En consola imprimirá
- la cantidad de milisegundos a la que corresponden dichos valores.
- Entrada: 3 números enteros positivos
- Salida: 1 número double positivo
- Restricciones: Los números deben ser enteros positivos
*/

//Librerías
#include <stdio.h>

//Función principal

int main () {
    //Declaración de variables
    int horas, minutos, segundos;
    /*
    (horas, minutos, segundos) ∈ Z
    Estas variables almacenan los valores de las horas, minutos y segundos
    ingresados por el usuario
    */
    double milisegundos;//milisegundos ∈ R
    //Esta variable almacena el valor de los milisegundos

    //Mensaje en consola
    printf("Por favor digite el numero de horas, minutos y segundos que desea convertir a milisegundos.\n");

    //Entrada
    printf("Digite horas: ");
    scanf("%d", &horas);
    printf("Digite minutos: ");
    scanf("%d", &minutos);
    printf("Digite segundos: ");
    scanf("%d", &segundos);

    //Conversión
    milisegundos = (horas * 3600000) + (minutos * 60000) + (segundos * 1000);

    //Salida
    printf("\nLa cantidad de milisegundos para %i hora, %i minutos y %i segundos es de %.0lf milisegundos", horas, minutos, segundos, milisegundos);
}