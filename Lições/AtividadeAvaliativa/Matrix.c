#include <stdio.h>

int NUM_ALUNOS = 5;
int NUM_PROVAS = 3;
int notas[5][3];
float medias[5];
float mediaSala = 0;

void preencherNotas()
{
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        printf("Digite as notas do aluno %d (prova 1, prova 2, prova 3): ", i + 1);
        for (int j = 0; j < NUM_PROVAS; j++)
        {
            scanf("%d", &notas[i][j]);
        }
    }
}

void preencherNotasAutomatico()
{
    int notasExemplo[5][3] = {
        {8.0, 7.0, 9.0},
        {6.0, 7.5, 8.5},
        {7.0, 6.5, 7.5},
        {9.5, 8.5, 9.0},
        {5.5, 6.0, 7.0}};

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        for (int j = 0; j < NUM_PROVAS; j++)
        {
            notas[i][j] = notasExemplo[i][j];
        }
    }
}

void calcularMediaSala()
{
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        int menorNota = notas[i][0];
        float soma = 0;

        for (int j = 0; j < NUM_PROVAS; j++)
        {
            if (notas[i][j] < menorNota)
            {
                menorNota = notas[i][j];
            }
            soma += notas[i][j];
        }

        medias[i] = (soma - menorNota) / (NUM_PROVAS - 1);
    }

    float soma = 0;
    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        soma += medias[i];
    }
    mediaSala = soma / NUM_ALUNOS;
}

void contarAlunosAcimaMedia()
{
    int contador = 0;

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        if (medias[i] > mediaSala)
        {
            contador++;
        }
    }

    printf("Número de alunos acima da média da sala: %d\n", contador);
}

void contarAlunosComNotaZero()
{
    int contador = 0;

    for (int i = 0; i < NUM_ALUNOS; i++)
    {
        for (int j = 0; j < NUM_PROVAS; j++)
        {
            if (notas[i][j] == 0)
            {
                contador++;
                break;
            }
        }
    }

    printf("Número de alunos com pelo menos uma nota zero: %d\n", contador);
}

int main()
{
    int opcao, verificador = 0;

    while (1)
    {
        printf("\nMENU:\n");
        printf("1 - Preencher as notas\n");
        printf("2 - Preencher automaticamente as notas\n");
        printf("3 - Calcular as médias\n");
        printf("4 - Exibe as notas e médias\n");
        printf("5 - Calcular a média da sala e verificar quantos estão acima da média\n");
        printf("6 - Exibir quantos alunos tiraram ao menos um Zero\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            preencherNotas();
            verificador = 1;
            break;
        case 2:
            preencherNotasAutomatico();
            verificador = 1;
            break;
        case 3:
            if (verificador == 0)
            {
                printf("Execute a primeira ou a segunda opção primeiro\n");
            }
            else
            {
                calcularMediaSala();
                printf("Médias calculadas.\n");
            }
            break;
        case 4:
            if (verificador == 0)
            {
                printf("Execute a primeira ou a segunda opção primeiro\n");
            }
            else
            {
                printf("Notas dos alunos:\n");
                for (int i = 0; i < NUM_ALUNOS; i++)
                {
                    printf("Aluno %d: ", i + 1);
                    for (int j = 0; j < NUM_PROVAS; j++)
                    {
                        printf("%d ", notas[i][j]);
                    }
                    printf("Média: %.2f\n", medias[i]);
                }
            }
            break;
        case 5:
            if (verificador == 0)
            {
                printf("Execute a primeira ou a segunda opção primeiro\n");
            }
            else
            {
                printf("Média da sala: %.2f\n", mediaSala);
                contarAlunosAcimaMedia();
            }
            break;
        case 6:
            if (verificador == 0)
            {
                printf("Execute a primeira ou a segunda opção primeiro\n");
            }
            else
            {
                contarAlunosComNotaZero();
            }
            break;
        case 0:
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}