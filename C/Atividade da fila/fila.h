#include <stdio.h>

typedef struct No No;

typedef struct Fila Fila;

Fila* cria();

void inserir(int pessoa, Fila* f);

int pop(Fila* f);