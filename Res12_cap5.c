#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int i = 0, num, num_peca, gender;
  float sal = 1000, folha_pag = 0, peca_mes = 0;
  float mediaPeca_h = 0, mediaPeca_m = 0;
  int num_h = 0, num_m = 0;
  float cont = 0;
  int aux = 0;

  // salario minimo = 1000
  while (i < 15)
  {
    i++;

    printf("Digite seu n�mero: \n");
    scanf("%d", &num);

    printf("Digite o n�mero de pe�as fabricadas no m�s: \n");
    scanf("%d", &num_peca);

    printf("Digite seu genero\n1--Homem\n2--Mulher\n: ");
    scanf("%d", &gender);

    // Numero de homens/mulheres
    if ((gender == 1))
    {
      num_h++;
    }
    else
    {
      num_m++;
    }

    // Filtro de classes e contagem de pe�as
    if ((num_peca <= 30))
    {
      printf("Sal�rio: %.2f\n", sal);
      printf("N�mero: %d\n", num);
      printf("-----------------------\n");

      if ((gender == 1))
      {
        mediaPeca_h = mediaPeca_h + num_peca;
      }
      else
      {
        mediaPeca_m = mediaPeca_m + num_peca;
      }
    }
    else if ((num_peca >= 31 && num_peca <= 50))
    {
      sal = sal + ((3.0 / 100.0 * sal) * (num_peca - 30.0));
      printf("Sal�rio: %.2f\n", sal);
      printf("N�mero: %d\n", num);
      printf("-----------------------\n");

      if ((gender == 1))
      {
        mediaPeca_h = mediaPeca_h + num_peca;
      }
      else
      {
        mediaPeca_m = mediaPeca_m + num_peca;
      }
    }
    else if ((num_peca > 50))
    {
      sal = sal + ((5.0 / 100.0 * sal) * (num_peca - 30.0));
      printf("Sal�rio: %.2f\n", sal);
      printf("N�mero: %d\n", num);
      printf("-----------------------\n");

      if ((gender == 1))
      {
        mediaPeca_h = mediaPeca_h + num_peca;
      }
      else
      {
        mediaPeca_m = mediaPeca_m + num_peca;
      }
    }

    // Funcionario com maior sal�rio
    if ((cont == 1))
    {
      cont = sal;
      aux = num;
    }
    else
    {
      if ((sal > cont))
      {
        cont = sal;
        aux = num;
      }
    }

    folha_pag = folha_pag + sal;
    peca_mes = peca_mes + num_peca;
  }

  // M�dias do m�s e pagamento
  mediaPeca_h = mediaPeca_h / num_h;
  mediaPeca_m = mediaPeca_m / num_m;
  printf("====================================\n");
  printf("Folha de pagamento: %.2f\n", folha_pag);
  printf("N�mero de pe�as fabricadas no m�s: %.2f\n", peca_mes);
  printf("M�dia de pe�as fabricadas por homems: %.2f\n", mediaPeca_h);
  printf("M�dia de pe�as fabricadas por mulheres: %.2f\n", mediaPeca_m);
  printf("Funcion�rio com maior sal�rio: %d", aux);

  return 0;
}