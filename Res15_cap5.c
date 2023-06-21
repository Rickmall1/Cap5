#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float preco_uni, refri, categoria;
    float estoca;
    int i = 0;

    while (i < 12) {
        i++;

        printf("Digite o preço: \n");
        scanf("%f", &preco_uni);

        printf("Digite a refrigeração:\n1--NECESSITA DE REFRIGERAÇÃO\n2--NÃO NECESSITA \n");
        scanf("%f", &refri);

        printf("Digite a categoria:\n1--ALIMENTAÇÃO\n2--LIMPEZA\n3--VESTUARIO\n");
        scanf("%f", &categoria);

        if ((preco_uni <= 20 && categoria == 1)) {
            estoca = 2.0;
        } else if ((preco_uni <= 20 && categoria == 2)) {
            estoca = 3.0;
        } else if ((preco_uni <= 20 && categoria == 3)) {
            estoca = 4.0;
        }
        
        

    }
    return 0;
}