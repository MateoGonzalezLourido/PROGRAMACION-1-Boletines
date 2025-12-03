#include<stdio.h>
int potencia(int base,int exponente) {
    int solucion=1;
    int exp=exponente;
    while (exp>0) {
        solucion*=base;
        exp--;
    }
    return solucion;
}
int resolver(int x) {
    int sol=(3*potencia(x,5))+(2*potencia(x,4))-(5*potencia(x,3))-(potencia(x,2))+(7*x)-(6);
    return sol;
}

int main() {
    int x;
    printf("Valor de X:");
    scanf("%d",&x);
    printf("Valor f(%d):%d",x,resolver(x));
    return 0;
}