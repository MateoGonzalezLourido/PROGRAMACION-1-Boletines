//this program was done by 🐤

#include <stdio.h>

int main(){
    float matriz1[2][2];
    float matriz2[2][2];
    //preguntar valores de matrices
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Introduzca un numero(%d):",((i+1)*(j+1)));
            scanf("%f",&matriz1[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Introduzca un numero(%d):",((i+1)*(j+1)));
            scanf("%f",&matriz2[i][j]);
        }
    }

    //calcular producto (lines*columnas)
    float matriz_producto[2][2];
    for (int i=0;i<2;i++) {//filas matriz1
        for (int j=0;j<2;j++) {//numeros de cada fila matriz1
            float suma=0;
            for (int k=0;k<2;k++) {//hacer calculos
                   const float NUM1=matriz1[i][k];//numero de la matriz1
                    const float NUM2=matriz2[k][j];
                suma+=NUM1*NUM2;
            }
            matriz_producto[i][j]=suma;
        }
    }

    //mostrar
    printf("La matriz producto:\n(%f    %f, %f    %f)",matriz_producto[0][0],matriz_producto[0][1],matriz_producto[1][0],matriz_producto[1][1]);

    return 0;
}