#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int option;
  float sal;

  while (option != 4)
  {
    printf("\nMenu de opções:");
    printf("\n1- Imposto");
    printf("\n2- Novo salário");
    printf("\n3- Classificação");
    printf("\n4- Finalizar o programa");
    printf("\n\nDigite a opção desejada:>");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
      printf("\nDigite o salário:\n>");
      scanf("%f", &sal);
      if (sal < 500)
        printf("\nValor do imposto: %.2f\n", sal * (5.0 / 100));
      else if (sal >= 500 && sal <= 850)
        printf("\nValor do imposto: %.2f\n", sal * (10.0 / 100));
      else if (sal > 850)
        printf("\nValor do imposto: %.2f\n", sal * (15.0 / 100));
      break;
    case 2:
      printf("\nDigite o salário:\n>");
      scanf("%f", &sal);
      if (sal > 1500)
        printf("\nNovo salário: %.2f\n", sal + 25);
      else if (sal >= 750 && sal <= 1500)
        printf("\nNovo salário: %.2f\n", sal + 50);
      else if (sal >= 450 && sal < 750)
        printf("\nNovo salário: %.2f\n", sal + 75);
      else if (sal < 450)
        printf("\nNovo salário: %.2f\n", sal + 100);
      break;
    case 3:
      printf("\nDigite o salário:\n>");
      scanf("%f", &sal);
      if (sal <= 700)
        printf("\nMal remunerado\n.");
      else
        printf("\nBem remunerado.\n");
      break;
    case 4:
      printf("\n**Fim do programa**");
      break;
    }
  }
  return 0;
}