 #include <stdio.h>

int main() {
    char nome[100];
    float nota1, nota2, nota3;
    float media;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    do {
        printf("Digite a primeira nota (0 a 10): ");
        scanf("%f", &nota1);
        if (nota1 < 0 || nota1 > 10) {
            printf("Nota invalida! Tente novamente.\n");
        }
    } while (nota1 < 0 || nota1 > 10);

    do {
        printf("Digite a segunda nota (0 a 10): ");
        scanf("%f", &nota2);
        if (nota2 < 0 || nota2 > 10) {
            printf("Nota invalida! Tente novamente.\n");
        }
    } while (nota2 < 0 || nota2 > 10);

    do {
        printf("Digite a terceira nota (0 a 10): ");
        scanf("%f", &nota3);
        if (nota3 < 0 || nota3 > 10) {
            printf("Nota invalida! Tente novamente.\n");
        }
    } while (nota3 < 0 || nota3 > 10);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nAluno: %s", nome);
    printf("Media: %.2f\n", media);

    if (media >= 7) {
        printf("Situacao: Aprovado!\n");
    } else if (media >= 5) {
        printf("Situacao: Recuperacao.\n");
    } else {
        printf("Situacao: Reprovado.\n");
    }

    printf("\nPrograma finalizado. Obrigado por utilizar o sistema!\n");

    return 0;
}