#include <stdio.h>
#include <stdlib.h>

typedef struct No no;

typedef struct Arvore Arvore;

Arvore* cria();

void inserir(int valor, Arvore* a);

int procurar(int valor, Arvore* a);
