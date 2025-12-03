#include<stdio.h>

int sumatorio(int n) {
    int max=n;
    int suma=0;
    while (max>0) {
        suma+=max;
        max--;
    }
    return suma;
}
int main() {
    int n=0;
    while (!n>0) {
        printf("\nIntroduce un numero:");
        scanf("%d",&n);
    }
    int result=sumatorio((n));
    printf("%d",result);
    return 0;
}