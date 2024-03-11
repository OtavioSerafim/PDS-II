#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    imprime_naturais(n);
    system("pause");
    return 0;
}