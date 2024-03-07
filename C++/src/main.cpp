#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

// Função para gerar uma lista de números aleatórios
std::vector<int> gerarListaNumeros() {
    std::vector<int> numeros;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < 10; i++) {
        numeros.push_back(dis(gen));
    }

    return numeros;
}

// Função para organizar a lista em ordem crescente
void organizarListaCrescente(std::vector<int>& numeros) {
    std::sort(numeros.begin(), numeros.end());
}

// Função para exibir a lista organizada
void exibirLista(const std::vector<int>& numeros) {
    std::cout << "Lista organizada em ordem crescente:" << std::endl;
    for (int numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numeros = gerarListaNumeros();
    organizarListaCrescente(numeros);
    exibirLista(numeros);

    return 0;
}