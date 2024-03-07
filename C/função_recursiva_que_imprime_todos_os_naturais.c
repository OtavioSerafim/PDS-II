#include <stdio.h>

void imprime_naturais(int n){
    if(n > 0){
        imprime_naturais(n - 1);
        printf("%d\n", n);
    }
}

int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    imprime_naturais(n);
    return 0;
}