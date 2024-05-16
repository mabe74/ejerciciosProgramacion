
/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>

//5. Crea un programa que, dados dos valores para a y b, los intercambie.

int main(void){

    int a, b, aux;

    printf("Ingrese el valor A: ");
    scanf("%d", &a);
    printf("Ingrese el valor B: ");
    scanf("%d", &b);

    aux = a;
    a=b;
    b=aux;

    printf("El valor de A es: %d\n", a);

    printf("El valor de B es: %d", b);

    return 0;
}





