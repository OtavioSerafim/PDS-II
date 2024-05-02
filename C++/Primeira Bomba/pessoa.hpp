#include <string>
#include <stdio.h>
#include <iostream>
using std::string;

class Pessoa {
private:
    string nome;
    string cpf;

public:
    Pessoa();
    Pessoa(const string nome);
    Pessoa(const string nome, const string cpf);

private:
   bool validacpf(string cpf);
};
