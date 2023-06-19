#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

    float divida,valor_div=0,valor_juro=0,qtd_parcela=0,valor_parcela=0;

    printf("Digite o valor da divida: \n");
    scanf("%f", &divida);

    while(qtd_parcela<12){
        qtd_parcela++;

        if((qtd_parcela==1)){
            valor_parcela = divida/qtd_parcela;
            printf("Valor da parcela: %.2f\n", valor_parcela);
            printf("Quantidade de parcelas: 1\n");
            printf("Valor do juros: 0\n");
            printf("Valor da dívida: 1000");
        }
    }


    return 0;
}