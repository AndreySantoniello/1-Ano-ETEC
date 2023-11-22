/*Faça uma função que leia um numero não determinado de valores positivos e 
retorne a media aritmetica deles. 
*/

#include <stdio.h>

double mediaAritmetica() {
    int i = 0;
    double med = 0.0, num;

    printf("\nInsira um numero positivo (ou um numero negativo para parar): ");
    scanf("%lf", &num);

    while(num >= 0) {
        med += num;
        i++;
        printf("\nInsira um numero positivo (ou um numero negativo para parar): ");
        scanf("%lf", &num);
    }

    return med / i;
}

int main() {
    printf("\nA media aritmetica e: %.2lf\n", mediaAritmetica());
    return 0;
}
