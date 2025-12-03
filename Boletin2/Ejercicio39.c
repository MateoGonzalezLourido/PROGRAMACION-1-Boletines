//this program was done by 🐤

#include<stdio.h>
#include<stdlib.h>//para crear numeros aleatorios rand()
#include <time.h>//para time -> para crear la semilla srand(time(NULL));
int main() {
    srand(time(NULL)); // Inicializa la semilla para que los números sean diferentes cada vez
    char entrada = ' ';
    int quinelas = 0;

    while (!(entrada == 's' || entrada == 'S')) {
        int quinelas_numeros[10];
        printf("I)indicar numero de quinelas.\n");
        printf("M)Mostrar quinelas\n");
        printf("S)Salir\n");
        scanf("%c", &entrada);
        if (entrada == 'I' || entrada == 'i') {
            //mostrar quinelas
            printf("Numero de quinelas:");
            scanf("%d", &quinelas);
            if (quinelas > 0 && quinelas <= 10) {
                //crear quinelas
                for (int i=0;i<quinelas;i++) {
                    quinelas_numeros[i]=1 + rand() % 100;//1+ para el minimo, rand() para aleatorio y %n n es el maximo
                    printf("Tus quinelas son : %d\n",quinelas_numeros[i]);
                }
            } else {
                printf("Introduzca un numero valido de quinelas(1-10)");
            }
        } else if (entrada == 'M' || entrada == 'm') {
            if (quinelas > 0) {
                int quinelas_ganadoras[10];
                for (int i=0;i<quinelas;i++) {
                    quinelas_ganadoras[i]=1 + rand() % 100;//1+ para el minimo, rand() para aleatorio y %n n es el maximo
                    printf("Las quinelas ganadoras son : %d\n",quinelas_ganadoras[i]);
                }
                int aciertos=0;
                for (int i=0;i<quinelas;i++) {
                    for (int j=0;j<quinelas;j++) {
                        if (quinelas_ganadoras[i]==quinelas_numeros[j]) {
                            aciertos++;
                            break;
                        }
                    }
                }
                printf("\nTienes %d aciertos de %d quinelas totales\n",aciertos,quinelas);
            } else {
                printf("Debes indicar el numero de quinelas antes.\n");
            }
        } else if (entrada != 's' && entrada != 'S') {
            printf("Introduzca una opcion valida.\n");
        }
    }
    printf("\nExit complete...");
    return 0;
}
