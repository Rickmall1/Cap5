#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float input;

    while (1) {
        printf("\nInsira o valor (prima 0 para sair):\n>");
        scanf("%f", &input);
        if (input == 0) {
            printf("\nFim.");
            break;
        }

        printf("\nRaiz quadrada: %.1f", sqrt(input));
        printf("\nQuadrado de %.0f -> %.1f", input, input * input);
        printf("\nCubo de %.0f > %.1f", input, pow(input, 3.0));
    }
    return 0;
}