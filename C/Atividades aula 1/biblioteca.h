#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

/**
 * @brief Verifica se um número é divisível por 5 e 11.
 * @param n O número a ser verificado.
 * @return Retorna 0 se o número for divisível por ambos, caso contrário retorna 1.
 */
int divisivel_por_5_e_11(int n);

/**
 * @brief Calcula a soma de todos os números entre 1 e n.
 * @param n O número até onde a soma será calculada.
 * @return A soma de todos os números entre 1 e n.
 */
int soma_entre_1_e_n(int n);

/**
 * @brief Encontra e retorna o maior valor em um vetor de inteiros.
 * @param vetor O vetor de inteiros.
 * @param n O número de elementos no vetor.
 * @return O maior valor encontrado no vetor.
 */
int maior_valor_vetor(int *vetor, int n);

/**
 * @brief Imprime todos os números naturais até n em ordem crescente.
 * @param n O número até onde os números naturais serão impressos.
 */
void imprime_naturais(int n);

/**
 * @brief Inverte os valores de duas variáveis.
 * @param a Ponteiro para a primeira variável.
 * @param b Ponteiro para a segunda variável.
 */
void inverte(int *a, int *b);

#endif