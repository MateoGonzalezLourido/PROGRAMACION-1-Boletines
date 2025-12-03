//this program was done by 🐤

#include <stdio.h>

int main() {
    int n_preguntas=0;
    int n_preguntas_contestadas=0;

    printf("Numero de preguntas:");
    scanf("%d",&n_preguntas);
    printf("Total preguntas respondidas:");
    scanf("%d",&n_preguntas_contestadas);

    const float PORCENTAJE=n_preguntas_contestadas/n_preguntas *100;
    if (PORCENTAJE<50) {
        printf("Fuera de nivel");
    }
    else if (PORCENTAJE>=50 && PORCENTAJE<75) {
        printf("Nivel regular");
    }
    else if (PORCENTAJE>=75 && PORCENTAJE<90) {
        printf("Nivel medio");
    }
    else {
        printf("Nivel máximo");
    }
    return 0;
}