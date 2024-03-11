#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

int main() {
    float angulo;
    printf("Digite um angulo em radianos: ");
    scanf("%f", &angulo);
    printf("Seno: %.2f\n", calcular_seno(angulo));
    printf("Cosseno: %.2f\n", calcular_cosseno(angulo));
    printf("Tangente: %.2f\n", calcular_tangente(angulo));
    system("pause");
    return 0;
}