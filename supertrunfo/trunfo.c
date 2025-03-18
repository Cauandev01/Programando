#include <stdio.h>

int main() {
    // Declaração das variáveis para dois países
    char nome1[20], nome2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibper1, pibper2, superPoder1, superPoder2;
    int escolha;

    printf("=== Bem vindo ao Super Trunfo - Paises ===\n\n");

    
    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", nome1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área (em km²):\n");
    scanf("%f", &area1);
    printf("PIB (em milhões):\n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos1);

    // Captura de dados para o segundo país
    printf("\nDigite o nome da segunda cidade:\n");
    scanf("%s", nome2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área (em km²):\n");
    scanf("%f", &area2);
    printf("PIB (em milhões):\n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontos2);

    // Cálculo dos atributos
    densidade1 = populacao1 / area1;
    pibper1 = (pib1 * 1000000) / populacao1;
    superPoder1 = populacao1 + pibper1 + pontos1 - densidade1;

    densidade2 = populacao2 / area2;
    pibper2 = (pib2 * 1000000) / populacao2;
    superPoder2 = populacao2 + pibper2 + pontos2 - densidade2;

    // Exibição dos dados
    printf("\n=== Dados dos países ===\n");
    printf("%s -> População: %d, Densidade: %.2f, PIB per capita: %.2f, Pontos turísticos: %d, Super Poder: %.2f\n",
           nome1, populacao1, densidade1, pibper1, pontos1, superPoder1);
    printf("%s -> População: %d, Densidade: %.2f, PIB per capita: %.2f, Pontos turísticos: %d, Super Poder: %.2f\n",
           nome2, populacao2, densidade2, pibper2, pontos2, superPoder2);

    // Escolha do atributo para comparar
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Densidade Populacional (menor vence)\n3 - PIB per capita\n4 - Pontos Turísticos\n5 - Super Poder\n");
    scanf("%d", &escolha);

    // Lógica de comparação
    switch (escolha) {
        case 1:
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
            break;
        case 2:
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
            break;
        case 3:
            if (pibper1 > pibper2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
            break;
        case 4:
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
            break;
        case 5:
            if (superPoder1 > superPoder2)
                printf("Vencedor: %s\n", nome1);
            else
                printf("Vencedor: %s\n", nome2);
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
