#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome1[30], nome2[30];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibper1, pibper2, superPoder1, superPoder2;
    int escolha;

    printf("=== Bem-vindo ao Super Trunfo - Países ===\n\n");

    printf("Digite o nome da primeira cidade:\n");
    scanf(" %[^\n]", nome1); // Corrigido para capturar até o '\n' (nova linha)
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área (em km²):\n");
    scanf("%f", &area1);
    printf("PIB (em milhões):\n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos1);
    getchar();

    printf("\nDigite o nome da segunda cidade:\n");
    scanf(" %[^\n]", nome2); // Corrigido para capturar até o '\n' (nova linha)
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área (em km²):\n");
    scanf("%f", &area2);
    printf("PIB (em milhões):\n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    if (area1 != 0)
        densidade1 = populacao1 / area1;
    else
        densidade1 = 0;

    if (populacao1 != 0)
        pibper1 = pib1 / populacao1;
    else
        pibper1 = 0;

    superPoder1 = populacao1 + pibper1 + pontos1 - densidade1;

    if (area2 != 0)
        densidade2 = populacao2 / area2;
    else
        densidade2 = 0;

    if (populacao2 != 0)
        pibper2 = pib2 / populacao2;
    else
        pibper2 = 0;

    superPoder2 = populacao2 + pibper2 + pontos2 - densidade2;

    printf("\n=== Dados das cidades ===\n");
    printf("%s -> População: %d, Densidade: %.2f, PIB per capita: %.2f, Pontos turísticos: %d, Super Poder: %.2f\n",
           nome1, populacao1, densidade1, pibper1, pontos1, superPoder1);
    printf("%s -> População: %d, Densidade: %.2f, PIB per capita: %.2f, Pontos turísticos: %d, Super Poder: %.2f\n",
           nome2, populacao2, densidade2, pibper2, pontos2, superPoder2);

    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Densidade Populacional (menor vence)\n3 - PIB per capita\n4 - Pontos Turísticos\n5 - Super Poder\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Atributo escolhido: População\n");
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Atributo escolhido: Densidade Populacional\n");
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nome1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo escolhido: PIB per capita\n");
            if (pibper1 > pibper2)
                printf("Vencedor: %s\n", nome1);
            else if (pibper2 > pibper1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", nome1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo escolhido: Super Poder\n");
            if (superPoder1 > superPoder2)
                printf("Vencedor: %s\n", nome1);
            else if (superPoder2 > superPoder1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}
