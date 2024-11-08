#include <stdio.h>

int main()
{
    // Contratado em 2005
    // Salario inicial 1.000,00 reais
    // em 2007 +1,5% incrementado ao salário
    // a partir de 2007 o incremento anual dobra a cada ano;
    
    float salario, incremento=1.5;
    int ano = 2007;
    
    printf("Insira o valor:\n>");
    scanf("%f", &salario);
    
    do{
        printf("Ano: %d\n", ano);
        printf("Salario: %.2f\n", salario);
        printf("Incremento: %.1f%%\n", incremento);
        salario += ((incremento*salario)/100);
        incremento = incremento*2.0;
        ano += 1;
    }while(ano<=2024);
    
    return 0;
}