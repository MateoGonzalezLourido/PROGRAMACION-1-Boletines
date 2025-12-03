#include<stdio.h>


long long Factorial(int n) {
    long long int res=1;
    for (int i=n;i>1;i--) {
        res*=i;
    }
    return res;
}
int main() {
    printf("Introduce el numero para calcular su factorial:");
    int n=-1;
    while (!(n>=0)) {
        scanf("%d",&n);
    }
    long long int res=Factorial(n);
    printf("El factorial de %d es %d",n,res);
    return 0;
}