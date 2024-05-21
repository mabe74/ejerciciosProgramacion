
/*
******************************************************************************************
                                     Ejercicios: TP1
Materia: Programación
Profesores: Graciela Djeboglian, Miguel Silva
Alumno: Marcos Benitez
                                                                                    
******************************************************************************************
*/

#include <stdio.h>
#define P printf

int main(void){

int  res1= 0, res3= 0, res5= 0, res6= 0, res7= 0;
float res2= 0, res4= 0;

char preg4[8]= "preg. 4";
char preg2[8]= "preg. 2";
char preg1[8]= "preg. 1";



res1= (25 && 3) + 2; //El resultado del paréntesis (25 && 3) es uno (1), porque 25 y 3 son distintos de cero (0)(tabla de verdad AND)
res2= 3 * (7.6 || 0);//El resultado del paréntesis (7.6 || 0) es 1, porque 7.6 o 0 (una u otra) es uno (1)(tabla de verdad OR)
//res3= 75 / (1 && 0); //El resultado del paréntesis (1 && 0) es cero (0). No se puede dividir por cero (0).
res4= (0 || 5) + (3.14159 && 2.14);
res5= 5 * (0x5 && 3);
res6= (0x5 && 0xA7) * (0 || 0x0);
//res7= (preg. 4) + (preg. 2) && (preg. 1); // No tienen lógica 


P("1. El resultado es: %d\n", res1);
P("2. El resultado es: %.2f\n", res2);
P("4. El resultado es: %.f\n", res4);
P("5. El resultado es: %d\n", res5);
P("6. El resultado es: %d\n", res6);









return 0;

}

////////////////////////////////////////////////////////////////////////////////////////////////

/*

Caso 1:

La línea de código `resultado = (25 && 3) + 2;` realiza una operación que involucra operadores
lógicos y aritméticos en C (o en lenguajes similares que sigan la misma sintaxis y semántica).
A continuación, desglosamos la operación paso a paso:

1. **Operador Lógico AND (`&&`)**:
   - `25 && 3`: En C, el operador lógico AND (`&&`) evalúa dos expresiones booleanas. 
   Si ambas son verdaderas (es decir, no son cero), el resultado es `true` (o 1 en términos numéricos).
   - En este caso, ambos `25` y `3` son valores diferentes de cero, lo que significa que ambos se 
     consideran `true`.
   - Por lo tanto, `25 && 3` se evalúa como `1` (ya que ambos operandos son verdaderos).

2. **Suma Aritmética**:
   - `(25 && 3) + 2`: Después de evaluar `25 && 3` como `1`, la expresión se convierte en `1 + 2`.

3. **Asignación**:
   - `resultado = 1 + 2`: Finalmente, se realiza la suma aritmética, resultando en `3`.
   - El valor `3` se asigna a la variable `resultado`.

En resumen, la línea de código asigna el valor `3` a la variable `resultado`. Aquí está la 
descomposición paso a paso:

```c
resultado = (25 && 3) + 2; // 25 && 3 se evalúa como 1
resultado = 1 + 2;         // 1 + 2 se evalúa como 3
resultado = 3;             // El valor 3 se asigna a la variable resultado
```

Por lo tanto, después de ejecutar esta línea de código, la variable `resultado` tendrá el valor `3`.

*/

///////////////////////////////////////////////////////////////////////////////////////////////////