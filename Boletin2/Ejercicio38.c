//this program was done by 🐤

#include<stdio.h>
#include <math.h>//libreria de mates

int main() {
    long int decimal = 0;

    printf("Digite um numero decimal para pasarlo a binario: ");
    scanf("%ld", &decimal);

    long int binario = 0;
    long int indice = 0;
    while (decimal > 0) {
        if (decimal % 2 != 0)
            binario += pow(10, indice);
        decimal /= 2;
        indice++;
    }
    printf("binario:%d", binario);
    return 0;
}
