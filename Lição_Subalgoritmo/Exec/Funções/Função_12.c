/*Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. 
Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, 
para mulheres, peso ideal = 62.1 x alt - 44.7.*/

#include <stdio.h>

float calc_h (float alt) {
    return 72.7 * alt - 58;
}

float calc_m (float alt) {
    return 62.1 * alt - 44.7;
}

int main() {
    float alt, peso;
    int s;

    printf("Digite a sua altura e seu sexo (1 = homem, 0 = mulher): ");
    scanf("%f %d", &alt, &s);

    if (s == 1) {
        peso = calc_h(alt);
    } else if (s == 0) {
        peso = calc_m(alt);
    } else {
        printf("Digite valores validos!!!");
        return 1;
    }
    printf("O seu peso ideal eh %.1f", peso);
    return 0;
}
