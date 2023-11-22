#include <stdio.h>

//Dada a quantidade de dias de vida, 
//informar quantos anos, meses e dias a pessoa tem de vida.

int conversor_mes (int dias) {
    return dias / 12;
}
int conversor_ano (int dias) {
    return dias / 365;
}

int main () {
    int dias;

    printf("Digite a quantidade de dias de vida e descubra quantos anos, messes e dias de vida vc tem: ");
    scanf("%d", &dias);

    printf("O numero de anos de vida que vc tem eh: %d", conversor_ano(dias));
    printf("\nO numero de messes de vida que vc tem eh: %d", conversor_mes(dias));
    printf("\nO numero de dias de vida que vc tem eh: %d", dias);
}