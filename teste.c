#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float num = 0;

  printf("Digite um float: \n");
  scanf("%f", &num);

  printf("float: %f", num);

  return 0;
}