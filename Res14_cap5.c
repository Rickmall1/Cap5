#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float divida, valor_divida = 0, valor_juros = 0, juros = 0, valor_parcel = 0;
    int qtd_parcel = 0;
    int i = 0;
    int j = 3;
    int cont = 0;

    printf("Digite o valor da divida: \n");
    scanf("%f", &divida);
    printf("==============================\n");

    for (; i <= 4; i++) {
        cont = j*i;
        if ((cont == 0)) {
            cont = 1;
            //printf("Quantidade de parcelas: 1\n", cont);
        } else {
            //printf("Quantidade de parcelas: %d\n", cont);
        }
        //  printf("Valor dos juros: %.2f\n", juros);
        if ((juros == 0)) {
            juros = juros + 10;
        } else {
            juros = juros + 5;
        }

        qtd_parcel = cont;
        valor_juros = (juros * divida) / 100.0;
        valor_divida = divida + valor_juros;
        valor_parcel = valor_divida / qtd_parcel;

        printf("Valor da divida: %.2f\n", divida);
        printf("Valor dos juros: %.2f\n", valor_juros);
        printf("Valor da divida com juros: %.2f\n", valor_divida);
        printf("Quantidade de parcelas: %d\n", qtd_parcel);
        printf("Valor da parcela: %.2f\n", valor_parcel);
        printf("==============================\n");

    }

    return 0;
}