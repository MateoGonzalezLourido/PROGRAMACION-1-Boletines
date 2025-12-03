#include<stdio.h>
#define TAM 1

struct DATOS {
    char nombre[30];
    int edad;
    float cal1;
    float cal2;
    float cal3;
};
void PedirDatos(struct DATOS datos[]) {
    for (long long int i=0;i<TAM;i++) {
        printf("\n**Datos a introducir del alumno %lld",i);
        printf("\nIntroduce el nombre: ");
        scanf("%s",datos[i].nombre);
        printf("\nIntroduce la edad: ");
        datos[i].edad=-1;
        while (datos[i].edad<0) {
            scanf("%d",&datos[i].edad);
        }
        printf("\nIntroduce su 1ºcalificacion: ");
        datos[i].cal1=-1;
        while (!(datos[i].cal1>=0 && datos[i].cal1<=10)) {
            scanf("%f",&datos[i].cal1);
        }
        printf("\nIntroduce su 2ºCalificacion: ");
        datos[i].cal2=-1;
        while (!(datos[i].cal2>=0 && datos[i].cal2<=10)) {
            scanf("%f",&datos[i].cal2);
        }
        printf("\nIntroduce su 3ºcalificacion: ");
        datos[i].cal3=-1;
        while (!(datos[i].cal3>=0 && datos[i].cal3<=10)) {
            scanf("%f",&datos[i].cal3);
        }
    }
}
int AnalizarNotas(struct DATOS datos[]) {
    //notas calificacion
    int aprobados=0;
    for (long long int i=0;i<TAM;i++) {
        float nota=0;
        nota+=(float)datos[i].cal1 *0.1;
        nota+=(float)datos[i].cal2 *0.3;
        nota+=(float)datos[i].cal3 *0.6;
        if (nota>=5 && datos[i].cal3>=3.5) aprobados++;
    }
    return  aprobados;
}
int main() {
    struct DATOS datos[TAM];
    PedirDatos(datos);

    //resultados
    int res=AnalizarNotas(datos);
    //mostrar
    printf("\n**Tabla de alumnos**");
    for (long long int i=0;i<TAM;i++) {
        printf("\nAlumno %lldº : %s, %d años,C1: %.3f,C2: %.3f,C3: %.3f",i+1,datos[i].nombre,datos[i].edad,datos[i].cal1,datos[i].cal2,datos[i].cal3);
    }
    printf("\nTotal de aprobados: %d",res);
    return 0;
}