#include <stdio.h>

//Dada a quantidade de anos de vida retornar os meses de vida.

int conversor (int ano) {
    return ano * 12;
}

int main () {
    int ano;

    printf("Digite sua idade e descubra quantos messes de vida vc tem: ");
    scanf("%d", &ano);

    printf("O numero de messes de vida que vc tem eh: %d", conversor(ano));
}