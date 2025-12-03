#include<stdio.h>
#include <stdlib.h>

void Menu() {
    system("cls");
    printf("\n***MENU***\n");
    printf("0-Salir\n");
    printf("1-Calcular el número de cifras de un entero\n");
    printf("2-Sumar las cifras de un entero\n");
    printf("3-Indica la cifra i-ésima menos significativa de un entero\n");
    printf("4-Calcular la imagen especular de un entero\n");
    printf("5-Comprobar si un entero es primo\n");
    printf("6-Mostrar el MCD de dos números\n");
    printf("7-Presentar la tabla de sumar, restar, multiplicar y dividir de n\n");
}

long long Calcular_longitud_numero_entero(int n) {
    int longitud=0;
    int numero=n;
    while (!numero<=0) {
        numero/=10;
        longitud++;
    }
    return longitud;
}
long long Sumatorio_cifras(int n) {
    int suma=0;
    while (n > 0) {
        suma += n % 10; // tomar la última cifra
        n /= 10;        // quitar la última cifra
    }
    return suma;
}
long long buscar_cifra_esima(int n,int c) {
    int cifra=c;
    int numero=n;
    long long int longitud=Calcular_longitud_numero_entero(numero);
    if (cifra>longitud) {
        return -1;
    }
        int i=cifra;
        while (cifra<i) {
            i--;
            numero/=10;
        }
    return numero%10;
}
long long Calcular_imagen(int n_original) {
    long long int n_invertido=0;
    while (n_original>0) {
        n_invertido = n_invertido * 10 + (n_original % 10);
        n_original/=10;
    }
    return n_invertido;
}
//forma super optimizada de ver si es primo
int EsPrimo(int n) {//0:no , 1 :si
    //casos principales o especiales
    if (n<=1) return  0;//1 no es primo, y si es menor es imposible ser no primo
    if (n==2) return 1;//caso especial donde n%2==0 es primo
    if (n%2==0) return 0;
    int i=3;//hasta el 2 ya esta mirado
    while (i*i<=n) {
        if (n%i ==0) return 0;//se encontro un primo entre (3 y raiz de n)
        i+=2;//todos los >2 pares no son primos, los saltamos
    }
}
//mcd usando el metodo de euclides
long long MCD(int a,int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
void Mostrar_tablas(int n) {
    printf("\n");
    //tablas sumar
    printf("TABLA DE LA SUMA de %d",n);
    for (int i=0;i<10;i++) {
        printf("\n%d + %d = %d",n,i,n+i);
    }
    printf("\n");
    //tablas restar
    printf("TABLA DE LA RESTA de %d",n);
    for (int i=0;i<10;i++) {
        printf("%d - %d = %d",n,i,n-i);
    }
    printf("\n");
    //tablas multiplicar
    printf("TABLA DE LA MULTIPLICACION de %d",n);
    for (int i=0;i<10;i++) {
        printf("%d * %d = %d",n,i,n*i);
    }
    printf("\n");
    //tablas division
    printf("TABLA DE LA DIVISION de %d",n);
    for (int i=0;i<10;i++) {
        printf("%d / %d = %d",n,i,n/i);
    }
}
void Controlador_opciones(int opcion) {
    system("cls");
    if (opcion==1) {
        printf("\n Calcular longitud numero\n");
        int n=-1;
        printf("Introduce el numero entero: ");
        while (!(n>=0)) {
            scanf("%d",&n);
        }
        int res=Calcular_longitud_numero_entero(n);
        printf("\nLa longitud del numero(%d) es de %d cifras",n,res);
    }
    else if (opcion==2) {
        printf("\nSumar cifras de un entero\n");
        printf("Escribe un numero entero: ");
        int n=-1;
        while (!(n>=0)) {
            scanf("%d",&n);
        }
        int res=Sumatorio_cifras(n);
        printf("\nEl sumatorio de cifras del numero(%d) es %d\n",n,res);
    }
    else if (opcion==3) {
        printf("\nIndicador cifra i-esima menos significativa de un entero\n");
        printf("Escribe un numero:");
        int n=-1;
        while (!(n>=0)) {
            scanf("%d",&n);
        }
        printf("\nIntroduce la cifra que quieres:");
        int cifra=-1;
        while (!(cifra>=0)) {
            scanf("%d",&cifra);
        }
        int res=buscar_cifra_esima(n,cifra);
        if (res!=-1) {
            printf("La cifra que pediste es %d",res);
        }
        else {
            printf("\nLa cifra que pediste no se encontro!");
        }
    }
    else if (opcion==4) {
        printf("\nCalculador de la imagen especular de un entero \n");
        printf("Escribe un entero:");
        int n=-1;
        while (!(n>=0)) {
            scanf("%d",&n);
        }
        int res=Calcular_imagen(n);
        printf("La imagen del numero %d es %d",n,res);
    }
    else if (opcion==5) {
        printf("\nComprobar si un entero es primo\n");
        printf("Escribe un numero entero: ");
        int n=-1;
        while (!(n>=0)) {
            scanf("%d",&n);
        }
        int res=EsPrimo(n);
        if (res==0) printf("El numero %d es no primo",n);
        else printf("El numero %d es primo",n);
    }
    else if (opcion==6) {
        printf("\nMostrar el MCD de dos numeros\n");
        printf("Escribe los dos numeros (n n)");
        int n1=-1;
        int n2=-1;
        while (!(n1>=0 && n2>=0)) {
            scanf("%d %d", &n1,&n2);
        }
        int res=MCD(n1,n2);
        printf("\n el MCD de %d y %d es %d",n1,n2,res);
    }
    else if (opcion==7) {
        printf("\nPresentar la tabla de sumar, restar, multiplicar y dividir de n\n");
        printf("Escribe un numero:");
        int n=-1;
        while (!(n>=0)) {
            scanf("%d",&n);
        }
        Mostrar_tablas(n);
    }
}

int main() {
    int opcion=-1;
    while (!(opcion==0)) {
        Menu();
        printf("\nIntroduce una opcion:");
        scanf("%d",&opcion);
        //opciones
        if (!(opcion>=0 && opcion<=7)) {
            system("cls");
            printf("\nEscribe una opcion valida (0-7)");
        }
        else {
            if (opcion!=0) Controlador_opciones(opcion);
        }
        //parar codigo temporalmente
        if (opcion!=0) {
            int entrada=-1;
            while (entrada!=0) {
                printf("\n\nPulsa 0 para continuar: ");
                scanf("%d",&entrada);
            }
        }
    }
    printf("\n FIN PROGRAMA \n");
    return 0;
}