#include <stdio.h>
#include <string.h>

int main(){

    // Apresentação do projeto.

printf("Desafio de Super Trunfo em C.\nRepo criada por Gabriel de Jesus\nSeja Bem vindo.\n");

    // Declaração de variaveis.
    // carta 01
    char codigoCarta[5];
    char estado[50];
    char nomeCidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superpoder_carta1;

    // carta 02
    char codigoCarta2[5];
    char estado2[50];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superpoder_carta2;


    // Aqui vamos coletar os dados da cidade 01.
    printf("Cadastre a Carta 1:\n");
    printf("Digite o Estado:"); 
    scanf("%s", estado);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:");
    getchar();                                    // Limpa o buffer antes de fgets
    fgets(nomeCidade, sizeof(nomeCidade), stdin); // Usa fgets para strings com espaço
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0'; // Remove a quebra de linha do nome

    printf("Digite a população:");
    scanf("%lu", &populacao);

    printf("Digite a área (km²):");
    scanf("%f", &area);

    printf("Digite o PIB:");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos);

    // Aqui vamos coletar os dados da cidade 02.
    printf("Cadastre a Carta 2:\n");
    printf("Digite o Estado:"); 
    scanf("%s", estado2);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:");
    getchar();                                      // Limpa o buffer antes de fgets
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); // Usa fgets para strings com espaço
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; // Remove a quebra de linha do nome

    printf("Digite a população:");
    scanf("%lu", &populacao2);

    printf("Digite a área (km²):");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos2);

    // Confirmação após carta ser cadastrada    
    printf("\n_____Cartas cadastradas com sucesso!____\n"); 


    densidadePopulacional = (float) populacao / area;
    pibPerCapita = (pib * 1000000000) / (float) populacao;
    // Novos Calculos para carta 02.
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;

    // carta 01.
    superpoder_carta1 = (float) populacao + area + (pib * 1000000000) + (float) pontosTuristicos + pibPerCapita + (1 / densidadePopulacional);
    
    // carta 02.
    superpoder_carta2 = (float) populacao2 + area2 + (pib2 * 1000000000) + (float) pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);
    
    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    printf("Super Poder: %.2f\n\n", superpoder_carta1);
    printf("\n___________________________________\n");

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n\n", superpoder_carta2);

    // Comparação das cartas.
    // Vou utilizar If Else para definir o vencedor.

    printf("\n____Comparacao de Cartas____\n");

    if (populacao > populacao2)
    printf("Populacao: Carta 1 venceu (1)\n");
    else
    printf("Populacao: Carta 2 venceu (0)\n");

    if (area > area2)
    printf("Area: Carta 1 venceu (1)\n");
    else
    printf("Area: Carta 2 venceu (0)\n");

    if (pib > pib2)
    printf("PIB: Carta 1 venceu (1)\n");
    else
    printf("PIB: Carta 2 venceu (0)\n");

    if (pontosTuristicos > pontosTuristicos2)
    printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    else
    printf("Pontos Turisticos: Carta 2 venceu (0)\n");

    if (densidadePopulacional < densidadePopulacional2)
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
    else
    printf("Densidade Populacional: Carta 2 venceu (0)\n");

    if (pibPerCapita > pibPerCapita2)
    printf("PIB per Capita: Carta 1 venceu (1)\n");
    else
    printf("PIB per Capita: Carta 2 venceu (0)\n");

    if (superpoder_carta1 > superpoder_carta2)
    printf("Super Poder: Carta 1 venceu (1)\n");
    else
    printf("Super Poder: Carta 2 venceu (0)\n");

// Aqui é o fim.
    return 0;

}