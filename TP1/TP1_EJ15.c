/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
*******************************************************************************************
*/

#include<stdio.h>

/*

15. Una compañía de gaseosas comercializa tres productos: Cola, Naranja y limonada.
Realizar un programa que ingrese por teclado las ventas realizadas de cada producto y
su precio correspondiente, mostrar por pantalla un listado según el siguiente ejemplo:


*/

int main(){

char producto[9] = "PRODUCTO";
char ventas[7] = "VENTAS";
char precio[8] = "PRECIO";
char totalString[6] = "TOTAL";
char cola[5] = "COLA";
char naranja[8] = "NARANJA";
char limonada[9] = "LIMONADA";

int ventasCola=0, ventasNaranja=0, ventasLimonada=0, totalCola=0, totalNaranja=0, totalLimonada=0, totalEntero=0;
int precioCola = 20;
int precioNaranja = 10;
int precioLimonada = 30;


printf("Ingrese ventas de bebida cola: ");
scanf("%d", &ventasCola);

printf("Ingrese ventas de bebida naranja: ");
scanf("%d", &ventasNaranja);

printf("Ingrese ventas de bebida limonada:");
scanf("%d", &ventasLimonada);

totalCola = ventasCola * precioCola;
totalNaranja = ventasNaranja * precioNaranja;
totalLimonada = ventasLimonada * precioLimonada;
totalEntero = totalCola + totalNaranja + totalLimonada;

printf("%s", producto);
printf("%12s",ventas);
printf("%15s",precio);
printf("%15s",totalString);

printf("\n%s",cola);
printf("%14d",ventasCola);
printf("%15d",precioCola);
printf("%17d",totalCola);

printf("\n%s",naranja);
printf("%11d",ventasNaranja);
printf("%15d",precioNaranja);
printf("%17d",totalNaranja);

printf("\n%s",limonada);
printf("%10d",ventasLimonada);
printf("%15d",precioLimonada);
printf("%17d\n\n",totalLimonada);
printf("%35s",totalString);
printf("%15d",totalEntero);

return 0;

}
