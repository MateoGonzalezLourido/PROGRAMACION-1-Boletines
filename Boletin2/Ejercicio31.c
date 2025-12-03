//this program was done by 🐤
#include <stdio.h>

int main() {
    //bisiestos del siglo XIX
    printf("Años bisiestos del siglo XIX:\n");
    for (int i=1801;i<=1900;i++) {
        if ((i%4==0 && i%100!=0) || i%400==0) {
            if (i==1900) {
                printf("%d",i);
            }
            else {
                printf("%d, ",i);
            }
        }
    }

    //como no hay buffer de entradas anteriores no hace falta hacer una limpieda del buffer
    printf("\nPulsa ENTER para continuar...");
    getchar();

    //bisiestos del siglo XX
    printf("Años bisiestos del siglo XIX:\n");
    for (int i=1901;i<=2000;i++) {
        if ((i%4==0 && i%100!=0) || i%400==0) {
            if (i==2000) {
                printf("%d",i);
            }
            else {
                printf("%d, ",i);
            }
        }
    }

    return 0;
}