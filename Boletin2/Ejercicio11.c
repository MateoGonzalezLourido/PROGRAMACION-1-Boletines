//this program was done by 🐤

#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c;

    printf("Introduce los coeficientes(a b c):");
    scanf("%f %f %f",&a,&b,&c);

    const float raiz_interior=(b*b)-4*a*c;
    if (raiz_interior<0) {
        printf("No existe solucion real");
        return 0;
    }
    float resultados_raiz[2];
    if (raiz_interior==0) {
        resultados_raiz[0]=0;
        resultados_raiz[1]=0;
    }
    resultados_raiz[0]=sqrt(raiz_interior);
    resultados_raiz[1]=-sqrt(raiz_interior);

    float soluciones_ecuacion[2];
    soluciones_ecuacion[0]=(-b+resultados_raiz[0])/2*a;
    soluciones_ecuacion[1]=(-b-resultados_raiz[0])/2*a;

    printf("Soluciones de la ecuacion");
    printf("X1: %f",soluciones_ecuacion[0]);
    printf("X2: %f",soluciones_ecuacion[1]);
    return 0;
}