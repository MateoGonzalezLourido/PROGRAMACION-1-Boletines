//this program was done by 🐤

#include <stdio.h>

int main(){
    char name[20];
    printf("Introduce tu nombre:");
    scanf("%s",name);
    int edad;
    printf("Introduce tu edad:");
    scanf("%d",&edad);
    printf("Buenos dias %s , tiene usted %d anos!",name,edad);
    return 0;
}