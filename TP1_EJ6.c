
/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>

//6. Ingresar por teclado un valor en Km y mostrarlo expresado en metros.

int main(void){

    float kilom, metros, conv;

    printf("Ingrese un valor en kilometros: ");
    scanf("%f", &kilom);

    conv = kilom * 1000;

    printf("%.2f km son %.2f metros", kilom, conv);

    return 0;
}

