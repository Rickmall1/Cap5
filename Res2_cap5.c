#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int i, j, n;
  float e = 1;
  int fat = 1;

  printf("Calculo da formula: \nE = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! \n\n");

  printf("Digite um valor para N: ");
  scanf("%d", &n);

  // Acho muito complicado trabalhar com fatorial, vou me esforçar para aprender;
  for (i = 0; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      fat = fat * j;
    }
    e = e + 1 / fat;
  }

  printf("E= %.2f", e);
  return 0;
}