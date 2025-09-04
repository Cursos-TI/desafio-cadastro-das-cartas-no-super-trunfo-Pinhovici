#include <stdio.h>

int main (){

    // Carta 1
    char Estado1[50];
    char codigocarta1[50];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int npt1; // número de pontos turísticos
    float densidade1, pibcapita1;
    float superpoder1;

    // Carta 2
    char Estado2[50];
    char codigocarta2[50];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int npt2; // número de pontos turísticos
    float densidade2, pibcapita2;
    float superpoder2;

    // Comparações
    int resulpopu, resularea, resulpib, resulnpt,
        resuldensi, resulpibcap, resuldensidem, resulsuperpoder;

    // Configuração da primeira carta
    printf("Bem-vindo jogador! Vamos configurar a primeira carta:\n");

    printf("\nDigite o nome do estado: ");
    scanf("%49s", Estado1);

    printf("\nDigite o código da carta: ");
    scanf("%49s", codigocarta1);

    printf("\nDigite o nome da cidade: ");
    scanf("%49s", nomecidade1);

    printf("\nDigite a população: ");
    scanf("%d", &populacao1);

    printf("\nDigite a área (km²): ");
    scanf("%f", &area1);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib1);

    printf("\nDigite o número de pontos turísticos: ");
    scanf("%d", &npt1);

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    pibcapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + npt1 + pibcapita1 + inversodensi1;

    // Configuração da segunda carta
    printf("\nExcelente! Agora configure a segunda carta:\n");

    printf("\nDigite o nome do estado: ");
    scanf("%49s", Estado2);

    printf("\nDigite o código da carta: ");
    scanf("%49s", codigocarta2);

    printf("\nDigite o nome da cidade: ");
    scanf("%49s", nomecidade2);

    printf("\nDigite a população: ");
    scanf("%d", &populacao2);

    printf("\nDigite a área (km²): ");
    scanf("%f", &area2);

    printf("\nDigite o PIB: ");
    scanf("%f", &pib2);

    printf("\nDigite o número de pontos turísticos: ");
    scanf("%d", &npt2);

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    pibcapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + npt2 + pibcapita2 + inversodensi2;

    // Comparações
    resularea      = area1 > area2;
    resuldensi     = densidade1 < densidade2;
    resulnpt       = npt1 > npt2;
    resulpib       = pib1 > pib2;
    resulpibcap    = pibcapita1 > pibcapita2;
    resulpopu      = populacao1 > populacao2;
    resuldensidem  = inversodensi1 > inversodensi2; //inverso da densidade
    resulsuperpoder= superpoder1 > superpoder2;

    // Exibição das cartas
    printf("\n===== Primeira carta =====\n");
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s - Estado: %s\n", nomecidade1, Estado1);
    printf("Número de pontos turísticos: %d\n", npt1);
    printf("Área total: %.2f km²\n", area1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade populacional: %.3f hab/km²\n", densidade1);
    printf("PIB per capita: %.3f\n", pibcapita1);
    printf("Super Poder: %.3f\n", superpoder1);

    printf("\n===== Segunda carta =====\n");
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s - Estado: %s\n", nomecidade2, Estado2);
    printf("Número de pontos turísticos: %d\n", npt2);
    printf("Área total: %.2f km²\n", area2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade populacional: %.3f hab/km²\n", densidade2);
    printf("PIB per capita: %.3f\n", pibcapita2);
    printf("Super Poder: %.3f\n", superpoder2);

    // Resultado final (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    printf("\n===== Resultados =====\n");
    printf("População: %d\n", resulpopu);
    printf("Área: %d\n", resularea);
    printf("PIB: %d\n", resulpib);
    printf("Nº de pontos turísticos: %d\n", resulnpt);
    printf("PIB per capita: %d\n", resulpibcap);
    printf("Densidade populacional: %d\n", resuldensidem); //menor é melhor
    printf("Super Poder total: %d\n", resulsuperpoder);

    return 0;

}
