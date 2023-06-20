#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Entrada inválida\n");
        return 0;
    }

    if (numero == 1) {
        printf("Não é primo\n");
        return 0;
    }

    for (int i = 2; i * i <= numero; i++) {
        int resto = numero % i;
        if (resto == 0) {
            printf("Não é primo\n");
            return 0;
        }
    }
    printf("É primo\n");
}