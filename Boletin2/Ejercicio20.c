//this program was done by 🐤
#include <stdio.h>

int main() {
    char nombre[30];
    float peso=0;
    float altura=0;
    printf("Introduzca su nombre:");
    scanf("%s",nombre);
    printf("Introduzca su peso(KG):");
    scanf("%f",&peso);
    printf("Introduzca su altura(metros):");
    scanf("%f",&altura);

    const float IMC=(peso)/(altura*altura);
    char *resultado;
    if (IMC<18.5) {
        resultado="peso normal";
    }
    else if (IMC>=18.5 && IMC<25) {
        resultado="sobrepeso de grado I";
    }
    else if (IMC>=25 && IMC<30) {
        resultado="sobrepeso de grado II";
    }
    else {
        resultado="obesa";
    }
    printf("%s segun el indice de masa corporal (IMC=%f), tiene usted un %s para su estatura",nombre,IMC,resultado);
    return 0;
}