void num_pla (int num) {
    if (num >= 1 || num <= 2) {
        printf("\nSeu dia de rodizio eh segunda-feira");
    } else if (num >= 3 || num <= 4) {
        printf("\nSeu dia de rodizio eh terca-feira");
    } else if (num >= 5 || num <= 6) {
        printf("\nSeu dia de rodizio eh quarta-feira");
    } else if (num >= 7 || num <= 8) {
        printf("\nSeu dia de rodizio eh quinta-feira");
    } else if (num == 0) {
        printf("\nSeu dia de rodizio eh sexta-feira");
    } else if (num == 9) {
        printf("\nSeu dia de rodizio eh sexta-feira");
    } else {
        printf("\nDigite um numero valido!");
    }
}
int main () {
    int num;

    printf("Digite o ultimo numero da placa do carro: ");
    scanf("%d", &num);

    num_pla (num);
}