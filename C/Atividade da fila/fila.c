#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct No{
    int pessoa;
    No* proximo;
}No;

typedef struct Fila{
    No* primeiro;
    No* ultimo;
}Fila;

Fila* cria(){
    Fila* f = malloc(sizeof(Fila));
    if(f == NULL){
        printf("A alocação não foi feita");
        exit(1);
    };
    f->primeiro = NULL;
    f->ultimo = NULL;
    return f;
}

void push(int pessoa, Fila* f){
    No* n = malloc(sizeof(No));
    n->pessoa = pessoa;
    n->proximo = NULL;
    if(f->ultimo != NULL){
        f->ultimo->proximo = n;
    }

    f->ultimo = n;
    if(f->primeiro == NULL  ){
        f->primeiro =n;
    }
}

int pop(Fila*f){
    if(f->primeiro == NULL){
        printf("A fila está vazia.\n");
        return -1;
    }
    else{
        No* temp = f->primeiro;
        int valor_return = temp->pessoa;
        f->primeiro = temp->proximo;

        free(temp);
        return valor_return;
    }

}