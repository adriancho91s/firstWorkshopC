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
- La aplicación tomara un valor de entrada (X), con el que evaluará la ecuación y seguidamente arrojará el resultado
- Ecuación: \frac{\frac{\frac{\frac{\frac{\frac{x}{6}+\frac{45}{x}}{x-\frac{-8}{2}}}{12}}{\sqrt{x}}}{5}+x^4}{\sqrt{x}}
- Entrada: número | x ∈ R
- Salida: resultado de evaluar la ecuación en x
- Restricciones: x != 0
*/

//Librerías
#include <stdio.h>
#include <math.h>

//Función principal

int main () {
    //Declaración de variables
    double x, resultado;
    //Entrada
    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);
    //Proceso
    resultado = ((((((((x/6.)+(45./x))/(x-(-8./2.)))/12.)/sqrt(x))/5.)+pow(x,4))/sqrt(x));
    //Salida
    printf("El resultado de la ecuación es: %lf", resultado);
    return 0;
}