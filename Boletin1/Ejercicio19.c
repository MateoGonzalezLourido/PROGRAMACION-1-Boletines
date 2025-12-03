//this program was done by 🐤

#include <stdio.h>

int main() {
    float kg_patatas=0;
    float precio_sin_iva_patatas_kg=0;
    float kg_manzanas=0;
    float precio_sin_iva_manzanas_kg=0;
    float precio_libro=0;
    const float IVA_ALIMENTICIOS=0.21;
    const float IVA_CULTURA=0.1;
    //pedir datos
    printf("INTRODUZCA LOS SIGUIENTES DATOS SIN EL IVA.\n");
    printf("Introduzca los KG de patatas compradas:");
    scanf("%f",&kg_patatas);
    printf("Introduzca el precio Kg de patatas:");
    scanf("%f",&precio_sin_iva_patatas_kg);
    printf("Introduce los KG de manzanas compradas:");
    scanf("%f",&kg_manzanas);
    printf("Introduzca el precio KG de manzanas:");
    scanf("%f",&precio_sin_iva_manzanas_kg);
    printf("Introduzca el precio del libro:");
    scanf("%f",&precio_libro);

    //calculos
    const float COSTE_PATATAS=kg_patatas*precio_sin_iva_patatas_kg*(1+IVA_ALIMENTICIOS);
    const float COSTE_MANZANAS=kg_manzanas*precio_sin_iva_manzanas_kg*(1+IVA_ALIMENTICIOS);
    const float COSTE_LIBRO=precio_libro*(1+IVA_CULTURA);
    const float TOTAL_COSTE=COSTE_PATATAS+COSTE_MANZANAS+COSTE_LIBRO;

    //MOSTRAR
    printf("KG de patatas comprados: %.2f\n",kg_patatas);
    printf("Precio sin IVA del kilo de patatas (en euros):%.2f\n",precio_sin_iva_patatas_kg);
    printf("KG de manzanas comprados:%.2f\n",kg_manzanas);
    printf("Precio sin IVA del kilo de patatas(en euros):%.2f\n",precio_sin_iva_manzanas_kg);
    printf("Importe del libro sin IVA(euros):%.2f\n",precio_libro);
    printf("___________________________________________________Ticket 1/1\n");
    printf("Patatas     %.2fKg    %.2f€     %.2f€     %.2f€ (IVA %.2f%%)\n",kg_patatas,precio_sin_iva_patatas_kg,(precio_sin_iva_patatas_kg*kg_patatas),COSTE_PATATAS,(IVA_ALIMENTICIOS*100));
    printf("Manzanas     %.2fKg    %.2f€     %f€     %.2f€ (IVA %.2f%%)\n",kg_manzanas,precio_sin_iva_manzanas_kg,(precio_sin_iva_manzanas_kg*kg_manzanas),COSTE_MANZANAS,(IVA_ALIMENTICIOS*100));
    printf("Libros       1    %.2f€     %.2f€     %.2f€ (IVA %.2f%%)\n",precio_libro,precio_libro,COSTE_LIBRO,(IVA_CULTURA*100));
    printf("Total                             %.2f€",TOTAL_COSTE);

    return 0;
}