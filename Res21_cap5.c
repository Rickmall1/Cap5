#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num, somaPar = 0, soma = 0, maior = 0, menor = 0;
    int numImpar = 0, numPar = 0, quantidade = 0;

    
    while (1) {

        printf("\nInsira um n�mero:\n>");
        scanf("%f", &num);
        
        if(quantidade==0){
            maior=num;
            menor=num;
        }
        if (num == 30000) {
            printf("\nFim da entrada.\n");
            break;
        }

        quantidade++;
        soma += num;

        if (num > maior) //Identifica o numero maior
            maior = num;
        if (num < menor) //Identifica o numero menor
            menor = num;
        if ((int) num % 2 == 0) { //Identifica numero par/impar
            numPar++;
            somaPar += num;
        } else
            numImpar++;

    }
    printf("\nSoma dos n�meros: %.2f", soma);
    printf("\nQuantidade de n�meros digitados: %d", quantidade);
    printf("\nM�dia dos n�meros: %.2f", soma / quantidade);
    printf("\nMaior n�mero: %.2f", maior);
    printf("\nMenor n�mero: %.2f", menor);
    printf("\nM�dia dos pares: %.2f", somaPar / (float) numPar);
    printf("\nPorcentagem dos n�meros �mpares: %.2f%%", ((float) numImpar / (float) quantidade)*100);
    return 0;
}