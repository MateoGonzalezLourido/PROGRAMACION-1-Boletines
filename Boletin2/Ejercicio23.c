//this program was done by 🐤
#include <stdio.h>

int main() {
    float numero=0;
    while (!(numero>=20 && numero<=30)) {
        printf("Ingrese un numero entre 20 y 30: \n");
        scanf("%f",&numero);
    }
    printf("Good job");
    return 0;
}