#include <stdio.h>

int soma_entre_1_e_n(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("A soma dos numeros entre 1 e %d eh %d\n", n, soma_entre_1_e_n(n));
    return 0;
}