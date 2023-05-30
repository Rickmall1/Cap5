#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int fat = 0, numerador, sinal = 1, S = 0;
    int i;

    printf("Digite o numerador: \n");
    scanf("%d", &numerador);

    // Sinal baseado na potencia
    // par = negativo ; impar = positivo;
    for (i = 2; i <= numerador; i++) {
        if ((i % 2 == 0)) {
            numerador = numerador*-1;
        } else {
            numerador = numerador*1;
        }
        //Definindo a potencia do numerador;
        numerador = pow(numerador, i);
        printf("%d\n", numerador);
    }

    return 0;
}