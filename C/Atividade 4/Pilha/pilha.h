typedef struct pilha Pilha;

/*Retorna o ponteiro para uma nova pilha alocada dinamicamente.*/
Pilha* pilha_cria(void);

/*Retira um elemento do topo de uma pilha.*/

int pilha_pop(Pilha* p);

/*Insere um elemento no topo de uma pilha*/

void pilha_push(Pilha* p, int x);

/*Verifica se a pilha está vazia. O retorno é 1, se pilha estiver vazia, ou 0, caso contrário*/

int pilha_vazia(Pilha* p);

/*Libera a memória alocada para a pilha*/

void pilha_libera(Pilha* p);