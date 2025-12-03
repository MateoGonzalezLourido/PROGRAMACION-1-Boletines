#include<stdio.h>
#define TAM 3

void  PedirNumeros(int array[]) {
    for (int i=0;i<TAM;i++) {
        printf("\nIntroduce el numero%d : ",i);
        scanf("%d",&array[i]);
    }
}
int BuscarN(int numeros[],int n,int indice) {
    if (indice==TAM) return 0;
    if (numeros[indice]==n) return 1;
    return BuscarN(numeros,n,indice+1);
}
int main() {
    int numeros[TAM];
    PedirNumeros(numeros);

    int n;
    printf("Introduce el numero que quieres buscar");
    scanf("%d",&n);

    if (BuscarN(numeros,n,0)==1) {
        printf("Si esta en el array");
    }
    else {
        printf("No esta en el array");
    }
    return 0;
}