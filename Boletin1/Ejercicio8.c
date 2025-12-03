//this program was done by 🐤

#include<stdio.h>


int main() {
    char nombre[30]="";
    int edad=0;
    float dinero_gastado_cañas=0;
    float dinero_gastado_transporte=0;

    printf("Introduzca usted su nombre:");
    scanf("%s",nombre);
    printf("Introduzca usted su edad:");
    scanf("%d",&edad);
    printf("Introduzca usted el total de sus gastos semanales en cañas (en euros):");
    scanf("%f",&dinero_gastado_cañas);
    printf("Introduzca usted el total de sus gastos semanales en transporte (en euros):");
    scanf("%f",dinero_gastado_transporte);


    printf("Nombre: %s",nombre);
    printf("Edad: %d",edad);
    printf("Gasto semanal en cañas: %f€",dinero_gastado_cañas);
    printf("Gasto semanal en transporte: %f€",dinero_gastado_transporte);
    const float dinero_gastado=dinero_gastado_cañas+dinero_gastado_transporte;
    printf("Total gastos semanales: %f€",dinero_gastado);

    return 0;
}