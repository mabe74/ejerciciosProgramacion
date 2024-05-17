
/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include<stdio.h>

// 13. Dado un número entero de tres cifras mostrar sus cifras por separado.

int main(void) {

int num = 0;
int resto = 0;




printf("Ingrese un numero entero de tres cifras: ");
scanf("%d", &num);

if (num > 99 && num < 1000) {

resto = num % 10;

printf("%d", resto);

}else{

printf("Numero incorrecto");

}


return 0;




}

