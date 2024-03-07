#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int maior_valor_vetor(int *vetor, int n){
    int maior = vetor[0];
    for(int i = 1; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];
    srand(time(NULL));

    for(int i = 0; i < n; i++){
        vetor[i] = rand() % 1000 + 1;
    }

    printf("O maior valor do vetor eh: %d\n", maior_valor_vetor(vetor, n));

}