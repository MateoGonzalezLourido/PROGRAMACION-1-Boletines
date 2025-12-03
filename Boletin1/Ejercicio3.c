//this program was done by 🐤

#include <stdio.h>

int main() {
    float altura=0;
    float base=0;

    printf("Introduzca la altura del triangulo:");
    scanf("%f",&altura);
    printf("Introduzca la base del triangulo:");
    scanf("%f",&base);

    printf("La superficie del triangulo de base %fu y altura %fu es de %fu",base,altura,(altura*base)/2);
    return 0;
}