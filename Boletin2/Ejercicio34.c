//this program was done by 🐤

#include <stdio.h>

int main() {
    int n=0;
    printf("Numero para sucesion de Fibonacci:");
    scanf("%d",&n);

    int numero=0;
    int valor1=0;
    int valor2=0;
    for (int i=0;i<n;i++) {
        if (valor1==0) {
            valor1=1;
            printf("F(%d): %d\n",i,valor1);
            continue;
        }
        numero=valor2+valor1;
        valor2=valor1;
        valor1=numero;

        printf("F(%d): %d\n",i,valor2);
    }
    printf("\nEl resultado final es %d",numero);
    return 0;
}