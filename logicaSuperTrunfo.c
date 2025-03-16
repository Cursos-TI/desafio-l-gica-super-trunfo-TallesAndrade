#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4]; 
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    
    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite uma letra de 'A' até 'H':\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade (ou país):\n");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20]; 
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    
    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite uma letra de 'A' até 'H':\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade (ou país):\n");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área em km²:\n");
    scanf("%f", &area2);
    printf("Digite o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos2);
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Menu interativo para escolha do atributo de comparação
    int opcao;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - Nome do país (apenas exibição)\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade Demográfica (menor vence)\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // Comparação baseada na opção escolhida
    switch (opcao) {
        case 1:
            // Exibe apenas os nomes
            printf("\nAtributo escolhido: Nome do país\n");
            printf("Carta 1: %s\n", cidade1);
            printf("Carta 2: %s\n", cidade2);
            printf("Comparação de nome não realizada, pois é apenas para exibição.\n");
            break;
        case 2:
            printf("\nAtributo escolhido: População\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3:
            printf("\nAtributo escolhido: Área\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area1 < area2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4:
            printf("\nAtributo escolhido: PIB\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib1 < pib2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5:
            printf("\nAtributo escolhido: Número de pontos turísticos\n");
            printf("Carta 1 - %s: %d pontos\n", cidade1, pontos1);
            printf("Carta 2 - %s: %d pontos\n", cidade2, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos1 < pontos2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 6:
            printf("\nAtributo escolhido: Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f pessoas/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f pessoas/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade1 > densidade2) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("\nOpção inválida! Por favor, execute o programa novamente e escolha uma opção válida.\n");
    }
    
    return 0;
}
