#include <stdio.h>

int cal_maximo_divisor(int numero) {
    int maximo_divisor=1;
    for (int i=1;i<numero;i++) {
        if (numero%i==0) maximo_divisor=i;
    }
    return maximo_divisor;
}
int main() {
    int numero=0;
    printf("Escribe un numero entero:");
    scanf("%d",&numero);
    int maximo_divisor=cal_maximo_divisor(numero);
    printf("Maximo divisor: %d",maximo_divisor);
    return 0;
}