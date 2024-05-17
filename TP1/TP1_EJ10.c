/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>

/*

10. Ingresar un valor en segundo e indicar a cuantos dias, horas, minutos y segundos
equivale.

*/


int main(void){

#define SEG_DIA 86400
#define SEG_HORA 3600
#define SEG_MIN 60
#define SEG_SEG 1

int cantSeg = 0, segAdias = 0, segAhora = 0, segAmin = 0 , segAseg= 0;

printf("Ingrese un valor en segundos: ");
scanf("%d", &cantSeg);

segAdias = cantSeg / SEG_DIA;
segAhora = cantSeg / SEG_HORA;
segAmin = cantSeg / SEG_MIN;
segAseg = cantSeg / SEG_SEG;


printf("dias: %d, horas: %d, minutos: %d, segundos: %d",segAdias,segAhora,segAmin,segAseg);


return 0;
}


