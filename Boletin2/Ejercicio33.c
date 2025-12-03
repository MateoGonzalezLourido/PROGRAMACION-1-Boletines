//this program was done by 🐤
#include <stdio.h>
int main() {
    int n=0;
    while (n<=0) {
        printf("Escribe un numero entero positivo para hacer su factorial:");
        scanf("%d",&n);
    }
    int resultado=0;
    for (int i=n;i>0;i--) {
        if (resultado==0) {
            resultado=n;
        }
        else {
            resultado*=i;
        }
    }
    printf("El factorial es %d",resultado);

    return 0;
}