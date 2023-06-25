#include <stdio.h>

int calcularPG(int a, int r, int n) {
    int termo = a;
    int soma = 0;
    
    for (int i = 0; i < n; i++) {
        soma += termo;
        termo *= r;
    }
    
    return soma;
}

int main() {
    int a, r, n;
    
    printf("Digite o valor do primeiro termo (a): ");
    scanf("%d", &a);
    
    printf("Digite a razao (r): ");
    scanf("%d", &r);
    
    printf("Digite o numero de termos (n): ");
    scanf("%d", &n);
    
    int resultado = calcularPG(a, r, n);
    
    printf("A soma dos %d termos da PG eh: %d\n", n, resultado);
    
    return 0;
}
