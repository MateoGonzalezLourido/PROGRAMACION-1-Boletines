//this program was done by 🐤

#include<stdio.h>


int main() {
    float precio_producto=0;
    printf("Introduzca el precio del producto(sin IVA):");
    scanf("%f",&precio_producto);

    printf("El importe total(IVA incluido) es de %.2f",precio_producto*1.24);

    return 0;
}