#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarDecrescente(int *a, int *b, int *c) {
    if (*a < *b) {
        trocar(a, b);
    }
    if (*b < *c) {
        trocar(b, c);
    }
    if (*a < *b) {
        trocar(a, b);
    }
}

int main() {
    int num1, num2, num3;

    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    ordenarDecrescente(&num1, &num2, &num3);

    printf("Números em ordem decrescente: %d %d %d\n", num1, num2, num3);

    return 0;
}