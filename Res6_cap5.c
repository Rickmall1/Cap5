#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    float cod, num_h, turno, valor_h, categoria;

    //Váriavel de controle
    int cont = 0;
    while (cont < 10) {

        cont++;

        //Inicio das entradas
        printf("Digite o seu código: \n");
        scanf("%f", &cod);

        printf("Digite a sua categoria:\n1--Operário\n2--Gerente\n");
        scanf("%f", &categoria);

        printf("Digite o nº de horas trabalhadas: \n");
        scanf("%f", &num_h);

        printf("Digite seu turno:\n1--Matutino\n2--Vespertino\n3--Noturno \n");
        scanf("%f", &turno);

        //Validando turnos existentes
        if ((turno != 3 && turno != 2 && turno != 1)) {
            cont = 10;
            printf("Turno inexistente");
        }

        //Calculo da hora de trabalho;
        if ((categoria == 2 && turno == 3)) {
            valor_h = (18.0 / 100.0)*450;
        } else if ((categoria == 2 && turno == 1 || turno == 2)) {
            valor_h = (15.0 / 100.0)*450;
        } else if ((categoria == 1 && turno == 3)) {
            valor_h = (13.0 / 100.0)*450;
        } else if ((categoria == 1 && turno == 1 || turno == 2)) {
            valor_h = (10.0 / 100.0)*450;
        }

        //Salário baseado no valor da hora e horas trabalhadas
        float sal_inicial = 0;
        sal_inicial = valor_h * num_h;

        //Auxilio alimentação
        float aux = 0;
        if ((sal_inicial <= 300)) {
            aux = sal_inicial * 0.2;
        } else if ((sal_inicial > 300 && sal_inicial <= 600)) {
            aux = sal_inicial * 0.15;
        } else if ((sal_inicial > 600)) {
            aux = sal_inicial * 0.05;
        }

        //Saída com todos os valores
        printf("Código: %.2f\n", cod);
        printf("Nº de horas trabalhadas: %.2f\n", num_h);
        printf("Valor da hora trabalhada: %.2f \n", valor_h);
        printf("Salário inicial: %.2f \n", sal_inicial);
        printf("Auxílio alimentação: %.2f\n", aux);

        float sal_final = 0;
        sal_final = sal_inicial + aux;
        printf("Salário final: %.2f\n", sal_final);

    }
    return (0);
}

