//this program was done by 🐤

#include <stdio.h>

int main() {
    int n[3];
    for(int i=0;i<3;i++) {
        printf("Introduzca un numero:");
        scanf("%d",&n[i]);
    }
    int ordenados[3];
    for (int i=0;i<3;i++) {
        int desplazar=0;
        for (int j=0;j<3;j++) {
            if (i!=j) {
                if (n[j]<n[i]) {
                    desplazar++;
                }
            }
        }
        ordenados[desplazar]=n[i];
    }
    printf("Ordenados:%d<=%d<=%d",ordenados[0],ordenados[1],ordenados[2]);
    return 0;
}