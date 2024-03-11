#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"



int main(){
    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    inverte(&a, &b);
    printf("O valor de a eh: %d\n", a);
    printf("O valor de b eh: %d\n", b);
    system("pause");
    return 0;
}