/*
- Fecha: 12 de agosto 2023
- Hora: 2:00 pm
- Versión del código: 1.2
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- La aplicación toma como valor de entrada 3 valores tipo string: nombre, apellido y año de nacimiento. 
- Entrada: nombre, apellido y año de nacimiento
- Salida: nombre, apellido y año de nacimiento en una sola línea
- Restricciones: El nombre y el apellido no pueden tener más de 50 caracteres
*/

//Librerías
#include <stdio.h>
#include <string.h>

//Función principal

int main () {
    //Declaración de variables
    char nombre[50];//Se declara la variable nombre como un arreglo de caracteres de 50 posiciones, para capturar la entrada del usuario
    char apellido[50];//Se declara la variable apellido como un arreglo de caracteres de 50 posiciones, para capturar la entrada del usuario
    int añoNacimiento;//Se declara la variable añoNacimiento como un entero, para capturar la entrada del usuario

    //Entrada de datos
    printf("Por favor, digite su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0'; //Elimina el salto de línea de la entrada de datos
    printf("Por favor, digite su apellido: ");
    fgets(apellido, sizeof(apellido), stdin);
    apellido[strcspn(apellido, "\n")] = '\0'; //Elimina el salto de línea de la entrada de datos
    printf("Por favor, digite su año de nacimiento: ");
    scanf("%i", &añoNacimiento);

    //Salida de datos
    printf("\n%s %s %i", nombre, apellido, añoNacimiento);

    return 0;
}