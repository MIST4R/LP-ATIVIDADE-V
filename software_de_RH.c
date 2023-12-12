#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

struct ficha_funcionario
{
    char nome[200];
    int idade;
    char cargo[200];
    char data_de_admissao[11];
    float salario;
};

void limpatela()
{
    system("cls||clear");
    fflush(stdin);
    return;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tamanho = 0;
    int i = 0;
    struct ficha_funcionario funcionario[999];
    int menu;
    int menu2;
    int j;
    int quantidade_funcionario = 0;
    float salarioTotal = 0;
    float mediaSalario;
    int meses;

    do
    {
        printf("digite '1' para adicionar um funcionário novo\n");
        printf("digite '2' para sair: ");
        scanf("%d", &menu);
        limpatela();

        switch (menu)
        {
        case 1:
            printf("cadastro de funcionário\n");
            printf("dados do %d° funcionário\n", i + 1);
            printf("nome: ");
            scanf("%199s", &funcionario[tamanho].nome);
            limpatela();

            printf("cargo: ");
            scanf("%199s", &funcionario[tamanho].cargo);
            limpatela();

            printf("salario: ");
            scanf("%f", &funcionario[tamanho].salario);
            limpatela();

            printf("data de admissão: ");
            scanf("%10s", &funcionario[tamanho].data_de_admissao);
            limpatela();

            i++;
            tamanho++;
            quantidade_funcionario++;
            salarioTotal += funcionario[j].salario;
            break;

        default:
            break;
        }
    } while (menu != 2);

    do
    {
        printf("digite '1' para mostrar dados de funcionários\n");
        printf("digite '2' para calcular total de funcionários\n");
        printf("digite '3' para média salarial da empresa\n");
        printf("digite '4' para dar ferias\n");
        printf("digite '5' para sair: ");
        scanf("%d", &menu2);
        limpatela();

        switch (menu2)
        {
        case 1:
            for (j = 0; j < tamanho; j++)
            {
                i = 0;
                printf("dados do %d° funcionário\n", i + 1);
                printf("nome: %s\n", funcionario[j].nome);
                printf("cargo: %s\n", funcionario[j].cargo);
                printf("salario: %.2f\n", funcionario[j].salario);
                printf("data de admissão: %s\n\n", funcionario[j].data_de_admissao);
            }
            break;

        case 2:

            printf("total de funcionários na empresa: %d\n\n", quantidade_funcionario);

            break;

        case 3:

            mediaSalario = salarioTotal / quantidade_funcionario;
            printf("média salarial da empresa: %.2f\n\n", mediaSalario);

            break;

        case 4:
            printf("quanto tempo o colaborador está á trabalhar: ");
            scanf("%d", &meses);
            limpatela();

            if (meses >= 12)
            {
                printf("o funcionario está de férias\n\n");
            }
            else
            {
                printf("tem que cumprir carga horaria\n\n");
            }

            break;
        default:
            break;
        }

    } while (menu2 != 5);

    return 0;
}
