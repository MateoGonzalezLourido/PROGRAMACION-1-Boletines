//this program was done by 🐤
#include <stdio.h>

int main() {
    while (1) {
        char entrada = ' ';
        printf("\nEscriba un caracter (r,c,p,a)");
        scanf("%c", &entrada);
        if (entrada == 'r' || entrada == 'R') {
            printf("----\n|  |\n|  |\n____");
        } else if (entrada == 'c' || entrada == 'C') {
            printf("___\n|  |\n| |\n| |\n___");
        } else if (entrada == 'p' || entrada == 'P') {
            printf(" /\\ \n/   \\\n\   //\n\\_/");
        } else {
            printf("Se acabó el programa");
            break;
        }
    }
    return 0;
}
