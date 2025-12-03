//this program was done by 🐤
#include <stdio.h>

int main() {
    int n1,n2,n3;

    printf("Introduzca 3 numeros enteros positivos:");
    scanf("%d%d%d",&n1,&n2,&n3);

    int mayor=0;
    int menor=0;
    if (n1>n2 && n1>n3) {
        mayor=n1;
    }
    else if (n2>n3 && n2>n1) {
        mayor=n2;
    }
    else {
        mayor=n3;
    }

    if (n1<n2 && n1<n3) {
        menor=n1;
    }
    else if (n2<n3 && n2<n1) {
        menor=n2;
    }
    else {
        menor=n3;
    }

    int cociente=mayor/menor;
    int resto=mayor%menor;
    printf("%d entre %d\n",mayor,menor);
    printf("R:%d  C:%d",resto,cociente);


    return 0;
}