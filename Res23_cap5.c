#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salMin, quiloWatts, quiloWattsValor = 0, faturamento = 0;
    int tipoConsumidor, cont = 0;

    printf("Insira o valor do salário mínimo:\n>");
    scanf("%f", &salMin);
    quiloWattsValor = salMin * (1.0 / 8);

    while (1)
    {
        quiloWatts = 0;
        printf("\nDigite a quantidade de quilowatts gastos:\n>");
        scanf("%f", &quiloWatts);
        if (quiloWatts == 0)
        {
            printf("\nFim");
            break;
        }

        quiloWatts = quiloWatts * quiloWattsValor;

        printf("\nInsira seu tipo:\n1- Residêncial\n2- Comercial\n3- Industrial\n>");
        scanf("%d", &tipoConsumidor);
        switch (tipoConsumidor)
        {
        case 1:
        {
            quiloWatts = quiloWatts + (quiloWatts * (5.0 / 100));
            if (quiloWatts > 500 && quiloWatts < 1000)
                cont++;
            break;
        }
        case 2:
        {
            quiloWatts = quiloWatts + (quiloWatts * (10.0 / 100));
            if (quiloWatts > 500 && quiloWatts < 1000)
                cont++;
            break;
        }

        case 3:
        {
            quiloWatts = quiloWatts + (quiloWatts * (15.0 / 100));
            if (quiloWatts > 500 && quiloWatts < 1000)
                cont++;
            break;
        }
        }
        printf("\nTotal gasto: %.2f\n", quiloWatts);
        faturamento += quiloWatts;
    }
    printf("\nQuantidade de consumidores que pagam entre 500 e 1000: %d", cont);
    printf("\nFaturamento geral: %.2f", faturamento);

    return 0;
}