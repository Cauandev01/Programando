#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome1[30], nome2[30];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibper1, pibper2, superPoder1, superPoder2;
    int escolha1, escolha2, soma1, soma2;

    printf("=== Super Trunfo - Países ===\n\n");

    // Entrada para o primeiro país
    printf("Digite o nome da primeira cidade:\n");
    getchar(); // Limpar o buffer de entrada
    scanf("%s", nome1);
    printf("População:\n");
    scanf("%d", &populacao1);
    printf("Área (em km²):\n");
    scanf("%f", &area1);
    printf("PIB (em milhões):\n");
    scanf("%f", &pib1);
    printf("Pontos turísticos:\n");
    scanf("%d", &pontos1);

    // Separador estético
    printf("\n====================\n\n");

    // Entrada para o segundo país
    printf("Digite o nome da segunda cidade:\n");
    getchar(); // Limpar o buffer de entrada
    scanf("%s", nome2);
    printf("População:\n");
    scanf("%d", &populacao2);
    printf("Área (em km²):\n");
    scanf("%f", &area2);
    printf("PIB (em milhões):\n");
    scanf("%f", &pib2);
    printf("Pontos turísticos:\n");
    scanf("%d", &pontos2);

    // Calculando atributos
    densidade1 = (area1 != 0) ? populacao1 / area1 : 0;
    pibper1 = (populacao1 != 0) ? pib1 / populacao1 : 0;
    superPoder1 = populacao1 + pibper1 + pontos1 - densidade1;

    densidade2 = (area2 != 0) ? populacao2 / area2 : 0;
    pibper2 = (populacao2 != 0) ? pib2 / populacao2 : 0;
    superPoder2 = populacao2 + pibper2 + pontos2 - densidade2;

    // Exibição dos dados
    printf("\n=== Dados das Cidades ===\n\n");
    printf("%s\n", nome1);
    printf("População: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\nPontos turísticos: %d\nSuper Poder: %.2f\n", 
           populacao1, densidade1, pibper1, pontos1, superPoder1);
    printf("\n====================\n\n");
    printf("%s\n", nome2);
    printf("População: %d\nDensidade Populacional: %.2f\nPIB per capita: %.2f\nPontos turísticos: %d\nSuper Poder: %.2f\n", 
           populacao2, densidade2, pibper2, pontos2, superPoder2);
    
    // Espaço para escolher atributos
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n2 - Densidade Populacional (menor vence)\n3 - PIB per capita\n4 - Pontos Turísticos\n5 - Super Poder\n");
    scanf("%d", &escolha1);

    // Espaço para escolher o segundo atributo
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    scanf("%d", &escolha2);

    // Inicializando soma dos atributos
    soma1 = 0;
    soma2 = 0;

    // Comparação do primeiro atributo
    switch (escolha1) {
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            soma1 += (densidade1 < densidade2) ? 1 : 0;
            soma2 += (densidade2 < densidade1) ? 1 : 0;
            break;
        case 3:
            soma1 += pibper1;
            soma2 += pibper2;
            break;
        case 4:
            soma1 += pontos1;
            soma2 += pontos2;
            break;
        case 5:
            soma1 += superPoder1;
            soma2 += superPoder2;
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    // Comparação do segundo atributo
    switch (escolha2) {
        case 1:
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2:
            soma1 += (densidade1 < densidade2) ? 1 : 0;
            soma2 += (densidade2 < densidade1) ? 1 : 0;
            break;
        case 3:
            soma1 += pibper1;
            soma2 += pibper2;
            break;
        case 4:
            soma1 += pontos1;
            soma2 += pontos2;
            break;
        case 5:
            soma1 += superPoder1;
            soma2 += superPoder2;
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    // Exibindo os resultados finais
    printf("\nSoma dos atributos:\n%s: %d\n%s: %d\n", nome1, soma1, nome2, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", nome1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", nome2);
    else
        printf("Empate!\n");

    return 0;
}
