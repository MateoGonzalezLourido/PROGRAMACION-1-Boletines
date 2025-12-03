//this program was done by 🐤
#include <stdio.h>

int main() {
    float l1,l2,l3;

    printf("Introduce los tres lados del triangulo: ");
    scanf("%f %f %f",&l1,&l2,&l3);

    if (l1==l2 && l2==l3) {//equilatero
        printf("El triangulo es equilatero (lado1==lado2==lado3)");
    }
    else if ((l1==l2 || l2==l3) && (l1!=l2 || l2!=l3)) {
        if (l1==l2) {
            printf("El triangulo es ISOSCELES (lado1==lado2==%f)",l1);
        }
        else if (l1==l3) {
            printf("El triangulo es ISOSCELES (lado1==lado3==%f)",l1);
        }
        else {
            printf("El triangulo es ISOSCELES (lado2==lado3==%f)",l3);
        }
    }
    else {
        printf("El triangulo es ESCALENO(lado1!=lado2!=lado3)");
    }

    return 0;
}