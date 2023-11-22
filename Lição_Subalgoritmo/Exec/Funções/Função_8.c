#include <stdio.h>

//Faça uma função que recebe um valor inteiro por parâmetro e verifica se o valor é positivo ou negativo. 
//A função deve retornar um valor booleano. 

int kkk (int v) {
    if (v > 0) {
        return 1;
    } else {
        return 0;
    } 
}

int main () {
    int v;

    printf("Digite um valor positivo ou negativo: ");
    scanf("%d", &v);
    printf("\n\t----> %d <----\n", kkk(v));
}