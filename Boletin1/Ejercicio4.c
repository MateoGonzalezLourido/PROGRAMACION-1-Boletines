//this program was done by 🐤

#include <stdio.h>

int main() {

    float base=0;
    float lado2=0;
    float lado3=0;

    printf("Introduzca la base del triangulo:");
    scanf("%f",&base);
    printf("Introduzca otro lado del triangulo:");
    scanf("%f",&lado2);
    printf("Introduzca otro lado del triangulo:");
    scanf("%f",&lado3);

    const float ALTURA=(lado2*lado2)+(base/2)*(base/2);
        const float PERIMETRO=base+lado2+lado3;
    printf("El perímetro del rectangulo de base %.2f y de altura %.2f es %.2f",base,ALTURA,PERIMETRO);
    return 0;
}