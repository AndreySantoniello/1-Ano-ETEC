void saudacao (int hora) {
    if (hora < 12) {
        printf("Bom dia!");      
    } else if (hora < 18) {
        printf("Boa tarde");
    } else {
        printf("Boa noite");
    }
}

int main () {
    int hora;

    printf("Quais sao as horas? ");
    scanf("%d", &hora);

    saudacao(hora);
}