#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float precoUnitario, precoImposto = 0, precoTransporte = 0, precoSeguro = 0;
  int pais, meioTransporte, cargaPerigosa;

  while (1)
  {
    // Entradas
    printf("\nDigite o preço unitário:\n>");
    scanf("%f", &precoUnitario);
    if (precoUnitario == 0)
    {
      printf("\n**Fim do programa**");
      break;
    }

    printf("\nInsira o país de origem:\n1- EUA\n2- MÉXICO\n3-Outros\n>");
    scanf("%d", &pais);

    printf("\nSelecione o meio de transporte:\n1- Terrestre\n2- Fluvial\n3- Aéreo\n>");
    scanf("%d", &meioTransporte);

    printf("\nCarga perigosa?\n1- Sim\n2- Não\n>");
    scanf("%d", &cargaPerigosa);

    // Preco unitario
    if (precoUnitario <= 100)
    {
      precoImposto = precoUnitario * (5.0 / 100);
      printf("\nValor do imposto: %.2f", precoImposto);
    }
    else
    {
      precoImposto = precoUnitario * (10.0 / 100);
      printf("\nValor do imposto: %.2f", precoImposto);
    }

    // Carga perigosa
    switch (cargaPerigosa)
    {
    case 1:
      switch (pais)
      {
      case 1:
        precoTransporte = 50;
        printf("\nValor do transporte: %.2f", precoTransporte);
        break;
      case 2:
        precoTransporte = 21;
        printf("\nValor do transporte: %.2f", precoTransporte);

        break;
      case 3:
        precoTransporte = 24;
        printf("\nValor do transporte: %.2f", precoTransporte);
        break;
      }
      break;
    case 2:
      switch (pais)
      {
      case 1:
        precoTransporte = 12;
        printf("\nValor do transporte: %.2f", precoTransporte);
        break;
      case 2:
        precoTransporte = 21;
        printf("\nValor do transporte: %.2f", precoTransporte);
        break;
      case 3:
        precoTransporte = 60;
        printf("\nValor do transporte: %.2f", precoTransporte);
        break;
      }
      break;
    }

    // Valor do seguro / Mexico paga metade / Produtos aéreios pagam metade
    if (pais == 2 || meioTransporte == 3)
      precoSeguro = precoUnitario / 2.0;

    printf("\nValor final: %.2fR$", precoImposto + precoUnitario + precoTransporte);
    printf("\nTotal de impostos: %2.f\n", precoImposto);
  }
  return 0;
}