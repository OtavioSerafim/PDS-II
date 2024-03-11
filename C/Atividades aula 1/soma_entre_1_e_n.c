#include <stdio.h>
#include "biblioteca.h"



int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("A soma dos numeros entre 1 e %d eh %d\n", n, soma_entre_1_e_n(n));
    return 0;
}