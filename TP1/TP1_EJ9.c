/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include<stdio.h>

/*

9. Ingresar un número que se corresponde con una cantidad de días e indicar a cuántos
segundos equivalen.

*/

int main (void){

#define  SEG_DIAS 86400

int cantDias = 0, cantSeg = 0;

printf("Ingrese una cantidad de dias: ");
scanf("%d", &cantDias);

cantSeg = cantDias * SEG_DIAS;

printf("La cantidad de segundos son: %d", cantSeg);

return 0;

}