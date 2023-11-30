#include <stdio.h>

#define NMAX 20

// Preencher o vetor de ocorrências
void preencherocorrencias(int vec[NMAX], int ocorrencias)
{
    int i;
    for (i = 0; i < ocorrencias; i++)
    {
        printf("Introduza o numero de ocorrencias do dia %d: ", i + 1);
        scanf("%d", &vec[i]);
    }
}

// Média das ocorrências

float media(int vec[NMAX], int ocorrencias)
{
    int i;
    float soma = 0, media;

    for (i = 0; i < ocorrencias; i++)
    {
        soma = soma + vec[i];
    }

    media = (soma / ocorrencias);
    printf("\nA media das ocorrencia e: %.2f.\n", media);

    return media;
}

// Máximo de ocorrências e respetivo dia

void max(int vec[NMAX], int ocorrencias)
{
    int i, max = vec[0], diaMax = i + 1;
    for (i = 0; i < ocorrencias; i++)
    {
        if (vec[i] > max)
        {
            max = vec[i];
            diaMax = i + 1;
        }
    }
    printf("\nMaximo de ocorrencias: %d", max);
    printf("\nRegistadas no dia: %d.\n", diaMax);
}

// Mínimo de ocorrências e respetivo dia

void min(int vec[NMAX], int ocorrencias)
{
    int i, min = vec[0], diaMin = i + 1;
    for (i = 0; i < ocorrencias; i++)
    {
        if (vec[i] < min)
        {
            min = vec[i];
            diaMin = i + 1;
        }
    }
    printf("\nMinimo de ocorrencias: %d.", min);
    printf("\nRegistadas no dia: %d.\n", diaMin);
}

int main()
{
    int opcao, nocorrencias = 0, ocorrenciasPreenchido = 0, vec[NMAX], i;

    do
    {
        printf("\nMenu: \n\n");
        printf("1 - Definir o numero de ocorrencias\n");

        if (nocorrencias)
            printf("2 - Preencher ocorrencias\n");

        if (nocorrencias && ocorrenciasPreenchido)
        {
            printf("3 - Media das ocorrencias\n");
            printf("4 - Maximo de ocorrencias e respetivo dia\n");
            printf("5 - Minimo de ocorrencias e respetivo dia\n");
        }

        printf("6 - Sair:\n\n");
        printf("\nIndique a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Definir o numero de ocorrencias: ");
            scanf("%d", &nocorrencias);
            break;
        case 2:
            if (nocorrencias)
            {
                preencherocorrencias(vec, nocorrencias);
                ocorrenciasPreenchido = 1;
            }
            else
            {
                printf("\nERRO: Definir numero de ocorrencias primeiro!\n");
            }
            break;

        case 3:
            if (nocorrencias)
            {
                media(vec, nocorrencias);
                ocorrenciasPreenchido = 1;
            }
            else
            {
                printf("\nERRO: Definir numero de ocorrencias primeiro!\n");
            }
            break;

        case 4:
         if (nocorrencias)
            {
                max(vec, nocorrencias);
                ocorrenciasPreenchido = 1;
            }
            else
            {
                printf("\nERRO: Definir numero de ocorrencias primeiro!\n");
            }
            
            break;

        case 5:
        if (nocorrencias)
            {
                min(vec, nocorrencias);
                ocorrenciasPreenchido = 1;
            }
            else
            {
                printf("\nERRO: Definir numero de ocorrencias primeiro!\n");
            }
            
            break;

        case 6:
            printf("\nEscolheu a opcao sair!");
            break;

        default:
            printf("Escolha uma opcao valida!\n");
        }
    } while (opcao != 6);

    return 0;
}
