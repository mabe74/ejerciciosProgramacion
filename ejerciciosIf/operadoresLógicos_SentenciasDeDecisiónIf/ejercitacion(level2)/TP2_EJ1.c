
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

//1. Escriba un programa que pida un año y que escriba si es bisiesto o no.

int main(void){

int anio= 0, aux= 0;

P("Ingrese un anio: ");
S("%d", &anio);

aux = anio % 4;

if (aux == 0) {

    P("El anio %d es bisiesto",anio);
}
else{

    P("El anio %d NO es bisiesto",anio);

}

return 0;

}













