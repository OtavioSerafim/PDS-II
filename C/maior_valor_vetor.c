#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "biblioteca.h"

int main(){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        vetor[i] = rand() % 1000 + 1;
    }
    
    printf("Vetor: ");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    printf("O maior valor do vetor eh: %d\n", maior_valor_vetor(vetor, n));

}