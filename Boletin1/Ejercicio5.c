//this program was done by 🐤

#include <stdio.h>

int main() {
    float base=0;
    float altura=0;

    printf("Introduce la base del retacngulo:");
    scanf("%f",&base);
    printf("Introduce la altura del rectangulo:");
    scanf("%f",&altura);

    printf("El perimetro del rectangulo de base %.2f y altura %.2f es de %.2f",base,altura,base*altura);

    return 0;
}