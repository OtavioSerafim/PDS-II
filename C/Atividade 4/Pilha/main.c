#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    // Cria uma nova pilha
    Pilha* p = pilha_cria();
    srand(time(NULL));
    

    // Adiciona alguns elementos à pilha
    for (int i = 0; i < 5000; i++) {
        int v = rand() % 100;
        pilha_push(p, v);
        printf("Adicionado à pilha: %d\n", v);
    }

    // Verifica se a pilha está vazia
    if (pilha_vazia(p)) {
        printf("A pilha está vazia.\n");
    } else {
        printf("A pilha não está vazia.\n");
    }

    // Remove os elementos da pilha e imprime-os
    while (!pilha_vazia(p)) {
        int v = pilha_pop(p);
        printf("Removido da pilha: %d\n", v);
    }

    // Verifica novamente se a pilha está vazia
    if (pilha_vazia(p)) {
        printf("A pilha está vazia.\n");
    } else {
        printf("A pilha não está vazia.\n");
    }

    // Libera a memória alocada para a pilha
    pilha_libera(p);

    return 0;
}