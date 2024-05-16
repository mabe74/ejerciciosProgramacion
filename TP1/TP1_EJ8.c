/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>
#include <math.h>

/*
8. Ingresar dos valores que corresponden a la base y altura de un triángulo y obtener: el
perímetro y la superficie.

*/

int main (void){

float b = 0,  h = 0, area = 0, perimetro = 0, auxb = 0, auxh = 0, auxRaiz = 0;

printf("Ingrese la base del triangulo:");
scanf("%f", &b);

printf("Ingrese la altura del triangulo:");
scanf("%f", &h);

area = (b*h)/2;

auxb = pow(b,2); //Eleva al cuadrado el cateto base
auxh = pow(h,2); //Eleva al cuadrado el cateto altura
auxRaiz = sqrt(auxb+auxh); //Calcula la hipotenusa

perimetro = b+h+auxRaiz;

printf("El area del triangulo es: %.2f y el perimetro del triangulo es: %.2f", area, perimetro);

return 0;

}