#include<stdio.h>

float resultado(float xl,float xc) {
    float r;
    r=xl-xc;
    return r;
}

int main() {
    float xl;
    float xc;

    printf("Calculadora impedancia(Z) en ohmios de un circuito LC en serie.");
    printf("\nReactancia capacitativa:");
    scanf("%f",&xl);
    printf("\nReactancia inductiva:");
    scanf("%f",&xc);
    printf("Resultado:%f",resultado(xl,xc));
    return 0;
}