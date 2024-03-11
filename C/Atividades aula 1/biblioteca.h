#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

// Verifica se um número é divisível por 5 e 11.
// Retorna 0 se o número for divisível por ambos, caso contrário retorna 1.
int divisivel_por_5_e_11(int n);

// Calcula a soma de todos os números entre 1 e n.
int soma_entre_1_e_n(int n);

// Encontra e retorna o maior valor em um vetor de inteiros.
int maior_valor_vetor(int *vetor, int n);

// Imprime todos os números naturais até n em ordem crescente.
void imprime_naturais(int n);

// Inverte os valores de duas variáveis.
void inverte(int *a, int *b);

#endif