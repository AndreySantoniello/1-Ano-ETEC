/*Escreva uma função que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados 
de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo 
é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que 
a soma do comprimento dos outros dois lados. O uma função deve identificar o tipo de triângulo formado observando 
as seguintes definições: 

    Triângulo Equilátero: os comprimentos dos 3 lados são iguais. 
    Triângulo Isósceles: os comprimentos de 2 lados são iguais. 
    Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include <stdio.h>

float tipo_de_triangulo(float x, float y, float z) {
    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Triangulo Equilatero\n");
        } else if (x == y || y == z || z == x) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Os valores fornecidos nao formam um triangulo\n");
    }
}

int main () {
    int x, y, z;

    printf("Digite os valores dos lados do triangulo: ");
    scanf("%d %d %d", &x, &y, &z);
    tipo_de_triangulo(x,y,z);
}