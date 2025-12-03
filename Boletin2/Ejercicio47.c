#include <stdio.h>

int main() {
    int FILAS = 0;
    while (FILAS <= 0) {
        printf("introduzca los numeros de filas que quiere");
        scanf("%d", &FILAS);
    }
    int numeros = 1;
    int numero_final = 1;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < numeros; j++) {
            printf("%d ", numero_final);
            numero_final++;
        }
        printf("\n");
        numeros++;
    }
    return 0;
}
