#include <stdio.h>
#include "circulo.h"

int main() {
    Circulo* c1 = circ_cria(0.0, 0.0, 1.0);
    Circulo* c2 = circ_cria(0.0, 0.0, 2.0);

    printf("Área do círculo 1: %.2f\n", circ_area(c1));
    printf("Área do círculo 2: %.2f\n", circ_area(c2));

    if (circ_concentricos(c1, c2)) {
        printf("Os círculos são concêntricos.\n");
    } else {
        printf("Os círculos não são concêntricos.\n");
    }

    printf("Raio do círculo 1: %.2f\n", circ_raio(c1));
    printf("Raio do círculo 2: %.2f\n", circ_raio(c2));

    circ_libera(c1);
    circ_libera(c2);

    return 0;
}