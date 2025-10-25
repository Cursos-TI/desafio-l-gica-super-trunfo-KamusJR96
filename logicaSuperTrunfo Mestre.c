#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>   

int main(){

    srand(time(NULL));

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
    printf("\nCadastre a Carta 1:\n");
    printf("Digite o Estado:");
    scanf("%s", estado);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:");
    getchar();
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0';

    printf("Digite a população:");
    scanf("%lu", &populacao);

    printf("Digite a área (km²):");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhoes):");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:");
    scanf("%d", &pontosTuristicos);

    // Aqui vamos coletar os dados da cidade 02.
    printf("\nCadastre a Carta 2:\n");
    printf("Digite o Estado:");
    scanf("%s", estado2);

    printf("Digite o código da carta:");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:");
    getchar();
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a população:");
    scanf("%lu", &populacao2);

    printf("Digite a área (km²):");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes):");
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


    int escolha1, escolha2;
    int vencedor_rodada1 = 0; 
    int vencedor_rodada2 = 0;
    int vencedor_final = 0;

    printf("\n____Escolha os atributos para o Duelo:____\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional (menor vence)\n");
    printf("6. PIB per Capita\n");

    printf("\nDigite o atributo para a RODADA 1: ");
    scanf("%d", &escolha1);

    printf("Digite o atributo para a RODADA 2: ");
    scanf("%d", &escolha2);
    
    // --- Rodada 1 ---
    switch (escolha1) {
        case 1: if (populacao > populacao2) vencedor_rodada1 = 1; else if (populacao2 > populacao) vencedor_rodada1 = 2; break;
        case 2: if (area > area2) vencedor_rodada1 = 1; else if (area2 > area) vencedor_rodada1 = 2; break;
        case 3: if (pib > pib2) vencedor_rodada1 = 1; else if (pib2 > pib) vencedor_rodada1 = 2; break;
        case 4: if (pontosTuristicos > pontosTuristicos2) vencedor_rodada1 = 1; else if (pontosTuristicos2 > pontosTuristicos) vencedor_rodada1 = 2; break;
        case 5: if (densidadePopulacional < densidadePopulacional2) vencedor_rodada1 = 1; else if (densidadePopulacional2 < densidadePopulacional) vencedor_rodada1 = 2; break;
        case 6: if (pibPerCapita > pibPerCapita2) vencedor_rodada1 = 1; else if (pibPerCapita2 > pibPerCapita) vencedor_rodada1 = 2; break;
    }

    // --- Rodada 2 ---
    switch (escolha2) {
        case 1: if (populacao > populacao2) vencedor_rodada2 = 1; else if (populacao2 > populacao) vencedor_rodada2 = 2; break;
        case 2: if (area > area2) vencedor_rodada2 = 1; else if (area2 > area) vencedor_rodada2 = 2; break;
        case 3: if (pib > pib2) vencedor_rodada2 = 1; else if (pib2 > pib) vencedor_rodada2 = 2; break;
        case 4: if (pontosTuristicos > pontosTuristicos2) vencedor_rodada2 = 1; else if (pontosTuristicos2 > pontosTuristicos) vencedor_rodada2 = 2; break;
        case 5: if (densidadePopulacional < densidadePopulacional2) vencedor_rodada2 = 1; else if (densidadePopulacional2 < densidadePopulacional) vencedor_rodada2 = 2; break;
        case 6: if (pibPerCapita > pibPerCapita2) vencedor_rodada2 = 1; else if (pibPerCapita2 > pibPerCapita) vencedor_rodada2 = 2; break;
    }

    // --- Lógica de Decisão ---
    // A condição de desempate SÓ acontece se o placar for 1 a 1
    if ((vencedor_rodada1 == 1 && vencedor_rodada2 == 2) || (vencedor_rodada1 == 2 && vencedor_rodada2 == 1)) {
        printf("\nPLACAR EMPATADO! Uma rodada de desempate sera iniciada com um atributo aleatorio.\n");
        int atributoAleatorio;
        do {
            atributoAleatorio = (rand() % 6) + 1;
        } while (atributoAleatorio == escolha1 || atributoAleatorio == escolha2);
        
        printf("Atributo aleatorio escolhido: %d\n", atributoAleatorio);

        switch (atributoAleatorio) {
            case 1: if (populacao > populacao2) vencedor_final = 1; else if (populacao2 > populacao) vencedor_final = 2; break;
            case 2: if (area > area2) vencedor_final = 1; else if (area2 > area) vencedor_final = 2; break;
            case 3: if (pib > pib2) vencedor_final = 1; else if (pib2 > pib) vencedor_final = 2; break;
            case 4: if (pontosTuristicos > pontosTuristicos2) vencedor_final = 1; else if (pontosTuristicos2 > pontosTuristicos) vencedor_final = 2; break;
            case 5: if (densidadePopulacional < densidadePopulacional2) vencedor_final = 1; else if (densidadePopulacional2 < densidadePopulacional) vencedor_final = 2; break;
            case 6: if (pibPerCapita > pibPerCapita2) vencedor_final = 1; else if (pibPerCapita2 > pibPerCapita) vencedor_final = 2; break;
        }

    } else { 
        int placar1 = 0;
        int placar2 = 0;

        if (vencedor_rodada1 == 1) placar1++;
        else if (vencedor_rodada1 == 2) placar2++;

        if (vencedor_rodada2 == 1) placar1++;
        else if (vencedor_rodada2 == 2) placar2++;

        if (placar1 > placar2) vencedor_final = 1;
        else if (placar2 > placar1) vencedor_final = 2;
        else vencedor_final = 0; 
    }

    // --- Resultado Final ---
    printf("\n____Resultado Final do Duelo____\n");
    if (vencedor_final == 1) {
        printf("VENCEDOR: Carta 1 (%s)!\n", nomeCidade);
    } else if (vencedor_final == 2) {
        printf("VENCEDOR: Carta 2 (%s)!\n", nomeCidade2);
    } else {
        printf("RESULTADO: Empate!\n");
    }

    return 0;
}