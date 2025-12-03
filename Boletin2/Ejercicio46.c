#include <stdio.h>

int main() {
    //inicio
    printf("    1   2   3   4   5   6   7   8   9\n");
    //resto de filas
    for (int i = 0; i <= 9; i++) {
        printf("%d  ", i);
        for (int j = 1; j <= i; j++) {
            printf("%d    ", i * j);
        }
        printf("\n");
    }
    return 0;
}
