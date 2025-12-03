#include <stdio.h>
#include <math.h>

typedef struct {
    float s1;
    float s2;
} Soluciones;

Soluciones resolver_ecaucion(float a, float b, float c) {
    Soluciones resultado;
    float raiz=sqrt(pow(b,2)-4*a*c);
    float denominador=2*a;
    resultado.s1=(-b + raiz)/denominador;
    resultado.s2=(-b - raiz)/denominador;

    return resultado;
}

int main() {
    float n[3];
    printf("Introduce los coeficientes de la exuación (A B C):");
    scanf("%d %d %d",&n[0],&n[1],&n[2]);

    Soluciones recibido=resolver_ecaucion(n[0],n[1],n[2]);
    printf("Los resultados son: %.4f y %.4f",recibido.s1,recibido.s2);
    return 0;
}