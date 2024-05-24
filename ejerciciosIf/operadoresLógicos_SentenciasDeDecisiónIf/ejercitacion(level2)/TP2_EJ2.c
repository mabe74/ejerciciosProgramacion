
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

Escriba un programa que pida dos números enteros y que calcule su división, indicando si la
división es exacta o no.

*/

int main(void){

int numA= 0, numB=0, resto= 0, div= 0;

P("Ingrese el numero A: ");
S("%d", &numA);

P("Ingrese el numero B: ");
S("%d", &numB);

resto= numA % numB;
div= numA / numB; 

if(resto == 0){

    P("La divsion del numero %d con el numero %d es exacta", numA, numB);

}else{

    P("La divsion del numero %d con el numero %d NO es exacta", numA, numB);

}

return 0;

}





