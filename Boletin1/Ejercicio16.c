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
  //calcular suma
   float matriz_suma[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            matriz_suma[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }

    printf("Matriz Suma:\n(%f    %f, %f    %f)",matriz_suma[0][0],matriz_suma[0][1],matriz_suma[1][0],matriz_suma[1][0],matriz_suma[1][1]);

    return 0;
}