
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
Supongamos que tenemos estas variables:

int a= 10;
float b= 19.3;
double d= 64.8;  
char c=64;
char h='a';

Indica de qué tipo de dato debería ser el resultado de las siguientes expresiones para
obtener el resultado adecuado: puede ser más de uno.


---------------------------------------------------------------------
*    a+b      c+d      (int)d+a    d+b      (float)c+d     h+1      *
---------------------------------------------------------------------
*    char     char      char       char       char         char´    *
*    int      int       int´       int        int          int´     *
*    float´   float´    float      float´     float´       float    *
*    double´  double´   double     double´    double´      double   *
---------------------------------------------------------------------


´ selección

*/

int main(void){


float col1, col2, col4, col5; //a+b, c+d, d+b, (float)c+d
int col3; //(int)d+a
char col6; //h+1


int a= 10;
float b= 19.3;
double d= 64.8;  //El especificador de formato es %f (float). 
char c=64;
char h='a';

int aux_e= 64.8; //aux_e es la variable d tomada como entero
float aux_g= 64; //aux_g es la variable c tomada como flotante
int aux_col = 0; //aux_col variable auxiliar

col1= a+b;
col2= c+d;
col3= aux_e+a;
col4= d+b;
col5= aux_g+d;
col6= h+1;

aux_col= h+1;

printf("%.2f\n", col1);
printf("%.2f\n", col2);
printf("%d\n", col3);
printf("%.2f\n", col4);
printf("%.2f\n", col5);
printf("%c, %d\n", col6, aux_col);

return 0;

}