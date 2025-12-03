//this program was done by 🐤

#include <stdio.h>

int main() {
    int n1=0;
    int n2=0;
    int n3=0;
    printf("Introduzca un numero:");
    scanf("%d",&n1);
    printf("Introduzca un numero:");
    scanf("%d",&n2);
    printf("Introduzca un numero:");
    scanf("%d",&n3);
    if (n1>n2 && n1>n3) {
        printf("%d es el mayor de todos",n1);
    }

    if (n2>n1 && n2>n3) {
        printf("%d es el mayor de todos",n2);
    }
    if (n3>n2 && n3>n1) {
        printf("%d es el mayor de todos",n3);
    }
    return 0;
}