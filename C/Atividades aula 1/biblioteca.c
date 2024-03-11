#include <stdio.h>

int divisivel_por_5_e_11(int n) {
    if(n % 5 == 0 && n % 11 == 0) {
        return 0;
    } 
    else {
        return 1;
    }

}

int soma_entre_1_e_n(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += i;
    }
    return soma;
}

int maior_valor_vetor(int *vetor, int n){
    int maior = vetor[0];
    for(int i = 1; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

void imprime_naturais(int n){
    if(n > 0){
        imprime_naturais(n - 1);
        printf("%d\n", n);
    }
}

void inverte(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
