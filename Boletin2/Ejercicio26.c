//this program was done by 🐤
#include <stdio.h>

int main() {
    int numero;
    printf("Introduzcaun numero para mostrar su tabbla de multiplicacion(0-10):");
    scanf("%d", &numero);
    printf("TABLA DE MULTIPLICAR DEL numero\n");
    for (int i=0;i<11;i++) {
        printf("        %d x %d = %d\n",numero,i,(i*numero));
    }
    return 0;
}