//this program was done by 🐤

#include <stdio.h>

int main(){
   float peso_camion=0;
   float peso_baldosa=0;
   int largo_rectangulo=0;
    int alto_rectangulo=0;

    printf("Indique el peso del camion de transporte:");
    scanf("%f",&peso_camion);
    printf("Indique el peso de la baldosa:");
    scanf("%f",&peso_baldosa);
    printf("Indique el largo del rectangulo:");
    scanf("%d",&largo_rectangulo);
    printf("Indique el alto del rectangulo:");
    scanf("%d",&alto_rectangulo);

    const int N_BALDOSAS_TOTALES=peso_camion/peso_baldosa;
    int tamaño_cuadrado=0;
    //calcular cuadrado de are maxima
    if(largo_rectangulo>=alto_rectangulo){
        tamaño_cuadrado=largo_rectangulo;
    }
    else{
        tamaño_cuadrado=alto_rectangulo;
    }

    printf("El cuadrado de area maxima que se puede cubrir en ese rectangulo es de %d baldosas",tamaño_cuadrado);
    return 0;
}