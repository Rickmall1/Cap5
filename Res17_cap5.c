#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  
    //Carlos investe X quantidade. A quantidade rende 2% ao mês
    // joão investe 1/3 do que Carlos investiu. O investimento de João rende 5% ao mês
    // Quantos meses João irá demorar para se igualar ou superar a quantidade de Carlos?
    
    
    float salCarlos,salJoao, taxaCarlos, taxaJoao;
    int meses=0;
    taxaJoao = 5.0/100;
    taxaCarlos = 2.0/100;
    
    printf("Insira o investimento de Carlos:\n>");
    scanf("%f", &salCarlos);
    salJoao = (1.0/3.0)*salCarlos; //Lembrar do casting para float
    
    while(salJoao<salCarlos){
        salCarlos= salCarlos + (salCarlos*taxaCarlos);
        salJoao= salJoao + (salJoao*taxaJoao);
        meses++;
    }
    
    printf("salario de Carlos: %2.f\n", salCarlos);
    printf("salario de Joao: %2.f\n", salJoao);
    printf("Meses: %d", meses);

    return 0;
}