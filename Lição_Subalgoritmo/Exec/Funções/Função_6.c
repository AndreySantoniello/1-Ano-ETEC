#include <stdio.h>

//Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3*PI*R³).

float calculadora (float raio) {
    raio = raio * raio * raio;
    raio = raio * 4;
    raio = raio / 3;
    raio = raio * 3.14;
    return raio;
}
float main () {
    float raio;

    printf("Digite o numero do raio da sua esfera: ");
    scanf("%f", &raio);

    printf("O volume da sua esfera eh: %.2fPIcm3", calculadora(raio));
}