#include<stdio.h>
#define TAM 23

void PedirTemperaturasHoras(float array[]) {
    for (int i=0;i<TAM;i++) {
        printf("\nTemperatura de la hora %d",i);
        scanf("%f",&array[i]);
    }
}
void MostrarTemperaturasOrdenadas(float temperaturas[]) {
    int horas[TAM];
    for (int i=0;i<TAM;i++) {
        int posicion=0;
        if (temperaturas[i]!=0.01014) {
            for (int j=0;j<TAM;j++) {
                if (temperaturas[i]<temperaturas[j] && temperaturas[j]!=0.01014) {
                    posicion++;
                }
            }
            float valor=temperaturas[posicion];
            temperaturas[posicion]=0.01014;
            temperaturas[i]=valor;
            horas[posicion]=i;
        }
    }
    //mostrar
    for (int i=0;i<TAM;i++) {
        printf("\n%dh | %f ºC",horas[i],temperaturas[i]);
    }
}
float TemperaturasMedias(float temperaturas[]) {
    float suma=0;
    for (int i=0;i<TAM;i++) {
        suma+=temperaturas[i];
    }
    return suma/TAM;
}
float Maxima(float temperaturas[]) {
    float max=0;
    for (int i=0;i<TAM;i++) {
        if (max<temperaturas[i]) max=temperaturas[i];
    }
    return max;
}


float Minimas(float temperaturas[]) {
    float min=0;
    for (int i=0;i<TAM;i++) {
        if (min>temperaturas[i]) min=temperaturas[i];
    }
    return min;
}
int main() {
    float temperaturas[TAM];
    PedirTemperaturasHoras(temperaturas);
    MostrarTemperaturasOrdenadas(temperaturas);
    printf("\nMedia: %fºC",TemperaturasMedias(temperaturas));
    printf("\nMaximas: %f",Maxima(temperaturas));
    printf("\nMinimas: %f",Minimas(temperaturas));
    return 0;
}