#include <stdio.h>

void saltos_lineas(int n_lineas) {
    for (int i=0;i<n_lineas;i++) {
        printf("\n");
    }
}

int main() {
    int n_lineas=0;
    printf("Introduzca el numero de saltos de lineas");
    scanf("%d",&n_lineas);
    saltos_lineas((n_lineas));
    return 0;
}