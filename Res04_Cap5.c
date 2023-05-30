#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float x = 0, somaAcid = 0, somaVel = 0, mediaAcid, media = 0, codigoMaior, codigoMenor, maior, menor, codigo, numVeiculo, num_acid;
    int i, j;
    int cont = 0;

    for (i = 1; i <= 5; i++) {

        printf("Digite o código da cidade: \n");
        scanf("%f", &codigo);

        printf("Digite o número de veículos: \n");
        scanf("%f", &numVeiculo);

        printf("Digite o número de acidente com vítimas: \n");
        scanf("%f", &num_acid);

        if ((cont == 0)) {
            maior = num_acid;
            menor = num_acid;
            codigoMaior = codigo;
            codigoMenor = codigo;

            cont++;
        }

        if ((num_acid > maior)) {
            maior = num_acid;
            codigoMaior = codigo;
        }

        if ((num_acid < menor)) {
            menor = num_acid;
            codigoMenor = codigo;
        }
        somaVel = numVeiculo + somaVel;

        if ((numVeiculo < 2000)) {
            somaAcid = somaAcid + num_acid;
            x++;
        }
    }
    somaAcid = somaAcid/x;
    media = somaVel / 5;
    printf("O maior número de acidentes é: %.2f, da cidade de codigo: %.2f \nO menor número de acidentes é: %.2f, da cidade %.2f\n", maior, codigoMaior, menor, codigoMenor);
    printf("Média de veículos: %.2f\n", media);
    printf("Média de acidentes de transito em cidades com menos de 2000 veículos: %.2f", somaAcid);

    return 0;
}