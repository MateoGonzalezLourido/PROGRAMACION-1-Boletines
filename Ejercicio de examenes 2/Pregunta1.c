#include<stdio.h>
#define TAM 2

float heatmap(double entrada[TAM][TAM],double resultados[TAM][TAM]) {
    double maximo=entrada[0][0];
    for (long long int i=0;i<TAM;i++) {
        for (long long int j=0;j<TAM;j++) {
            if (entrada[i][j]>maximo)maximo=entrada[i][j];
        }
    }
    //resultados
    for (long long int i=0;i<TAM;i++) {
        for (long long int j=0;j<TAM;j++) {
            resultados[i][j]=entrada[i][j] /maximo;
        }
    }
}

void PedirValores(double array[TAM][TAM]) {
    for (long long int i=0;i<TAM;i++) {
        for (long long int j=0;j<TAM;j++) {
            printf("\nIntroduce el valor del array %lldx%lld: ",i+1,j+1);
            scanf("%lf",&array[i][j]);
        }
    }
}

int main() {
    printf("Vas a introducir los valores de la matriz %dx%d",TAM,TAM);
    double array[TAM][TAM];
    PedirValores(array);

    double resultados[TAM][TAM];
    heatmap(array,resultados);

    //mostrar
    printf("\n**Resultados: \n");
    for (int i=0;i<TAM;i++) {
        for (int j=0;j<TAM;j++) {
            printf("%lf ",resultados[i][j]);
        }
        printf("\n");
    }

    return  0;
}