//this program was done by 🐤
#include <stdio.h>

int main() {
    char nombre[30];
    int edad=0;

    printf("Introduzca su nombre:");
    scanf("%s",nombre);
    printf("Introduzca su edad:");
    scanf("%d",&edad);

    if (edad<32) {
        printf("%s es JOVEN",nombre);
    }
    else if (edad>=32 && edad<75) {
        printf("%s es ADULTA",nombre);
    }
    else if (edad>=75) {
        printf("%s es ANCIANA",nombre);
    }
    else {
        printf("Introduce una edad real");
    }
    return 0;
}