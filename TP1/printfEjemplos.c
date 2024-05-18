#include<stdio.h>

//Ejemplos printF

int main(void){

char linea[13] = "Programacion";


printf("%s\n", linea);
printf("%15s\n",linea);
printf("%15.2s\n",linea);
printf("%.5s\n",linea);
printf("%-15s en C\n",linea);


printf("%6d\n",123);
printf("%-6d\n",123);
printf("%06d\n",123);
printf("%.2f",123.40000);





return 0;

}