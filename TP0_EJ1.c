#include<stdio.h>

int main(){

int a=3, b=2, c=1, d, e;
float m=2.5, n=5.4, r, s;

d=m;
d=n;
e=3.7;
d=a;
d=a;
d=a+b;
d=a/b;
d=a%b; //Arroja el resto de la división
d=a%2; //Divide por 2 y arroja el resto.
e=b/c;
e=c/b;
r=a+b;
r=a/b; //Arroja 1.00 porque a y b son enteros
r=a/2;  //Arroja 1.00 porque a y 2 son enteros
r=a/2.0;
s=m+n;
s=3+4-1;
s=3.0+4;
0-1;
a=m; 
a=m/2;
a=m/2.0;
a=3.0+4;
0-1;
r=a+1;
r=a+1.0;
a++;
r++;
b--;
a+=5; //Sumó 5 a a=8. En la variable -a- se cargó el valor 13 (8+5).
s*=5;




//printf("%.2f", s); //Muestra los vaolres de salida en la consola

printf("a: %d\n",a);
printf("b: %d\n",b);
printf("c: %d\n",c);
printf("d: %d\n",d);
printf("e: %d\n",e);
printf("m: %.2f\n",m);
printf("n: %.2f\n",n);
printf("r: %.2f\n",r);
printf("s: %.2f\n",s);



return 0;

}