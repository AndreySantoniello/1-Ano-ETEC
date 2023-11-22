#include <stdio.h>
int main()
{
    int m[2][3], l, c;
    for(l = 0; l < 2; l++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("[%d][%d] = ", l, c);
            scanf("%d", &m[l][c]);
        }
    }
    for(l = 0; l < 2; l++)
    {
        printf("\n|___________|\n|");
        for (c = 0; c < 3; c++)
        {
            printf(" %d |", m[l][c]);
        }
    }
    printf("\n|___________|\n");
}