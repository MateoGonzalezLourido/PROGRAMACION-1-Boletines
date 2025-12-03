//
// Created by mlour on 01/10/2025.
//this program was done by 🐤

#include <stdio.h>
#include <string.h>

int main() {
    int date[2];
    printf("Escriba una fecha del 2025 (dd mm):");
    printf("Introduzca el dia:");
    scanf("%d", &date[0]);
    printf("Introduzca el mes:");

    int dia=date[1]*30+date[0];
    printf("La fecha introducida corresponde al dia %d del año en curso",dia);
    return 0;
}
