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
    printf("Digite o nome da cidade:\n");
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
    printf("Digite o nome da cidade:\n");
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

    //Comparação das cartas utilizando o atributo população

    printf("Comparação de cartas (Atributo: População):\n");

    printf("Carta 1 - %s: %lu \n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu \n", cidade2, populacao2);

    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n",cidade1);

    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n",cidade2);
    }

    return 0;
}