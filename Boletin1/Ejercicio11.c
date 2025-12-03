//this program was done by 🐤

#include <stdio.h>

int main() {

    int segundos=0;
    printf("Introduzca un numero de segundos para conversion: ");
    scanf("%d",&segundos);
    const int SEGUNDOS_COPIA=segundos;

    int minutos=segundos/60;
    segundos=segundos%60;
    int horas=minutos/60;
    minutos=minutos%60;

    printf("Tiempo en segundos: %d",SEGUNDOS_COPIA);
    printf("%d segundos son %dh : %dm : %ds",SEGUNDOS_COPIA,horas,minutos,segundos);

    return 0;
}