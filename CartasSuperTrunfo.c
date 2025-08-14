#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Programa de Filipe Castro Freitas

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //carta 1

    char Estado1[50];
    char codigocarta1[50];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int npt1; //número de pontos turísticos

// carta 2

    char Estado2[50];
    char codigocarta2[50];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int npt2; //número de pontos turísticos

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //configuração da primeira carta

    printf("Bem vindo jogador! Vamos configurar a primeira carta: \n");

        printf("\nDigite o nome do estado: \n");
        scanf("%s", &Estado1);

        printf("\nDigite o código da carta: \n");
        scanf("%s", &codigocarta1);

        printf("\nDigite o nome da cidade: \n");
        scanf ("%s", &nomecidade1);

        printf("\nDigite a população: \n");
        scanf ("%d", &populacao1);

        printf("\nDigite a área: \n");
        scanf("%f", &area1);
        
        printf("\nDigite o PIB: \n");
        scanf("%f", &pib1);

        printf("\nDigite o número de pontos turísticos: \n");
        scanf("%d", &npt1);

//configuração da segunda carta

    printf("\nExcelente! Agora configure a segunda carta: \n");

        printf("\nDigite o nome do estado: \n");
        scanf("%s", &Estado2);

        printf("\nDigite o código da carta: \n");
        scanf("%s", &codigocarta2);

        printf("\nDigite o nome da cidade: \n");
        scanf ("%S", &nomecidade2);

        printf("\nDigite a população: \n");
        scanf ("%d", &populacao2);

        printf("\nDigite a área: \n");
        scanf("%f", &area2);
        
        printf("\nDigite o PIB: \n");
        scanf("%f", &pib2);

        printf("\nDigite o número de pontos turísticos: \n");
        scanf("%d", &npt2);
    //carta 1

        printf("\n Primeira carta: \n");
        printf("Código: %s\n", codigocarta1);
        printf("Cidade: %s - Estado: %s\n", nomecidade1, Estado1);
        printf("Número de pontos turísticos: %d\n", npt1);
        printf("Área total: %.2f\n", area1);
        printf("População: %d\n", populacao1);
        printf("PIB: %.2f\n", pib1);

    //carta 2

        printf("\n Segunda carta: \n");
        printf("Código: %s\n", codigocarta2);
        printf("Cidade: %s - Estado: %s\n", nomecidade2, Estado2);
        printf("Número de pontos turísticos: %d\n", npt2);
        printf("Área total: %.2f\n", area2);
        printf("População: %d\n", populacao2);
        printf("PIB: %.2f", pib2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
