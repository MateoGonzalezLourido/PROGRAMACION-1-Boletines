//this program was done by 🐤
#include <stdio.h>

int main() {
    float n[6];
    printf("Introduzca cailificacion asignatura 1 (formato X.X, 0 para no presentado): ");
    scanf("%f",&n[0]);
    printf("Introduzca cailificacion asignatura 2 (formato X.X, 0 para no presentado): ");
    scanf("%f",&n[1]);
    printf("Introduzca cailificacion asignatura 3 (formato X.X, 0 para no presentado): ");
    scanf("%f",&n[2]);
    printf("Introduzca cailificacion asignatura 4 (formato X.X, 0 para no presentado): ");
    scanf("%f",&n[3]);
    printf("Introduzca cailificacion asignatura 5 (formato X.X, 0 para no presentado): ");
    scanf("%f",&n[4]);
    printf("Introduzca cailificacion asignatura 6 (formato X.X, 0 para no presentado): ");
    scanf("%f",&n[5]);

    const float MEDIA_TOTAL=(n[0]+n[1]+n[2]+n[3]+n[4]+n[5])/6;
    float media_presentadas=0;
    int notas=0;
    for (int i=0;i<6;i++) {
        if (n[i]!=0) {
            notas++;
            media_presentadas+=n[i];
        }
    }
    media_presentadas/=notas;

    if (MEDIA_TOTAL<5) {
        printf("Nota media: SUSPENSO(%.2f)",MEDIA_TOTAL);
    }
    else if (MEDIA_TOTAL<7) {
        printf("Nota media: APROBADO(%.2f)",MEDIA_TOTAL);
    }
    else if (MEDIA_TOTAL<9) {
        printf("Nota media: NOTABLE(%.2f)",MEDIA_TOTAL);
    }
    else {
        printf("Nota media: SOBRESALIENTE(%.2f)",MEDIA_TOTAL);
    }
    if (media_presentadas<5) {
        printf("Nota media: SUSPENSO(%.2f)",media_presentadas);
    }
    else if (media_presentadas<7) {
        printf("Nota media: APROBADO(%.2f)",media_presentadas);
    }
    else if (media_presentadas<9) {
        printf("Nota media: NOTABLE(%.2f)",media_presentadas);
    }
    else {
        printf("Nota media: SOBRESALIENTE(%.2f)",media_presentadas);
    }

    return 0;
}