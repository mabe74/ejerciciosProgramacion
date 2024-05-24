
/*
******************************************************************************************
                                     Ejercicios: TP2
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include<stdio.h>
#include<math.h>

/*

14. Desarrollar un algoritmo para completar el siguiente menú de opciones. 
Realizar las operaciones correspondiente. Investigar, analizar y utilizar 
la biblioteca (math.h).

#include <stdio.h> 
int main() { 
    int x; 
    float num; 
    printf("(1) EL TRIPLE\n"); 
    printf("(2) EL CUADRADO\n"); 
    printf("(3) LOGARITMO NATURAL\n"); 
    printf("(4) LOGARITMO DECIMAL\n"); 
    printf(" Escribe el número de la opción que desees: \n"); 
    scanf("%d",&x); 

*/

int main(void) { 
    int x; //Opcion del menu
    float num; //Valor ingresado
    printf("(1) EL TRIPLE\n"); 
    printf("(2) EL CUADRADO\n"); 
    printf("(3) LOGARITMO NATURAL\n"); 
    printf("(4) LOGARITMO DECIMAL\n"); 
    printf(" Escribe el n%cmero de la opci%cn que desees: ", 163, 162); //Agrega los acentos
    scanf("%d",&x); 

    printf("Ingrese un n%cmero: ", 163);
    scanf("%f", &num);

    switch (x)
    {
    case 1:
        num*= 3;
        printf("El triple es: %.2f",num);
        break;
    case 2:
        num= pow(num,2);
        printf("El cuadrado es: %.2f",num);
        break;
    case 3: 
        num= log(num);
        printf("El logaritmo natural es: %.2f", num);
        break;
    case 4:
        num= log10(num);
        printf("El logaritmo es: %.2f", num);
        break;
    
    default:
        break;
    }


return 0;


}