#include <stdio.h>

int EsMayuscula(char c) {
    if (c>=65 && c<=90) return 1;
    if (c>=97 && c<=122 ) return 0;
    return -1;
}

int main() {
    int opcion=0;
    printf("1-TODO MAYUSCULA\n2-todo minuscula \n 3-tODO iNVERTIDO\n Opcion: ");
    scanf("%d",&opcion);
    printf("Ahora introduce la cadena: ");
    char texto[90];
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // vacía buffer
    fgets(texto,90,stdin);
    int i=0;
    while (texto[i]) {
        if (EsMayuscula(texto[i])==1 && opcion!=2) {
            texto[i]=texto[i]+32;
        }
        else if (opcion!=1 && EsMayuscula(texto[i])==0){
            texto[i]=texto[i]-32;
        }
        i++;
    }
    printf("La cadena cambiada seria: %s",texto);
    return 0;
}