#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numerador,expoente,denominador,total;

    printf("Digite o numerador: \n");
    scanf("%d", &numerador);

   
    for(expoente=2;expoente<=5;expoente++){
        if((expoente%2==0)){
            numerador = numerador*(-1);
        }
        total = pow(numerador,expoente);
        printf("%d\n", total);
    }

    return 0;
}