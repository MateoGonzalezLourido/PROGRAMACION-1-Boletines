//juego mastermind
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcion = -1;
    while (opcion != 0) {
        system("cls");
        printf("Bienbenido al juego Mastermind.\n");
        printf("Menu de juego:\n");
        printf("Opcion 1: Jugar partida nueva\n");
        printf("Opcion 2: Reglas del juego");
        printf("Opcion 0: Salir\n");
        // Inicializar la semilla con el tiempo actual
        srand(time(NULL));
        while (opcion != 0 && opcion != 1 && opcion != 2) {
            printf("Que vas hacer: ");
            scanf("%d", &opcion);
        }
        if (opcion == 1) {
            system("cls"); //solo funciona en windows
            int combinacion[4];
            for (int i = 0; i < 4; i++) combinacion[i] = 1 + rand() % 6;
            //empieza el juego
            printf("Recuerda: marron(1),rojo(2),verde(3),azul(4),morado(5),amarillo(6)\n");
            printf("Escribe 0 al inicio para salir");
            int entradas[4];
            int intentos = 0;
            while (entradas[0] != 0) {
                printf("\nCombinacion(%d):", intentos);
                scanf("%d %d %d %d", &entradas[0], &entradas[1], &entradas[2], &entradas[3]);
                if (entradas[0] == 0) break;
                int negro = 0;
                int blanco = 0;
                int nada = 0;
                int combinacion_copia[4];
                for (int i = 0; i < 4; i++) combinacion_copia[i] = combinacion[i];
                for (int i = 0; i < 4; i++) {
                    int terminado = 0;
                    if (entradas[i] == combinacion_copia[i]) {
                        negro++;
                        terminado = 1;
                        combinacion_copia[i] = 0;
                    } else {
                        for (int j = 0; j < 4; j++) {
                            if (entradas[i] == combinacion_copia[j]) {
                                blanco++;
                                terminado = 1;
                                combinacion_copia[j] = 0;
                                break;
                            }
                        }
                    }
                    if (terminado == 0) {
                        nada++;
                    }
                }
                intentos++;
                if (negro == 4) {
                    system("cls");
                    printf("Has hayado la combinacion con %d", intentos);
                    break;
                } else {
                    printf("\n");
                    printf("Tu combinacion tiene (%d)negros, (%d)blancos,(%d)_\n", negro, blanco, nada);
                }
            }
        } else if (opcion == 2) {
            system("cls");
            printf(
                "\nEl juego genera 4 colores de 6:\n1-marron, 2-rojo, 3-verde, 4-azul,5-morado,6-amarillo\nTupones una combinacion de colores(4) y el juego te dice blanco si hay un color que esta en la combinacion pero no esta en su posicion,\n negra si has acertado por lo menos un color y posicion \no puede ser _ que indica que por lo menos hay un color que no esta en la combinacion");
            printf("\nEl juego ser terminara cuando aciertes todos o cuando tu decidas salir escribiendo 0");
        }
    }
    system("cls");
    printf("Se ha cerrado el juego");
    return 0;
}
