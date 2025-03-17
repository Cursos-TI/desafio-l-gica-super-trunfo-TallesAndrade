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
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos1);
    densidade1 = populacao1 / area1;
    
    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20]; 
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    
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
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos2);
    densidade2 = populacao2 / area2;
    
    // Escolha dos atributos para comparação
    int atributo1, atributo2;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &atributo1);
    
    printf("\nEscolha o segundo atributo para comparação:\n");
    switch (atributo1) {
        case 1: printf("2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n"); break;
        case 2: printf("1 - População\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n"); break;
        case 3: printf("1 - População\n2 - Área\n4 - Número de pontos turísticos\n5 - Densidade Demográfica\n"); break;
        case 4: printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n"); break;
        case 5: printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n"); break;
        default: printf("Opção inválida!\n"); return 1;
    }
    
    printf("Digite a opção desejada: ");
    scanf("%d", &atributo2);
    
    // Cálculo dos pontos
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontos1; valor1_carta2 = pontos2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
    }
    
    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontos1; valor2_carta2 = pontos2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
    }
    
    // Comparação
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;
    
    printf("\nResultado:\n");
    printf("%s: %.2f + %.2f = %.2f\n", cidade1, valor1_carta1, valor2_carta1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", cidade2, valor1_carta2, valor2_carta2, soma2);
    
    if (soma1 > soma2) {
        printf("Vencedor: %s\n", cidade1);
    } else if (soma1 < soma2) {
        printf("Vencedor: %s\n", cidade2);
    } else {
        printf("Empate!\n");
    }
    
    return 0;
}
