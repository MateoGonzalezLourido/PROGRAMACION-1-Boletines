//this program was done by 🐤

#include<stdio.h>

int main() {
    char nombre[30]="";
    char apellidos[60]="";
    int edad=0;
    int n_creditos_m1=0;
    int n_creditos_m2=0;
    int n_creditos_m3=0;

    //pedir datos
    printf("Introduzca el nombre:");
    scanf("%s",nombre);
    printf("Introduzca sus apellidos:");
    scanf("%[^\n]",apellidos);
    printf("Introduzca su edad:");
    scanf("%d",&edad);
    printf("Introduzca los creditos de la primera matricula:");
    scanf("%d",&n_creditos_m1);
    printf("Introduzca los creditos de la segunda matricula:");
    scanf("%d",&n_creditos_m2);
    printf("Introduzca los creditos de la tercera matricula:");
    scanf("%d",&n_creditos_m3);

    //calculos
    const float PRECIO_CREDITO_M1=15.45;
    const float PRECIO_CREDITO_M2=15.45*1.25;
    const float PRECIO_CREDITO_M3=15.45*1.5;
    const float COSTE_M1=n_creditos_m1*PRECIO_CREDITO_M1;
    const float COSTE_M2=n_creditos_m2*PRECIO_CREDITO_M2;
    const float COSTE_M3=n_creditos_m3*PRECIO_CREDITO_M3;
    const float TOTAL_COSTE_M=COSTE_M1+COSTE_M2+COSTE_M3;

    //mostrar
    printf("Nombre:%s\n",nombre);
    printf("Apellidos:%s\n",apellidos);
    printf("Edad:%d\n",edad);
    printf("Numero de creditos en primera matricula:%d\n",n_creditos_m1);
    printf("Numero de creditos en segunda matricula:%d\n",n_creditos_m2);
    printf("Numero de creditos en tercera matricula:%d\n",n_creditos_m3);
    printf("**************************************************\n");
    printf("*******         %s %s          *******",nombre,apellidos);
    printf("Creditos M1     Coste M1     Creditos M2    Coste M2    Creditos M3     Coste M3\n");
    printf("    %d             %.2f          %d           %.2f          %d             %.2f\n",n_creditos_m1,COSTE_M1,n_creditos_m2,COSTE_M2,n_creditos_m3,COSTE_M3);
    printf("******                                                                   **********\n");
    printf("****************************************Coste Total Matricula\n");
    printf("                                                %.2f\n",TOTAL_COSTE_M);
    printf("*****************************************************");
    return 0;
}