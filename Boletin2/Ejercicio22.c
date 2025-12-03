//this program was done by 🐤
#include <stdio.h>

int main() {
    int pares=0;
    int impares=0;
    int suma_pares=0;
    int suma_impares=0;
    for (int i=1;i<=100;i++) {
        if (i%2==0) {
            pares++;
            suma_pares+=i;
        }
        else {
            impares++;
            suma_impares+=i;
        }
    }
    printf("Cantidad impares 1-100 : %d\n",impares);
    printf("Cantidad pares 1-100 : %d\n",pares);
    printf("Suma de los impares 1-100 : %d\n",suma_impares);
    printf("Suma de los pares 1-100 : %d\n",suma_pares);
    return 0;
}