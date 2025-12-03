//this program was done by  🐤

#include <stdio.h>

int main() {
    const float PI=3.14159265;
    float radio[3];
    printf("Introduzca el radio 1: ");
    scanf("%f",&radio[0]);
    printf("Introduzca el radio 2: ");
    scanf("%f",&radio[1]);
    printf("Introduzca el radio 3: ");
    scanf("%f",&radio[2]);

    float perimetros[3];
    float areas[3];

    for (int i=0;i<3;i++) {
        perimetros[i]=radio[i]*2*PI;
        areas[i]=PI*radio[i]*radio[i];
    }

    //tabla mostrar
    printf("RADIO   PERIMETRO   AREA\n");
    printf("=====   =========   =====\n");
    for (int i=0;i<3;i++) {
        printf("%5.2f    %5.2f       %5.2f\n",radio[i],perimetros[i],areas[i]);
    }



    return 0;
}