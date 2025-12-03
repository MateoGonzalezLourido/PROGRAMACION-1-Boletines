//this program was done by 🐤

#include <stdio.h>

int main() {
    float in_vector1[3];
    float in_vector2[3];

    printf("Coordenadas cartesianas primer vector (separadas por espacio):");
    scanf("%f",&in_vector1[0]);
    scanf("%f",&in_vector1[1]);
    scanf("%f",&in_vector1[2]);
    printf("introduzca el segundo vector:");
    scanf("%f",&in_vector2[0]);
    scanf("%f",&in_vector2[1]);
    scanf("%f",&in_vector2[2]);

    printf("Coordenadas cartesianas primer vector (separadas por espacio): %f %f %f",in_vector1[0],in_vector1[1],in_vector1[2]);
    printf("Coordenadas cartesianas segundo vector (separadas por espacio): %f %f %f",in_vector2[0],in_vector2[1],in_vector2[2]);

    float calculo=0;
    for (int i =0; i<3;i++) {
        calculo+=in_vector1[i]*in_vector2[i];
    }
    printf("\nProducto escalar: %f",calculo);
    return 0;
}