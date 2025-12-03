//this program was done by 🐤
#include <stdio.h>

int main() {
    int par=0;
    int resto=0;

    printf("Piense un numero del 1 al 10....");
    printf("El numero que a pensado es impar(1) o par(2): ");
    scanf("%d",&par);
    printf("Cual es el resto de dividir el numero que ha pensado entre 5 :");
    scanf("%d",&resto);
    //adivinar numero
    int numero=0;
    for (int i=0;i<10;i++) {
        numero++;
        if ((par==2 && numero%2==0) || (par==1 && numero%2!=0) ) {
            if (numero%5==resto) {
                printf("El numero que ha pensado es el %d",numero);
                return 0;
            }
        }
    }
    printf("No se ha hayado el numero");
    return 0;
}