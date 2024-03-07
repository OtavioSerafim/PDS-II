#include <stdio.h>

int divisivel_por_5_e_11(int n) {
    if(n % 5 == 0 && n % 11 == 0) {
        return 0;
    } 
    else {
        return 1;
    }

}

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (divisivel_por_5_e_11(n) == 0) {
        printf("%d eh divisivel por 5 e 11\n", n);
    } else {
        printf("%d nao eh divisivel por 5 e 11\n", n);
    }
    return 0;
}