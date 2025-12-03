//this program was done by 🐤
#include <stdio.h>

int main() {
    float salario_anual_bruto = 0;
    int hijos_menores = 0;
    const float IRPF = 15;

    printf("Introduzca su salario bruto anual: ");
    scanf("%f", &salario_anual_bruto);
    printf("Introduzca la cantidad de hijos menores de edad que tiene: ");
    scanf("%d", &hijos_menores);

    float reduccion_impuesto_hijos = 10 * hijos_menores;
    if (reduccion_impuesto_hijos > 50) {
        reduccion_impuesto_hijos = 50; // máximo 50%
    }

    float impuestos = salario_anual_bruto * (IRPF / 100.0f);
    float ahorro =  impuestos-(impuestos*(reduccion_impuesto_hijos/100.0f));

    printf("\nIRPF: %.2f%%: %.2f", IRPF,impuestos);
    printf("\nReducción debida a hijos a cargo: %.2f%%", ahorro);
    printf("\nTotal anual a pagar: %.2f\n", impuestos*(reduccion_impuesto_hijos/100.0f));

    return 0;
}