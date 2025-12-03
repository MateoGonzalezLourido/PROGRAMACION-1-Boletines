//this program was done by 🐤
#include <stdio.h>

int main() {

    for (int j=1;j<=5;j++) {
        printf("TABLA DE MULTIPLICAR DEL %d\n",j);
        for (int i=0;i<11;i++) {
            printf("        %d x %d = %d\n",j,i,(i*j));
        }
    }
    return 0;
}