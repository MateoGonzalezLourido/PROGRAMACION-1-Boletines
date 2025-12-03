//this program was done by 🐤

#include <stdio.h>

int main() {

    char nombre[30]="";
    int edad=0;
    int n_hijos=0;
    float sueldo_anual=0;

    printf("Introduzca usted su nombre:");
    scanf("%s",nombre);
    printf("Introduzca usted su edad:");
    scanf("%d",&edad);
    printf("Introduzca usted su numero de hijos:");
    scanf("%d",&n_hijos);
    printf("Introduzca usted su sueldo anual:");
    scanf("%f",&sueldo_anual);

    printf("Nombre: %s",nombre);
    printf("Edad: %d",edad);
    printf("Numero de hijos: %d",n_hijos);
    printf("Sueldo anueal: %.2f€",sueldo_anual/12);

    return 0;
}