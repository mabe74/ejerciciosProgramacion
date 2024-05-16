/*
******************************************************************************************
                              Ejercicios extras secuenciales 

Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>

/*

Consigna:
Desarrollar un algoritmo que introduzca la fecha con formato DDMMAAAA como un entero
de 8 dígitos y emita por pantalla su edad (aproximada). Ej. Se ingresa 12071973, 
mostrar: La persona tiene 50 años. 

*/

int main(void){

//Declaración de las variables enteras
int fechaN = 0, anioN = 0, mesN = 0 , diaN = 0, aux1 = 0, totalDiasN = 0;
int fechaA = 0, anioA = 0, mesA = 0 , diaA = 0, aux2 = 0, totalDiasA = 0, totalDias = 0;


printf("Ingrese su fecha de nacimiento sin barras y sin guiones DDMMAAAA: "); //Pïde ingresar la fecha de nacimiento por teclado
scanf("%d", & fechaN);  //Almacena la fecha de nacimiento ingresada 

printf("Ingrese la fecha actual sin barras y sin guiones DDMMAAAA: "); //Pïde ingresar la fecha actual por teclado
scanf("%d", & fechaA);  //Almacena la fecha actual ingresada


//Fecha de nacimiento
anioN = fechaN % 10000; //Arroja el resto (año)
aux1 = fechaN / 10000;  //Arroja el cociente
diaN = aux1 / 100;      //Arroja el cociente (día)
mesN = aux1 % 100;      //Arroja el resto (mes)
totalDiasN = diaN + (mesN - 1)*30 + (anioN - 1)*365; //Convierte a días la fecha de nacimiento

//Fecha actual
anioA = fechaA % 10000; //Arroja el resto (año)
aux2 = fechaA / 10000;  //Arroja el cociente
diaA = aux2 / 100;      //Arroja el cociente (dia)
mesA = aux2 % 100;      //Arroja el resto (mes)
totalDiasA = diaA + (mesA - 1)*30 + (anioA - 1)*365; //Convierte a días la fecha actual

totalDias = (totalDiasA - totalDiasN) / 365; //Hace la diferencia y convierte el resultado en años


/*
//Imprime por con consola. Fecha de nacimento
printf("dia de nacimiento: %d\n", diaN);
printf("mes de nacimiento: %d\n", mesN);
printf("anio de nacimiento: %d\n", anioN);


//Imprime por consola. Fecha actual
printf("dia actual: %d\n", diaA);
printf("mes actual: %d\n", mesA);
printf("anio actual: %d\n", anioA);
*/

//Imprime por consola el total de años
printf("Usted tiene %d anios", totalDias); 

return 0;

}