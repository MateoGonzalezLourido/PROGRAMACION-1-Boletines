//this program was done by 🐤

#include <stdio.h>
#include <ctype.h>//esta libreria ahorra tener que hacer arrays de a-z, A-Z, 0-9 y caracteres

int main() {
    char entrada[200] = "";
    printf("Escribe un texto (Enter para enviar)");
    fgets(entrada, sizeof(entrada), stdin); //leer correctamente la linea completa, sin usar scanf
    /*stdin es una variable global definida en la librería estándar <stdio.h>.
    Representa el flujo de entrada estándar del programa, normalmente el teclado*/
    int errores = 0;
    for (int i = 0; i < sizeof(entrada); i++) {
        const char C = entrada[i];
        if (C != '\n') {
            if (!(isalpha(C) || isdigit(C))) {
                errores++;
            }
        } else {
            break;
        }
    }
    printf("Errores totales: %d",errores);
    return 0;
}
