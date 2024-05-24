
/*
******************************************************************************************
                                     Ejercicios: TP2
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include<stdio.h>

#define P printf
#define S scanf

/*

Escriba un programa que pida una distancia en centímetros y que escriba esa distancia en
kilómetros, metros y centímetros (escribiendo todas las unidades).

*/

int main(void){

    float distanciaCm=0, converKm=0, converM=0; 

    P("Ingrese una disntacia en centimetros:");
    S("%f", &distanciaCm);

    distanciaCm = distanciaCm;
    converM = distanciaCm / 100;
    converKm = converM / 100;

    P("La disntacia ingresada %.2f cm equivalen a %.2f km, %.2f m ", distanciaCm, converKm, converM); 


return 0;

}







