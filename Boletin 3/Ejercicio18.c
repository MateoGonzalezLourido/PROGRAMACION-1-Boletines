#include<stdio.h>

int EsDigito(char c) {
    if (c>=48 && c<=57) return 1;
    return 0;
}
int EsMayuscula(char c) {
    if (c>=65 && c<=90) return 1;
    if (c>=97 && c<=122 ) return 0;
    return -1;
}
int main() {
    char texto[90];
    printf("Escribe una cadena de texto: ");
    fgets(texto, 90, stdin);

    int c_mayusculas=0;
    int c_minusculas=0;
    int c_digitos=0;
    int i=0;
    while (texto[i]!='\n' && texto[i]!='\0') {
        const char caracter=texto[i];
        const int res=EsMayuscula(caracter);
        if (res==1) {
            c_mayusculas++;
        }
        else if (res==0) {
            c_minusculas++;
        }
        else if (EsDigito(caracter)==1) {
            c_digitos++;
        }
        i++;
    }
    printf("\nEl texto contiene :\n");
    printf("Letras mayusculas: %d\n",c_mayusculas);
    printf("Letras minusculas: %d\n",c_minusculas);
    printf("Digitos: %d",c_digitos);

    return 0;
}