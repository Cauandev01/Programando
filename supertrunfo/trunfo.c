#include <stdio.h>

int main() {

char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pibper;
    printf("=== Bem vindo ao super trunfo - paises ===\n\n");
    printf("No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte.\n\n");
   
    
   
    //Solicitando nome da cidade
    printf("Digite o nome da cidade:\n");
    scanf("%s" , nome);
    //Solicitando o restante dos atributos
    printf("População:\n");
    scanf("%d" , &populacao);
    printf("Área (em km²):\n");
    scanf("%f" , &area);
    printf("Pib (em milhões):\n");
    scanf("%f" , &pib);
    printf("Números de pontos turisticos:\n");
    scanf("%d" , &pontos);
   

    densidade = populacao / area; 

    pibper = (pib * 1000000) / populacao;

// saida de dados

    printf("Nome: %s\n" , nome);
    printf("População: %d\n" , populacao);
    printf("Área: %.2f\n" , area);
    printf("Pib: %.2f\n" , pib);
    printf("Pontos turistico: %d\n" , pontos);
    printf("Densidade populacional: %.3f\n" , densidade);
    printf("Pib per capita %.3f\n", pibper);
    return 0;
}
