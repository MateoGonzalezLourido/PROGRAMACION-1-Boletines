//this program was done by 🐤
#include <stdio.h>

int main() {
    int n1,n2;
    int c1=1;
    int c2=1;
    while (c1==1) {
        printf("introduzca un numero entero positivo de tres cifras");
        scanf("%d",&n1);
        if (! (n1>=100 && n1<=999)) {
            printf("El primer numero no tiene 3 cifras o no es positivo.\n");
        }
        else {
            c1=0;
        }
    }
    while (c2==1) {
        printf("Introduzca un numero entero positivo de una cifra");
        scanf("%d",&n2);
        if (!(n2<10 && n2>0)) {
            if (n2==0) {
                printf("El numero no puede se 0\n");
            }
            else {
                printf("El numero debe tener una cifra y ser positivo\n");
            }

        }
        else {
            c2=0;
        }
    }

    printf("%4.0d\n",n1);
    printf(" x%2.0d\n",n2);
    printf("=====\n");
    printf(" %d",n1*n2);
    return 0;
}