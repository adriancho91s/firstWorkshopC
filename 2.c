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
- Describe un programa que a partir del radio de una esfera va a calcular el volumen de la misma.

- Entrada: Radio de la esfera
- Salida: Volumen de la esfera
- Restricciones: El radio debe ser un número positivo
- Formulas: V = 4/3 * pi * r^3
*/

//Librerías
#include <stdio.h>
#include <math.h>

// Función principal

int main () {
    // Declaración de variables
    float  radio, volumen;// radio (almacenará la entrada del usuario y volumen (almacenará el resultado del cálculo)

    //pedir datos
    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &radio);

    //calcular volumen
    
    volumen = (4 * M_PI * pow(radio, 3) ) / 3 ;

    //mostrar resultados
    
    printf("\nEl volumen de la esfera de radio %.0f es de %f", radio, volumen);


    return 0;
}

