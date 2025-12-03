#include  <stdio.h>

int comprobar_positivo(float n) {
    if (n<0) return 0;
    return 1;
}

int main() {
    float n=0;
    printf("Introduce un numero:");
    scanf("%f",&n);

    char salidas[2][30]={"Es negativo","Es positivo"};
    printf("%s",salidas[comprobar_positivo((n))]);
    return 0;
}