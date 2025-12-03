#include<stdio.h>

#define TAM 3

void PedirValores(int array[]) {
    for (int i=0;i<TAM;i++) {
        printf("\nIntroduce el numero%d : ",i);
        scanf("%lld",&array[i]);
    }
}
long long Sumatorio(int numeros[]) {
    long long int suma=0;
    for (int i=0;i<TAM;i++) {
        suma+=numeros[i];
    }
    return suma;
}
int main() {
    long long int numeros[TAM];
    PedirValores(numeros);
    printf("La suma de todos los valores es %lld",Sumatorio(numeros));
    return 0;
}