#include <string>
#include <iostream>
#include "pessoa.hpp"

using std::string;
using std::cout;
using std::endl;

Pessoa::Pessoa() {
    nome = "Rock";
    cpf = "00000000001";
}

Pessoa::Pessoa(string nome) {
    this->nome = nome;
    this->cpf = "00000000001";
}

Pessoa::Pessoa(string x, string y):
    nome(x), cpf(y)
{

}