#include<stdio.h>

void Producto(int n, int max,int i) {
    if (max<i) return;
    printf("%d x %d = %d\n", n, i, n * i);
    Producto(n,max,i+1);

}

int main() {
    int n=-1,p=-1;
    printf("Introduce el numero principal: ");
    while (!(n>=0)) {
        scanf("%d",&n);
    }
    printf("Introduce el numero maximo: ");
    while (!(p>=0)) {
        scanf("%d",&p);
    }
    Producto(n,p,0);
    return 0;
}