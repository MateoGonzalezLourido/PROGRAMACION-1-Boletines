//this program was done by 🐤

#include <stdio.h>

int main() {
    int limite = 0;
    while (limite < 1) {
        printf("introduce el limite positivo:");
        scanf("%d", &limite);
    }
    for (int i = 0; i <= limite; i++) {
        if (i==0) {
            printf("1");
        } else {
            printf("+ 1/%d", i + 1);
        }
    }

    return 0;
}
