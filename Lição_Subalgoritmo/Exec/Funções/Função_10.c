#include <stdio.h>
#include <math.h>

//10. Faça uma função que recebe por parâmetro os valores necessários para o cálculo da fórmula de báskara e retorna, 
//também por parâmetro, as suas raízes, caso seja possível calcular. */

int baskara (int a, int b, int c, int *x1, int *x2) {
    int delta = (b * b) - 4 * a * c;
    *x1 = (-b - sqrt(delta)) / (2 * a);
    *x2 = (-b + sqrt(delta)) / (2 * a);
}

int main () {
    int a, b, c, x1, x2;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    baskara(a,b,c,&x1,&x2);
    printf("As raizes sao: %d e %d\n", x1, x2);
    return 0;
}
