#include <stdio.h>
int main()
{
    float matriz[5][3];
    int l, c;
    for(l = 0; l < 5; l++)
    {
        for(c = 0; c < 2; c++)
        {
            scanf("%f",&matriz[l][c]);
            
        }
    }
    for(l = 0; l < 5; l++)
    {
        matriz[l][2] = (matriz[l][0] + matriz[l][1]) / 2;
    }
    for(l = 0; l < 5; l++)
    {
        printf("__________\n|Aluno: %d|\n----------\n_____________________________________\n", l+1);
        printf("|Nota1: %4.1f|", matriz[l][0]);
        printf("Nota2: %4.1f|", matriz[l][1]);
        printf("Media: %4.1f|\n_____________________________________\n", matriz[l][2]);
    }
}