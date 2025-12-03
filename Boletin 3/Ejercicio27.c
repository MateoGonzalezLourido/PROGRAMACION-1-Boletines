#include<stdio.h>

int invertir(int o,int i) {
    if (o==0) return i;
    return invertir(o/10,i*10 + o%10);
}

int main() {
    int n=-1;
    while (!(n>=0)) {
        scanf("%d",&n);
    }

    printf("Su numero espejo es %d",invertir(n,0));

    return 0;
}