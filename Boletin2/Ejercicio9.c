//this program was done by 🐤

#include <stdio.h>

int main() {//fecha:1/10/2025
    int dia;
    int mes;
    int año;
    printf("Introduzca la fecha de nacimiento:(dd/mm/yy)");
    printf("Introduzca el dia");
    scanf("%d", &dia);
    printf("Introduzca el mes");
    scanf("%d", &mes);
    printf("Introduzca el año");
    scanf("%d",&año);

    int años= 2025-año;
    if (mes>10) {
        años++;
    }
    else if (mes==10) {
        if (dia>=1) {
            años++;
        }
    }
    printf("Tu grandiosa edad es %d,vegestorio",años);
    return 0;
}