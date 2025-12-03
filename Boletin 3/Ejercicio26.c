#include<stdio.h>

long long Potencia(int base, int exponente) {
    if (exponente==0)return 1;//caso base
    return base*Potencia(base,exponente-1);//llamada recursiva
}
int main() {
    int n=-1,exponente=-1;
    printf("Introduce la base: ");
    while (!(n>=0)) {
        scanf("%d",&n);
    }
    printf("\nIntroduce el exponente: ");
    while (!(exponente>=0)) {
        scanf("%d",&exponente);
    }
    printf("%d^%d = %lld ",n,exponente,Potencia(n,exponente));
    return 0;
}