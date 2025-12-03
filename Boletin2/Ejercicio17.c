//this program was done by 🐤
#include <stdio.h>

int main() {
    char vocales[10] = {'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
    char digitos[10]={'0','1','2','3','4','5','6','7','8','9'};
    char consonantes[42] = {
        'b','c','d','f','g','h','j','k','l','m',
        'n','p','q','r','s','t','v','w','x','y','z',
        'B','C','D','F','G','H','J','K','L','M',
        'N','P','Q','R','S','T','V','W','X','Y','Z'
    };
    char caracter;
    printf("Introduzca un caracter: ");
    scanf("%c",&caracter);

    for(int i=0;i<sizeof(vocales);i++) {
        if (caracter==vocales[i]) {
            printf("%c es una vocal",caracter);
            return 0;
        }
    }
    for(int i=0;i<sizeof(digitos);i++) {
        if (caracter==digitos[i]) {
            printf("%c es un digito",caracter);
            return 0;
        }
    }
    for(int i=0;i<sizeof(consonantes);i++) {
        if (caracter==consonantes[i]) {
            printf("%c es una consonante",caracter);
            return 0;
        }
    }
    printf("%c es un caracter especial",caracter);

    return 0;
}