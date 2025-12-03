#include <stdio.h>

void triangulo_floyd_mostrar(int numero) {
    int n_fila=1;
    for (int i=1;i<=numero;i++) {
        for (int j=0;j<n_fila;j++) {
            printf("%d ",i);
            i++;
        }
        printf("\n");
        n_fila++;
        i--;
    }
}

int main() {
    int numero=1;
    printf("Introduzca un numero entero:");
    scanf("%d",&numero);
    triangulo_floyd_mostrar(numero);
    return 0;
}