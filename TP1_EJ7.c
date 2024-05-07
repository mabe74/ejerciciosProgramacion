
/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>

//7. Ingresar dos números desde el teclado y mostrar: la suma, la resta, la multiplicación y la
//división (para esta última suponer divisor distinto de cero).

int main(void){

    float a, b, suma=0, resta=0, multi=0, divi=0;

    printf("Ingrese el numero A: ");
    scanf("%f", &a);
    printf("Ingrese el numero B: ");
    scanf("%f", &b);

    suma = a+b;
    resta = a-b;
    multi = a*b;

    printf("\nsuma: %.2f\n", suma);
    printf("resta: %.2f\n", resta);
    printf("multiplicacion: %.2f\n", multi);
    
    if (b > 0) {
        divi = a / b;
        printf("division: %.2f\n", divi);
    } else {
        printf("El denominador debe ser mayor a cero\n");
    }

    return 0;
}

