#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float i = 0, sal = 0, percentual, novosal;

  // Dados da questão
  percentual = 1.5 / 100;
  sal = 1000;
  novosal = sal + (percentual * sal);

  // Crescimento exponencial(vai dar um número ENORME)
  for (i = 2007; i <= 2023; i++)
  {
    percentual = percentual * 2;
    novosal = novosal + (percentual * novosal);
  }

  printf("Novo salário em 2023: %.2f", novosal);

  return 0;
}