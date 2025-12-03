//this program was done by 🐤

#include <stdio.h>
int main() {
    char nombre[20]="";
    char apellidos[80]="";
    int edad=0;
    const int JUBILACION=67;

    printf("Introduzca su nombre:");
    scanf("%s",nombre);
    printf("Introduzca su apellidos:");
    scanf("%s",apellidos);
    printf("Introduzca su edad:");
    scanf("%d",&edad);

    const int RESTANTE=JUBILACION-edad;
    if (RESTANTE>0) {
        printf("Sr/Sra.%s, le faltan aún %d para jubilarse",apellidos,RESTANTE);
    }
    else if (RESTANTE==0) {
        printf("Sr/Sra.%s, se jubila o se ha jubilado este año",apellidos);
    }
    else {
        printf("Sr/Sra.%s, se ha jubilado hace %d años",apellidos,RESTANTE*(-1));
    }

    return 0;
}