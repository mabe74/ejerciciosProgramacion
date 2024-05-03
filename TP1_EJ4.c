
/*
******************************************************************************************
                                     Ejercicios: TP0
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>

/*
El siguiente programa muestra por pantalla el resultado de la ecuación (a = b^2 + 1) 
para distintos valores de b a saber (0, 2). ¿Es correcto? Si considera que no lo es, 
resuelvalo correctamente.

#include <stdio.h>

int main(){

int ecu, valor=0;
ecu=valor*valor+1;

printf ("Si el valor=%d, el resultado es =%d\n", valor, ecu);

valor=2;

printf ("Si el valor=%d, el resultado es =%d\n", valor, ecu);

return 0;
}

*/

int main(){

int ecu, ecu1, valor= 0, valor1= 2;

ecu= (valor*valor) + 1;
ecu1= (valor1*valor1) + 1;

printf("Si el valor= %d, el resultado es = %d\n", valor, ecu);
printf("Si el valor= %d, el resultado es = %d\n", valor1, ecu1);

return 0;

}


