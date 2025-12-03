#include<stdio.h>

int main() {
    //1euro es 1.16 dolares
    const float CONVERSION = 0.16;
    float dinero = 0.0;
    int opcion = -1;
    while (opcion != 0 && opcion != 1) {
        printf("Introduce una opcion:");
        printf("\nConversion euro a dolar(0)");
        printf("\nconversion dolar euro(1)\n");
        scanf("%d", &opcion);
    }
    printf("Introduce la cantidad de dinero:");
    scanf("%f", &dinero);
    if (opcion == 0) {
        printf("La conversion es:%f", (dinero * (1 + CONVERSION)));
    } else {
        printf("La conversion es:%f", (dinero * (1 - CONVERSION)));
    }
    return 0;
}
