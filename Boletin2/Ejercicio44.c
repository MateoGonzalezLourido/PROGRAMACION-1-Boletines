#include <stdio.h>

int main() {
    int n1 = -1;
    int n2 = -1;
    while (n1 < 0 || n2 < 0) {
        printf("Introduzca dos numeros positivos enteros(n n)\n");
        scanf("%d %d", &n1, &n2);
    }

    int indice = 0;
    int resultados[n2 - n1 - 1]; //en principio los extremos son abiertos
    for (int i = n1 + 1; i < n2; i++) {
        int divisores_suma = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                divisores_suma += j;
            }
        }
        if (divisores_suma < i) {
            resultados[indice] = 0;
        } else if (divisores_suma == i) {
            resultados[indice] = 1;
        } else {
            resultados[indice] = 2;
        }
        indice++;
    }
    for (int i = 0; i < n2 - n1 - 1; i++) {
        if (resultados[i] == 0) {
            printf("Perfecto ");
        } else if (resultados[i] == 1) {
            printf("abundante ");
        } else {
            printf("deficiente ");
        }
    }

    return 0;
}
