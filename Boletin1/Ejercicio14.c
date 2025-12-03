//this program was done by🐤

#include <stdio.h>

int main() {
    char ciudad[40];
    float grados_max=0;
    float grados_min=0;

    printf("Introduzca el nombre de su ciudad:");
    scanf("%s",ciudad);
    printf("Introduzca la temperatura maxima en grados Fahrenheit:");
    scanf("%f",&grados_max);
    printf("Introduzca la temperatura minima en grados Fahrenheit:");
    scanf("%f",&grados_min);

    printf("------------------------%s--------------------\n",ciudad);
    printf("    TMax(F)        TMin(F)        TMax(C)        TMin(C)  \n");
    printf("    %.2f      %.2f      %.2f      %.2f",grados_max,grados_min,(grados_max-32)*5/9,(grados_min-32)*5/9);

    return 0;
}