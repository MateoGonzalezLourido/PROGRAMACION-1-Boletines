//this program was done by 🐤
#include <stdio.h>
#include <string.h>

int main() {
    char meses[12][50]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
    char mes[15]="";
    int año=0;
    printf("Introduzca un mese: ");
    scanf("%s",mes);
    if (strcmp(mes,"Febrero")==0) {//0 es que la comparacion es correcta
        printf("Introduzca el año:");
        scanf("%d",&año);
        //calcular si es bisiesto
        if ((año%4==0 && año%100!=0) || año%400==0) {
            printf("El mes de Febrero del año %d tiene 29 dias",año);
        }
        else {
            printf("El mes de Febrero del año %d tiene 28 dias",año);
        }
        return 0;
    }
    //calcular dias
    int dias=0;
    for (int i=0;i<12;i++) {
        if (strcmp(mes,meses[i])==0) {
            if (((i+1)==7) ||(i+1)%2!=0) {
                printf("El mes %s tiene 31 dias",mes);
                break;
            }
            else {
                printf("El mes %s tiene 30 dias",mes);
                break;
            }
        }
    }

    return 0;
}