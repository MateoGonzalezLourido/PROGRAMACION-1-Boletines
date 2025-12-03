//this program was done by 🐤

#include<stdio.h>

int main() {
    char nombre[30]="";
    char apellidos[100]="";
    float sueldo_mensual=0;
    float dinero_gastado_diariamente_ocio=0;
    float dinero_gastado_diariamente_comida=0;
    float dinero_gastado_diariamente_transporte=0;

    //recoger datos
    printf("Indique su nombre: ");
    scanf("%s",nombre);
    printf("Indique sus apellidos:");
    scanf(" %[^\n]",apellidos);
    printf("Indique su sueldo mensual:");
    scanf("%f",&sueldo_mensual);
    printf("Indique el dinero que gasta al dia en ocio:");
    scanf("%f",&dinero_gastado_diariamente_ocio);
    printf("Indique el dinero que gasta al dia en comida:");
    scanf("%f",&dinero_gastado_diariamente_comida);
    printf("Indique el dinero que gasta al dia en transporte:");
    scanf("%f",&dinero_gastado_diariamente_transporte);

    //calculos
    const float porcentaje_ocio=dinero_gastado_diariamente_ocio/sueldo_mensual * 100;
    const float porcentaje_comida=dinero_gastado_diariamente_comida/sueldo_mensual *100;
    const float porcentaje_transporte=dinero_gastado_diariamente_transporte/sueldo_mensual *100;
    const float dinero_gastado_semanal=(dinero_gastado_diariamente_ocio+dinero_gastado_diariamente_comida+dinero_gastado_diariamente_transporte)*7;

    //mostrar datos
    printf("***************************************************\n");
    printf("***********     %s %s: %.2f€    ***********\n",nombre,apellidos,sueldo_mensual);
    printf("    %%Ocio   %%Comida   %%Transporte\n");
    printf("    %.2f%%      %.2f%%      %.2f%%\n",porcentaje_ocio,porcentaje_comida,porcentaje_transporte);
    printf("****                                ****\n");
    printf("                                    Gasto semanal\n");
    printf("                                            %.2f€",dinero_gastado_semanal);
    return 0;
}