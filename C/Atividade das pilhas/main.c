#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "pilha.h"


void main() {

    srand(time(NULL));


    Pilha* minhaPilha = cria();

    for(int i = 0; i < 10; i++){
        int n = rand() % 101;
        push(n, minhaPilha);

    }
    int valor;
    while ((valor = pop(minhaPilha)) != -1){
        printf("%d\n", valor);
    }

}