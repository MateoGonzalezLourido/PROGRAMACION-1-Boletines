#include <stdio.h>

char* devolver_dia(char inicial) {
    static char dias[7][11] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    //static permite hacer que el valor del array no se destruya al acabar la funcion y asi evitar problemas en el return... (hay más formas de hacerlo)
    for (int i = 0; i < 7; i++) {
        if (inicial == dias[i][0]) {
            return dias[i]; // seguro: array estático
        }
    }
    return "No encontrado";
}

int main() {
    char* dia = devolver_dia('L');
    printf("%s\n", dia);
    return 0;
}
