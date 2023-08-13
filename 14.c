/*
- Fecha: 13 de agosto 2023
- Hora: 6:10 pm
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa recibe como valor de entrada un número. Que será el número en que va a ser evaluada la siguiente ecuación:
- \frac{\left(\frac{x}{2}+\frac{\sqrt{x}}{x}+20 \right)\cdot\frac{16}{x}}{\frac{\frac{1}{2}-\frac{3}{4}+x}{\frac{2}{17}}+x} + x^2 
- Entrada: número | x ∈ R
- Salida: resultado de la ecuación
- Restricciones: x != 0
*/

//Librerías
#include <stdio.h>
#include <math.h>

//Función principal

int main () {
    //Declaración de variables
    double x, resultado;
    /*
    x es la variable que almacenará el valor de entrada
    resultado es la variable que almacenará el resultado de la ecuación
    */

    //Entrada
    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);

    //Evaluar la ecuación
    resultado = ((((x/2.)+(sqrt(x)/x)+20.)*(16./x))/((((1./2.)-(3./4.)+x)/(2./17.))+x))+pow(x,2);

    //Salida
    printf("\nEl resultado de la ecuación es: %lf", resultado);

    return 0;
}