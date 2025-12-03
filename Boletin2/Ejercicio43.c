//el codigo tiene baja precision por pocos
//terminos y problemas de decimales
//con 1 da exacto e, pero con 2 ya no

#include<stdio.h>

int main() {
    double valor_e_calculado = 1;

    for (int i = 1; i < 20; i++) {
        int numerador = 1;
        for (int j = 1; j <= i; j++) {
            numerador *= 1;
        }
        int denominador = 1;
        for (int j = 1; j <= i; j++) {
            denominador *= j;
        }
        valor_e_calculado += numerador / (denominador * 1.0);
    }
    printf("%.15f : e^1", valor_e_calculado);
    return 0;
}
