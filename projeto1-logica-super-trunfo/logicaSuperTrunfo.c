#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

// Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

int main() {
    
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

//Comparação de atributos entre 2 cartas
/*
    printf("Rodada 1: Comparação entre o número de pontos turisticos \n");
if (PontosTuristicos1 > PontosTuristicos2) {
	printf("Carta 1 venceu! \n");
} else {
	printf("Carta 2 venceu! \n");
}

    printf("\nRodada 2: Comparação entre a densidade populacional \n");
if (DensidadePopulacional1 < DensidadePopulacional2) {
	printf("Carta 1 venceu! \n");
} else {
	printf("Carta 2 venceu! \n");
}
    */


//MENU SWITCH PARA JOGAR
/*
int opcao;

    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando cartas: %s vs %s\n", Nome1, Nome2);

    switch(opcao) {
        case 1: // População
            printf("População: %lu vs %lu\n", Populacao1, Populacao2);
            if (Populacao1 > Populacao2)
                printf("Venceu: %s\n", Nome1);
            else if (Populacao2 > Populacao1)
                printf("Venceu: %s\n", Nome2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f vs %.2f\n", Area1, Area2);
            if (Area1 > Area2)
                printf("Venceu: %s\n", Nome1);
            else if (Area2 > Area1)
                printf("Venceu: %s\n", Nome2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f vs %.2f\n", PIB1, PIB2);
            if (PIB1 > PIB2)
                printf("Venceu: %s\n", Nome1);
            else if (PIB2 > PIB1)
                printf("Venceu: %s\n", Nome2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos: %d vs %d\n", PontosTuristicos1, PontosTuristicos2);
            if (PontosTuristicos1 > PontosTuristicos2)
                printf("Venceu: %s\n", Nome1);
            else if (PontosTuristicos2 > PontosTuristicos1)
                printf("Venceu: %s\n", Nome2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade demográfica (MENOR vence)
            printf("Densidade demográfica: %.2f vs %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2)
                printf("Venceu: %s\n", Nome1);
            else if (DensidadePopulacional2 < DensidadePopulacional1)
                printf("Venceu: %s\n", Nome2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
*/

 // MENU DE ATRIBUTOS
    int escolha1, escolha2;
    int pontos1 = 0, pontos2 = 0;

    printf("\nEscolha dois atributos para comparar (não pode repetir):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (MENOR vence)\n");
    printf("6 - PIB per capita\n");

    printf("Digite a primeira escolha: ");
    scanf("%d", &escolha1);

    printf("Digite a segunda escolha (diferente da primeira): ");
    scanf("%d", &escolha2);

    // Garantir que não sejam iguais
    if (escolha1 == escolha2) {
        printf("Você escolheu o mesmo atributo duas vezes. Reinicie o programa!\n");
        return 0;
    }

    // === PRIMEIRA COMPARAÇÃO ===
    switch (escolha1) {
        case 1:
            printf("\nComparando População:\n");
            printf("%s: %lu x %s: %lu\n", Estado1, Populacao1, Estado2, Populacao2);
            if (Populacao1 > Populacao2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (Populacao2 > Populacao1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 2:
            printf("\nComparando Área:\n");
            printf("%s: %.2f x %s: %.2f\n", Estado1, Area1, Estado2, Area2);
            if (Area1 > Area2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (Area2 > Area1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 3:
            printf("\nComparando PIB:\n");
            printf("%s: %.2f x %s: %.2f\n", Estado1, PIB1, Estado2, PIB2);
            if (PIB1 > PIB2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (PIB2 > PIB1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d x %s: %d\n", Estado1, PontosTuristicos1, Estado2, PontosTuristicos2);
            if (PontosTuristicos1 > PontosTuristicos2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (PontosTuristicos2 > PontosTuristicos1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 5:
            printf("\nComparando Densidade Populacional (MENOR vence):\n");
            printf("%s: %.2f x %s: %.2f\n", Estado1, DensidadePopulacional1, Estado2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (DensidadePopulacional2 < DensidadePopulacional1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 6:
            printf("\nComparando PIB per capita:\n");
            printf("%s: %.2f x %s: %.2f\n", Estado1, PIBpercapita1, Estado2, PIBpercapita2);
            if (PIBpercapita1 > PIBpercapita2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (PIBpercapita2 > PIBpercapita1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;
    }

    // === SEGUNDA COMPARAÇÃO ===
    switch (escolha2) {
        case 1:
            printf("\nComparando População:\n");
            printf("%s: %lu x %s: %lu\n", Estado1, Populacao1, Estado2, Populacao2);
            if (Populacao1 > Populacao2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (Populacao2 > Populacao1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 2:
            printf("\nComparando Área:\n");
            printf("%s: %.2f x %s: %.2f\n", Estado1, Area1, Estado2, Area2);
            if (Area1 > Area2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (Area2 > Area1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 3:
            printf("\nComparando PIB:\n");
            printf("%s: %.2f x %s: %.2f\n", Estado1, PIB1, Estado2, PIB2);
            if (PIB1 > PIB2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (PIB2 > PIB1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d x %s: %d\n", Estado1, PontosTuristicos1, Estado2, PontosTuristicos2);
            if (PontosTuristicos1 > PontosTuristicos2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (PontosTuristicos2 > PontosTuristicos1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 5:
            printf("\nComparando Densidade Populacional (MENOR vence):\n");
            printf("%s: %.2f x %s: %.2f\n", Estado1, DensidadePopulacional1, Estado2, DensidadePopulacional2);
            if (DensidadePopulacional1 < DensidadePopulacional2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (DensidadePopulacional2 < DensidadePopulacional1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;

        case 6:
            printf("\nComparando PIB per capita:\n");
            printf("%s: %.2f x %s: %.2f\n", Estado1, PIBpercapita1, Estado2, PIBpercapita2);
            if (PIBpercapita1 > PIBpercapita2) { printf("%s venceu!\n", Estado1); pontos1++; }
            else if (PIBpercapita2 > PIBpercapita1) { printf("%s venceu!\n", Estado2); pontos2++; }
            else printf("Empate!\n");
            break;
    }

    // RESULTADO FINAL
    printf("\n*** RESULTADO FINAL ***\n");
    if (pontos1 > pontos2) printf("Vencedor: %s (ganhou %d a %d)\n", Estado1, pontos1, pontos2);
    else if (pontos2 > pontos1) printf("Vencedor: %s (ganhou %d a %d)\n", Estado2, pontos2, pontos1);
    else printf("Empate! Cada carta venceu uma vez.\n");

    return 0;
}
