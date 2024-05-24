/*
******************************************************************************************
                                     Ejercicios: if
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include<stdio.h>

#define P printf
#define S scanf

/*

Escriba un programa que pida dos números y que conteste cuál es el menor y cuál el 
mayor o que escriba que son iguales.

*/


int main(void){

    int numA=0, numB=0;

    P("Ingrese el numero A: ");
    S("%d", &numA);
    P("Ingrese el numero B: ");
    S("%d", &numB);


        if(numA == numB){

            P("El numero %d es igual al numero %d", numA, numB);
        
        }else{

                if(numA < numB){

                    P("El numero %d es menor que el numero %d ",numA, numB);

                }else{

                    P("El numero %d es mayor al numero %d ", numA, numB);
                }
        }
}