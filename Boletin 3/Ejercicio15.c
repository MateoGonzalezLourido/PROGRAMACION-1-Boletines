#include<stdio.h>

int EsVocal(char c) {
    int encontrado=0;
    int asci[10]={65,69,73,79,85,97,101,105,111,117};
    int n = sizeof(asci) / sizeof(asci[0]); // 10
    for (int i=0;i<n;i++) {
        if (c==asci[i]) {
            encontrado=1;
            break;
        }
    }
    return encontrado;
}
int EsDigito(char c) {
    if (c>=48 && c<=57) return 1;
    return 0;
}
int EsMayuscula(char c) {
    if (c>=65 && c<=90) return 1;
    return 0;
}
int main() {
    char c;
    printf("Introduce un caracter: ");
    scanf("%c", &c);
    printf("\n");
    if (EsVocal(c)==1) {
        printf("Es vocal");
    }
    else {
        if (EsDigito(c)==1) printf("Es digito");
        else printf("No es digito");
    }
    //mayuscula o minuscula
    if (EsMayuscula(c)==1) printf("Es mayuscula");
    else printf("Es minuscula");
    return 0;
}