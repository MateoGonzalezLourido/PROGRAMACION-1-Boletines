//this program was done by 🐤
#include <stdio.h>

int main() {
    int correcto=0;
    while (correcto==0) {
        printf("B.-Bebe\n");
        printf("A.-Adolescente\n");
        printf("M.-Mujer\n");
        printf("H.-Hombre\n");

        char letra;
        printf("Introduzca la letra:");
        scanf("%c",&letra);

        if (letra=='B' || letra=='b') {
            printf("B.-Bebe");
        }
        else if (letra=='A' || letra=='a') {
            printf("A.-Adolescente");
        }
        else if (letra=='M' || letra=='m') {
            printf("M.-Mujer");
        }
        else if (letra=='H' || letra=='h') {
            printf("H.-Hombre");
        }
        else {
            printf("Introduce una letra valida.\n");
            continue;
        }
        correcto=1;
    }

    return 0;
}