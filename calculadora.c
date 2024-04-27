
/*********************************************************************************************

                                              INSPT

Carrera: Informática Aplicada
Materia: Programación I
Profesor/a: Graciela
            Miguel Silva
Alumno: Marcos Benítez


***********************************************************************************************/

#include<stdio.h>
#include<math.h>

//Ejercicio. Desarrollar una calculadora.

int main(void){

float numA, numB, resultado, exp ; //Declara las varialbles flotantes
int opcion;                        //Declara las varialbles enteras para la carga del menú



printf("*************************************************CALCULADORA***************************************\n");

printf("Elija una opcion:\n");
printf("\n\nMENU:\n");


printf("1) SUMAR\n");
printf("2) RESTA\n");
printf("3) MULTIPLICAR\n");
printf("4) DIVIDIR\n");
printf("5) POTENCIACION\n");
printf("6) RAIZ CUADRADA\n");
printf("7) AREA DE UN CUADRADO O RECTANGULO\n");
printf("8) AREA DE UN TRIANGULO RECTANGULO\n");
printf("9) AREA DE UN PARALELOGRAMO");
printf("10) AREA DE UN CIRCULO\n");
printf("11) VOLUMEN DE UN CILINDRO\n");
printf("12) VOLUMEN DE UNA ESFERA\n\n");

scanf("%d", &opcion);

//Comienzo estructura switch
switch (opcion){

        case 1:                                  
                printf("Ingrese el numero A: ");      //Pide ingresar el número A
                scanf("%f",&numA);                    //alamcena el dato en memoria

                printf("Ingrese el numero B: ");      //Pide ingresar el número B
                scanf("%f", &numB);                   //alamcena el dato en memoria

                resultado = numA + numB;
                printf("La suma es de: %.2f + %.2f = %.2f", numA, numB, resultado);
                break;
      

               
        case 2:
                printf("Ingrese el numero A: ");      //Pide ingresar el número A
                scanf("%f",&numA);                    //alamcena el dato en memoria

                printf("Ingrese el numero B: ");      //Pide ingresar el número B
                scanf("%f", &numB);                   //alamcena el dato en memoria

                resultado = numA - numB;
                printf("La resta es: %.2f - %.2f = %.2f",numA, numB, resultado);
                break;

        case 3:

                printf("Ingrese el numero A: ");      //Pide ingresar el número A
                scanf("%f",&numA);                    //alamcena el dato en memoria

                printf("Ingrese el numero B: ");      //Pide ingresar el número B
                scanf("%f", &numB);                   //alamcena el dato en memoria

                resultado = numA * numB;
                printf("El producto de %.2f * %.2f = %.2f",numA,numB, resultado);
                break;

        case 4:
                printf("Ingrese el numero A: ");      //Pide ingresar el número A
                scanf("%f",&numA);                    //alamcena el dato en memoria

                printf("Ingrese el numero B: ");      //Pide ingresar el número B
                scanf("%f", &numB);                   //alamcena el dato en memoria

                resultado = numA / numB;
                printf("La division de %.2f / %.2f = %.2f",numA, numB, resultado);
                break;

        case 5:
                printf("Ingrese la base: ");          //Pide ingresar el número A
                scanf("%f",&numA);                    //alamcena el dato en memoria

                printf("Ingrese el exponente: ");     //Pide ingresar el número A
                scanf("%f",&exp);  
                             
                resultado = pow (numA, exp) ;
                printf("La base %.2f con exponente %.2f es: %.2f",numA, exp, resultado);
                break;    

        case 6:

                printf("Ingrese el argumento de la raiz: ");      //Pide ingresar el número A
                scanf("%f",&numA);                                //alamcena el dato en memoria

                resultado = sqrt (numA) ;
                printf("La raiz cuadrada de :%.2f es %.2f",numA, resultado);
                break;    


        case 7:

                printf("Ingrese la base del cuadrado o rectangulo: ");      //Pide ingresar el número A
                scanf("%f",&numA); 
                
                printf("Ingrese la altura del cuadrado o rectangulo: ");    //Pide ingresar el número A
                scanf("%f",&numB); 
                
                resultado = numA * numB ;
                
                printf("El area del cuadrado o rectangulo es: %.2f", resultado);
                break;    

        case 8:

                printf("Ingrese la base del triangulo: ");      //Pide ingresar el número A
                scanf("%f",&numA); 
                
                printf("Ingrese la altura del triangulo: ");    //Pide ingresar el número A
                scanf("%f",&numB); 
                
                resultado = (numA * numB) / 2;
                
                printf("El area del triangulo es: %.2f", resultado);
                break;    

                

        default:
                printf("Opcion invalida.\n");

} //Fin estructura switch

return 0;

}//Fin función main