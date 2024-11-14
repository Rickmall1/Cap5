#include <stdio.h>
#include <stdlib.h>


int main() {

	int sexo,aulas,codigo=0;
	float mediaFem=0, mediaMasc=0, contMasc=0, contFem=0;

	while(1) {

		printf("\nInsira o codigo:\n>");
		scanf("%d", &codigo);
		if(codigo==99999) {
			break;
		}

		printf("Insira o sexo:\n1- Masculino\n2- Feminino\n>");
		scanf("%d", &sexo);

		printf("Insira o numero de aulas:\n>");
		scanf("%d", &aulas);

		aulas = aulas*30;

		printf("\nCodigo: %d", codigo);
		printf("\nSalario bruto: %.2f", (float)aulas);

		if(sexo=1) {
			aulas= aulas-(aulas*(1.0/10));
			mediaMasc+=aulas;
			contMasc++;
		}
		else {
			aulas= aulas-(aulas*(5.0/100));
			mediaFem+=aulas;
			contFem++;
		}

		printf("\nSalario liquido: %.2f",(float)aulas);
	}

	printf("\nMedia dos salarios femininos e masculinos:");
	if(contFem!=0)
		printf("%.2f", mediaFem/contFem);
	else
		printf("\nSem mulheres.");


	if(contMasc!=0)
		printf("\n%.2f", mediaMasc/contMasc);
	else
		printf("\nSem homens.");

	printf("\nFIM.");

	return (EXIT_SUCCESS);
}

