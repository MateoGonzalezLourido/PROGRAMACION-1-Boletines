#include<stdio.h>

float MediaNotas(const int notas[], const int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return (float)suma / n;
}
int main() {
    int notas[4];
    int indice=3;
    int i=0;
    while (i<=indice) {
        printf("Escribe la nota%d: ",i+1);
        do{
            scanf("%d",&notas[i]);
        }while (!(notas[i]>=0 && notas[i]<=100));
        i++;
    }
    const float res=MediaNotas(notas,(indice+1));
    printf("La media es %.2f",res);
    return 0;
}