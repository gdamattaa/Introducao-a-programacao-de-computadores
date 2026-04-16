#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // VARIÁVEIS CARTA 1
    int PontosTuristicos1;
    unsigned long int Populacao1;
    float Area1;
    float PIB1;
    float DensidadePopulacional1;
    float PIBpercapita1;
    char Codigo1[4], Nome1[14], Estado1[8];
    float SuperPoder1;

    // VARIÁVEIS CARTA 2
    int PontosTuristicos2;
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    float DensidadePopulacional2;
    float PIBpercapita2;
    char Codigo2[4], Nome2[14], Estado2[8];
    float SuperPoder2;

    printf("*** Cartas SuperTrunfo ***\n\n");

    //CARTA 1
    printf("Carta 1\n");

    printf("Digite a letra correspondente ao Estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", &Nome1);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao1);  //%lu para unsigned long int

    printf("Digite a área da cidade em quilometros quadrados \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos1);

    //Calculo dos atributos derivados adicionados posteriormente
    DensidadePopulacional1 = Populacao1 / Area1;
    PIBpercapita1 = PIB1 / Populacao1;

    //Calculo do Super Poder
    //Superpoder é a soma de todos os atributos numéricos e o inverso da densidade populacional
    SuperPoder1 = (float)Populacao1 + 
                 Area1 + 
                 PIB1 + 
                 (float)PontosTuristicos1 + 
                 PIBpercapita1 + 
                 (1.0f / DensidadePopulacional1);

    //Exibição dos dados abaixo

    printf("\nCARTA 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome: %s\n", Nome1);
    printf("Populacao: %lu\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per capita: %.2f\n", PIBpercapita1);
    printf("O super poder é de: %.2f\n\n", SuperPoder1);

    //CARTA 2
    printf("Carta 2\n");

    printf("Digite a letra correspondente ao Estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigo2);

    printf("Digite o nome da cidade sem espaços: \n");
    scanf("%s", &Nome2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao2);

    printf("Digite a área da cidade em quilometros quadrados \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turisticos da cidade: \n");
    scanf("%d", &PontosTuristicos2);

    //Calculo dos atributos derivados adicionados posteriormente
    DensidadePopulacional2 = Populacao2 / Area2;
    PIBpercapita2 = PIB2 / Populacao2;

    //Calculo do Super Poder
    //Superpoder é a soma de todos os atributos numéricos e o inverso da densidade populacional
    SuperPoder2 = (float)Populacao2 + 
                 Area2 + 
                 PIB2 + 
                 (float)PontosTuristicos2 + 
                 PIBpercapita2 + 
                 (1.0f / DensidadePopulacional2);

    //Exibição dos dados abaixo

    printf("\nCARTA 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome: %s\n", Nome2);
    printf("Populacao: %lu\n", Populacao2);
    printf("Area: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);
    printf("O super poder é de: %.2f\n\n", SuperPoder2);
    
     //Comparações

    printf("=== Resultados das Comparações (1 = Carta 1 vence, 0 = Carta 2 vence) ===\n");
    printf("População: Carta %d venceu \n", Populacao1 > Populacao2);
    printf("Área: Carta %d venceu \n", Area1 > Area2);
    printf("PIB: Carta %d venceu \n", PIB1 > PIB2);
    printf("Pontos Turisticos: Carta %d venceu \n", PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu \n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu \n", PIBpercapita1 > PIBpercapita2);
    printf("Super Poder: Carta %d venceu \n", SuperPoder1 > SuperPoder2);

    return 0;
}