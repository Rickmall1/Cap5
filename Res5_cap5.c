#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int fat = 0, x = 0, sinal = 1, S = 0;
  int i;

  printf("Digite x: \n");
  scanf("%d", &x);

  // Potencia par = negativo ; Potencia impar = positivo;
  for (i = 2; i <= x; i++)
  {
    if ((i % 2 == 0))
    {
      sinal = sinal * -1;
    }
  }
  return 0;
}