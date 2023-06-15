#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
    // Enunciado díficil de se interpretar, pessoalmente acho que isso atrapalha;

    int termos = 0;

    printf("Digite o numero de termos: \n");
    scanf("%d", &termos);

    printf("===============\n");

    // Termos fixos
    int termo1 = 2, termo2 = 7, termo3 = 3;

    // Variaveis de controle
    int i = 0;
    int cont = 0;

    while (i < termos)
    {
        i++;

        printf("%d-", termo1);
        printf("%d-", termo2);
        printf("%d-", termo3);

        // Razão da progressão:
        termo1 = termo1 * 2;
        termo2 = termo2 * 3;
        termo3 = termo3 * 4;
    }

    return (0);
}
