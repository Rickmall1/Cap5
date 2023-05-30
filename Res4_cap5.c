#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int codigo, num_vei, num_acid;

  int i;

  for (i = 1; i <= 5; i++)
  {
    printf("Informe o código da cidade: \n");
    scanf("%d", codigo);

    printf("Informe o numero de veículos de passeio: \n");
    scanf("%d", num_vei);

    printf("Informe o código da cidade: \n");
    scanf("%d", num_acid);
  }

  return 0;
}