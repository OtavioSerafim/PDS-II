#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (divisivel_por_5_e_11(n) == 0) {
        printf("%d eh divisivel por 5 e 11\n", n);
    } else {
        printf("%d nao eh divisivel por 5 e 11\n", n);
    }
    system("pause");
    
    return 0;
}