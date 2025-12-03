//this program was done by 🐤
#include <stdio.h>

int main() {
    int suma=0;
    //forma 1
    for (int i=1;i<=100;i++) {
        suma+=i;
    }
    //forma 2
    suma=0;
    int i=1;
    while (i<=100) {
        suma+=i;
        i++;
    }
    //forma 3
    suma=0;
    i=1;
    do {
        suma+=i;
        i++;
    }while (i<=100);
    printf("Hello world\n");
    return 0;
}