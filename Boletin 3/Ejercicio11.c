//modificado para que valga para todo

#include <stdio.h>

void imprimir_secuencia(float numero1,float numero2,float secuencia) {
    float numero_actual=numero1;
    while (numero_actual<=numero2) {
        printf("%f ",numero_actual);
        numero_actual=numero_actual+secuencia;
    }
}

int main() {
    float numero1,numero2;
    do {
        printf("Escribe los intervalos [i f]:");
        scanf("%f %f",&numero1,&numero2);
    }while (!(numero1<numero2));
    float secuencia;
    do {
        printf("Escibre la secuencia:");
        scanf("%f",&secuencia);
    }while (secuencia<0);
    printf("\nSecuencia:");
    imprimir_secuencia(numero1,numero2,secuencia);
    return 0;
}