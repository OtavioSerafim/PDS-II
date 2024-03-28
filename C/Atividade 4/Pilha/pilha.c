#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

typedef struct pilha {
    int topo;
    int* vetor;
} Pilha;

Pilha* pilha_cria() {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    if (p == NULL) {
        printf("Memória insuficiente!");
        exit(1);
    }
    p->topo = 0;
    p->vetor = NULL;
    return p;
}

void pilha_push(Pilha* p, int v){
    p->topo++;
    p->vetor = (int*) realloc(p->vetor, p->topo * sizeof(int));
    if (p->vetor == NULL) {
        printf("Memória insuficiente!");
        exit(1);
    }
    p->vetor[p->topo - 1] = v;

}

int pilha_pop(Pilha* p) {
    if (p->topo == 0) {
        printf("Pilha vazia!");
        exit(1);
    }
    int v = p->vetor[p->topo - 1];
    p->topo--;
    p->vetor = (int*) realloc(p->vetor, p->topo * sizeof(int));
    return v;
}

int pilha_vazia(Pilha* p) {
    if (p->topo == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void pilha_libera(Pilha* p) {
    free(p->vetor);
    free(p);
}