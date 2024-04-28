/*
******************************************************************************************
                                     Ejercicios: extra secuenciales
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>

/*

Tres personas invierten dinero para fundar una empresa (no necesariamente en
partes iguales). Se pide desarrollar un algoritmo que calcule que porcentaje invirtió
cada una.

*/

int main(){

char persona1[10];
char persona2[10];
char persona3[10];
float I1,I2,I3,total,p1,p2,p3;


printf("Ingrese el nombre 1:");
scanf("%s", persona1);
printf("Ingrese el importe:");
scanf("%f", &I1);

printf("Ingrese el nombre 2:");
scanf("%s", persona2);
printf("Ingrese el importe:");
scanf("%f", &I2); 


printf("Ingrese el nombre 3:");
scanf("%s", persona3);
printf("Ingrese el importe:");
scanf("%f", &I3);


total = I1+I2+I3;

p1 = I1*100 / total;
p2 = I2*100 / total;
p3 = I3*100 / total;

printf("%s %.2f\n",persona1, p1);
printf("%s %.2f\n",persona2, p2);
printf("%s %.2f\n",persona3, p3);


return 0;

}