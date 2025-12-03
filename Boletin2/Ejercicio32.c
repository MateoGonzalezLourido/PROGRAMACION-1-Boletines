//this program was done by 🐤
#include <stdio.h>
#include <stdlib.h>
int main() {
    int base=0;
    int exponente=-1;

    printf("Escriba la base: ");
    scanf("%d",&base);
    while (exponente<0) {
        printf("Escriba el exponente: ");
        scanf("%d",&exponente);

    }
    //potencia por bucle
    int resultado=0;
    for (int i=0;i<exponente;i++) {
        if (resultado==0) {
            resultado=exponente;
        }
        else {
            resultado*=base;
        }
    }
    printf("El resultado de la potencia es %d",resultado);
    return 0;
}