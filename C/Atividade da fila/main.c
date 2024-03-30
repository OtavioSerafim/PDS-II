#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(){
    Fila* f = cria();
    
    // Adicionando elementos na fila
    push(1, f);
    push(2, f);
    push(3, f);
    
    // Removendo elementos da fila
    printf("%d\n", pop(f)); // Deve imprimir 1
    printf("%d\n", pop(f)); // Deve imprimir 2
    printf("%d\n", pop(f)); // Deve imprimir 3

    // Tentando remover um elemento de uma fila vazia
    printf("%d\n", pop(f)); // Deve imprimir "A fila está vazia." e retornar -1

    return 0;
}
