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

11. Una empresa paga sueldos calculando el valor del sueldo básico por la cantidad de
horas trabajadas y un plus por antigüedad que corresponde al 2% por cada año trabajado. 
El sueldo básico es de $4500. Se desea ingresar la cantidad de horas trabajadas, la 
antigüedad y obtener el sueldo neto.

*/

int main(void){


float horasTrabajadas = 0, sueldoNeto = 0, plus = 0;
int sueldoBasico = 4500, antiguedad = 0;

printf("Ingrese la cantidad de horas trabajadas: ");
scanf("%f", & horasTrabajadas);

printf("Ingrese la antiguedad del trabajador: ");
scanf("%d", & antiguedad);

plus = sueldoBasico * antiguedad * 0.2;

sueldoNeto = (sueldoBasico * horasTrabajadas) + plus;

printf("El sueldo neto del trabajador es: %.2f", sueldoNeto);

return 0;

}

