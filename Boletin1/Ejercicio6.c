//this program was done by 🐤

#include <stdio.h>

int main() {
    float radio=0;
    const double PI = 3.14159265358979323846;

    printf("Introduzca el radio de la esfera:");
    scanf("%f",&radio);

    const float AREA=4*PI*radio*radio;
    const float VOLUMEN=4*PI*radio*radio*radio;

    printf("La esfera de radio %.2f tiene de volumen %.2f y area %.2f",radio, AREA,VOLUMEN);
    return 0;
}