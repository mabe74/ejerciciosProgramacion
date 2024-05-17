#include <stdio.h>
#include <math.h>  // Para la función trunc

int main() {
    double num = 5.7;
    
    // Usando la función trunc de math.h
    double truncado = trunc(num);
    printf("truncado (con trunc): %f\n", truncado);

    // Usando casting a entero
    int truncado_int = (int)num;
    printf("truncado (con casting): %d\n", truncado_int);

    return 0;
}
