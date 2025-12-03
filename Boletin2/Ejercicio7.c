#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminante, x1, x2, parteReal, parteImaginaria;

    printf("Ecuacion de segundo grado: ax^2 + bx + c = 0\n");
    printf("Introduce los valores de a, b y c:\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("No es una ecuacion cuadratica (a no puede ser 0).\n");
        return 1;
    }

    discriminante = b * b - 4 * a * c;

    int caso;
    if (discriminante > 0)
        caso = 1;  // raíces reales distintas
    else if (discriminante == 0)
        caso = 2;  // raíz real doble
    else
        caso = 3;  // raíces complejas

    switch (caso) {
        case 1:
            x1 = (-b + sqrt(discriminante)) / (2 * a);
            x2 = (-b - sqrt(discriminante)) / (2 * a);
            printf("Las raices son reales y distintas:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
            break;

        case 2:
            x1 = -b / (2 * a);
            printf("Las raices son reales e iguales:\n");
            printf("x1 = x2 = %.2lf\n", x1);
            break;

        case 3:
            parteReal = -b / (2 * a);
            parteImaginaria = sqrt(-discriminante) / (2 * a);
            printf("Las raices son complejas conjugadas:\n");
            printf("x1 = %.2lf + %.2lfi\n", parteReal, parteImaginaria);
            printf("x2 = %.2lf - %.2lfi\n", parteReal, parteImaginaria);
            break;

        default:
            printf("Error desconocido.\n");
    }

    return 0;
}
