#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    No* esquerda;
    No* direita;
}No;

typedef struct Arvore{
    No* raiz;
}Arvore;

Arvore* cria(){
    Arvore* a = malloc(sizeof(Arvore));
    if(a == NULL){
        printf("A alocacao nao foi feita");
        return NULL;
    }
    a->raiz = NULL;
    return a;
}

void inserir(int value, No* raiz){
    No* n = malloc(sizeof(No));
    n->valor = value;
    n->direita = NULL;
    n->esquerda = NULL;
    
    if (raiz == NULL){
        raiz = n;
    }
    else{
        if(value == raiz->valor){
            printf('O valor ja existe.');
            return NULL;
        }
        else if(value < raiz->valor){
            if(raiz->esquerda == NULL){
                raiz->esquerda = n;
            }
            else{

            }
        }

    }
}
