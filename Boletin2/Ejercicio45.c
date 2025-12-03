#include<stdio.h>

int main() {
    float dinero_inicial = 0;
    float intereses = 0;

    while (dinero_inicial <= 0 || intereses <= 0) {
        printf("Introduce la cantidad de dinero inicial:\n");
        scanf("%f", &dinero_inicial);
        printf("Introduce los intereses anuales en porcentaje\n");
        scanf("%f", &intereses);
    }
    float dinero_final = dinero_inicial;
    int años = 0;
    while (dinero_final < (dinero_inicial * 2)) {
        dinero_final += dinero_inicial * (intereses / 100);
        años++;
    }
    printf("Tardara en duplicarse %d", años);
    return 0;
}
