#include<stdio.h>

int SacarN(int numero,const int indice) {
    int i=0;
    while (i<indice) {
        numero/=10;
        i++;
    }
    return numero%10;
}

int Capicua(int numero,int longitud,int indice,int medio) {
    if (indice>=medio) return 1;//caso base (esto cuando solo es un digito asi ya dice que es capicua, sino no afecta al resultado si es 1 o 0)

    if (SacarN(numero,indice)!=SacarN(numero,(longitud-indice-1))) return 0;

    return Capicua(numero,longitud,indice+1,medio);
}
int Longitud(int n) {
    int l=0;
    while (n>0) {
        n/=10;
        l++;
    }
    return l;
}
int main() {
    printf("Introduce un numero: ");
    int n=-1;
    int longitud=Longitud(n);
    while (!(n>=0)) {
        scanf("%d",&n);
    }
    int medio=longitud/2;

    if (Capicua(n,longitud,0,medio)==1) {
        printf("Es capicua");
    }
    else {
        printf("No es capicua");
    }

    return 0;
}