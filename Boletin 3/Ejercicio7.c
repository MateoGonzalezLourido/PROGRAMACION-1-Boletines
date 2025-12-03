#include <stdio.h>

int verificacion_fecha(int dia,int mes, int año) {
    int bisiesto=0;
    if ((año%4==0 && año%100!=0) || (año%400==0)) {
        bisiesto=1;
    }
    //verificaciones
    if (mes>12 || dia>31) {
        return  0;
    }
    else if (mes==2 && bisiesto==0 ) {
        if (dia >28) return 0;
    }
    else if ((mes<=7 && mes%2==0) ||(mes>7 && mes%2!=0)) {
        if (dia>30) return  0;
    }
    else if ((mes<=7 && mes%2!=0) || (mes>7 && mes%2==0)) {
        if (dia>31) return  0;
    }
    else return 0;

    return 1;
}


int main() {
    int dia=0;
    int mes=0;
    int año=0;
    printf("Introduce un año (dd/mm/yy):");
    scanf("%d/%d/%d",&dia,&mes,&año);
    int verificacion=verificacion_fecha(dia, mes, año);
    if (verificacion==0) printf("No es valida");
    else printf("Es valida");
    return 0;
}