#include <stdio.h>

typedef struct No No;

typedef struct Fila Fila;

Fila* cria();

void push(int pessoa, Fila* f);

int pop(Fila* f);