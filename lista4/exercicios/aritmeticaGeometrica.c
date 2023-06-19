#include <stdio.h>

int mdc(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int mmc(int a, int b) {
    int m = mdc(a, b);
    int mmc = (a * b) / m;
    return mmc;
}

int main(){
    int x, z;
    scanf("%d/n", &x);
    scanf("%d/n", &z);
    if(x <= 1 || z  <= 1  ){
        printf("Entrada invalida.\n");
        return 0;
    }
    printf("mdc: %d\n", mdc(x, z));
    printf("mmc: %d\n", mmc(x, z));

}