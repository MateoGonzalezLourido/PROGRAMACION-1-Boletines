#include <stdio.h>
#include <math.h>

int main() {
    int opcion = 0;
    while (opcion != 3) {
        while (!(opcion >= 1 && opcion <= 3)) {
            printf(
                "1-Visualizar una tabla de los números, los cuadrados y las raíces cuadradas de aquellos números contenidos en un intervalo de enteros indicado por el usuario.\n");
            printf("2-Mostrar por pantalla los divisores de un número entero que indique el usuario.\n");
            printf("3-Salir del programa.\n");
            scanf("%d", &opcion);
        }
        if (opcion == 1) {
            int n1 = -1;
            int n2 = 0;
            while (n1 <= 0 || n2 <= n1) {
                printf("Introduzca un intervalo (n1 n2)\n");
                scanf("%d %d", &n1, &n2);
            }
            printf("Numero Cuadrado Raiz");
            for (int i = n1; i <= n2; i++) {
                printf("%d %d %f\n", i, i * i, sqrt(i));
            }
        } else if (opcion == 2) {
            int n1 = 0;
            while (n1 <= 0) {
                printf("Introduzca un numero para calcular sus divisores:\n");
                scanf("%d", &n1);
            }
            printf("Divisores de %d: ", n1);
            for (int i = 1; i < n1; i++) {
                if (n1 % i == 0) {
                    printf("%d ", i);
                }
            }
        }
    }
    printf("\n Programa finalizado...");
    return 0;
}
