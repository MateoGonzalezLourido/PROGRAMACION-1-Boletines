//this program was done by 🐤
#include <stdio.h>
#include <stdlib.h>//biblioteca para convertir texto a numero

int main() {
    char entrada[400]="";

    printf("A continuacion introduzca los numeros enteros de los que desee calcular la suma separados por espacios (use el cero apra finalizar):");
    fgets(entrada, sizeof(entrada), stdin);//leer correctamente la linea completa, sin usar scanf
    int suma_impares=0;
    int suma_pares=0;
    char texto[100]="";
    int i=0;
    int j=0;//indice del texto
    while (1){
        if (entrada[i]!=' ') {
            if (entrada[i]=='0' && entrada[0]=='\0') {
                break;
            }
            texto[j]=entrada[i];
            j++;
        }
        else {
            const int NUMERO=atoi(texto);//convertir char a float
            if (NUMERO%2==0) {
                suma_pares+=NUMERO;
            }
            else {
                suma_impares+=NUMERO;
            }
            for (int k=0;k<j;k++) {
                texto[k] = '\0';  // vaciar cadena(se guardan el resto de datos del array)
            }
            j=0;
        }
        i++;
    }
    printf("La suma de imapres es %.3d\n",suma_impares);
    printf("La suma de pares es %.3d",suma_pares);
    return 0;
}