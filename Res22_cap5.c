#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int sexo, exp, idade;
    int numMasc = 0, numFem = 0, numMascExp = 0, idadeMediaHomem = 0, homem45 = 0;
    int mulher21Exp = 0, menorIdadeMulher = 0;

    while (1) {
        printf("Digite sua idade:\n>");
        scanf("%d", &idade);
        if(idade==0){
            printf("\nFim da entrada");
            break;
        }
        
        printf("\nDigite seu sexo:\n1- Homem\n2- Mulher\n>");
        scanf("%d", &sexo);

        printf("\nPossui experiência?\n1- Sim\n2- Não\n>");
        scanf("%d", &exp);

        //Homem
        if (sexo == 1) {
            numMasc++;
            if (exp == 1) {
                idadeMediaHomem++;
                numMascExp += idade;
            }
            if (idade > 45)
                homem45++;
        }//Mulher
        else if (sexo == 2) {
            numFem++;
            if (idade < 21 && exp == 1) {
                mulher21Exp++;
                if (idade > menorIdadeMulher)
                    menorIdadeMulher = idade;
            }
        }
    }

    printf("\nCandidatos do sexo feminino: %d", numFem);
    printf("\nCandidatos do sexo masculino: %d", numMasc);
    printf("\nIdade média dos homens com experiência: %d", numMascExp / idadeMediaHomem);
    printf("\nPorcentagem dos homens com mais de 45 anos: %d%%", (homem45 / numMasc)*100);
    printf("\nNúmero de mulheres com idade inferior a 21 anos e com experiência: %d", mulher21Exp);
    printf("\nMenor idade entre as mulheres com experiência: %d", menorIdadeMulher);

    return 0;
}