#include <stdio.h>

int main() {
    // Criação das variáveis da carta1
    char estado_carta1;
    char codigo_carta1[4];
    char cidade_carta1[20];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;
    float densidade_populacional_carta1; 
    float pib_per_capita_carta1; 
    double super_poder_carta1;


    // Criação das variáveis da carta2
    char estado_carta2;
    char codigo_carta2[4];
    char cidade_carta2[20];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;
    float densidade_populacional_carta2; 
    float pib_per_capita_carta2; 
    double super_poder_carta2;

    // Interação e solicitação de entrada de valores CARTA 1
    printf("------------Super Trunfo------------\n");
    printf("Carta1: \n");
    printf("Digite o estado (use apenas uma letra [E], [A], [C]...): \n");
    scanf(" %c", &estado_carta1);
    printf("Digite o código (use a letra do estado e adicione um numero de 01 - 04 ex: [A01], [C03]...): \n");
    scanf("%3s", codigo_carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%19s", cidade_carta1);
    printf("Digite a população: \n");
    scanf("%d", &populacao_carta1);
    printf("Digite a area: \n");
    scanf("%f", &area_carta1);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_carta1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf( "%d", &pontos_turisticos_carta1);

    // Calculo densidade populacional e pib per capita da carta1
    densidade_populacional_carta1 = (float) populacao_carta1/area_carta1;
    pib_per_capita_carta1 = (float) pib_carta1/populacao_carta1;

    // Atribuição do super poder carta1
    float densidade_populacional_invetida_carta1 = 1/densidade_populacional_carta1;
    super_poder_carta1 = (double) populacao_carta1 +  area_carta1 + pib_carta1 + (double) pontos_turisticos_carta1 + pib_per_capita_carta1 + densidade_populacional_invetida_carta1;

    // Interação e solicitação de entrada de valores CARTA 2
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");
    printf("carta2: \n");
    printf("Digite o estado (use apenas uma letra [E], [A], [C]...): \n");
    scanf(" %c", &estado_carta2);
    printf("Digite o código (use a letra do estado e adicione um numero de 01 - 04 ex: [A01], [C03]...): \n");
    scanf("%3s", codigo_carta2);
    printf("Digite o nome da cidade: \n");
    scanf("%19s", cidade_carta2);
    printf("Digite a população: \n");
    scanf("%d", &populacao_carta2);
    printf("Digite a area: \n");
    scanf("%f", &area_carta2);
    printf("Digite o PIB: \n");
    scanf("%f", &pib_carta2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos_carta2);
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");

    // Calculo densidade populacional e pib per capita da carta1
    densidade_populacional_carta2 = (float) populacao_carta2/area_carta2;
    pib_per_capita_carta2 = (float) pib_carta2/populacao_carta2;

    // Atribuição do super poder carta2
    float densidade_populacional_invetida_carta2 = 1/densidade_populacional_carta2;
    super_poder_carta2 = (double) populacao_carta2 + (double) area_carta2 + (double) pib_carta2 + pontos_turisticos_carta2 + (double) pib_per_capita_carta2 + (double) densidade_populacional_invetida_carta2;

    // Prift das infos da carta01
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado_carta1 );
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", cidade_carta1);
    printf("População: %d \n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f Bilhões de Reais\n", pib_carta1/1000000000);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta1);
    printf("Super poder: %.2f\n", super_poder_carta1);
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");

    // Prift das infos da carta02
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado_carta2 );
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade_carta2);
    printf("População: %d \n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f Bilhões de Reais \n", pib_carta2/1000000000);
    printf("Pontos Turísticos: %d \n", pontos_turisticos_carta2);
    printf("Densidade Polulacional: %.2f hab/km²\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_carta2);
    printf("Super poder: %.2f \n", super_poder_carta2);
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");

    // Menu interativo - usuario escolhe o atributo para a primeira comparação
    int escolha1, resultado1;
    printf("---- Escolha o atributo para a primeira comporação ---- \n");
    printf("[1] para população. \n");
    printf("[2] para area. \n");
    printf("[3] para PIB. \n");
    printf("[4] para pontos turísticos. \n");
    printf("[5] para densidade populacional. \n");
    printf("[6] para PIB per capita. \n");
    printf("[7] para super poder. \n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha1);
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");

    // Menu interativo - usuario escolhe o atributo para a segunda comparação
    int escolha2, resultado2;
    printf("---- Escolha o atributo para a segunda comporação ---- \n");
    printf("[1] para população. \n");
    printf("[2] para area. \n");
    printf("[3] para PIB. \n");
    printf("[4] para pontos turísticos. \n");
    printf("[5] para densidade populacional. \n");
    printf("[6] para PIB per capita. \n");
    printf("[7] para super poder. \n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha2);
    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");

    // Verificação se as escolhas são iguais
    if (escolha1 == escolha2) {
        printf("As escolhas foram iguais. Escolha opções de comparação diferentes. \n");
        return 0;
    }

    // Primeir laogica de comparação dependendo do caso
    switch (escolha1)
    {
    case 1:
        printf("Comparação entre população: \n");
        printf("População carta 1: %d \n", populacao_carta1);
        printf("População carta 2: %d \n", populacao_carta2);
        resultado1 = populacao_carta1 > populacao_carta2 ? 1 : 0;
        break;
    case 2:
        printf("Comparação entre area: \n");
        printf("Area carta 1: %.2f km² \n", area_carta1);
        printf("Area carta 2: %.2f km² \n", area_carta2);
        resultado1 = area_carta1 > area_carta2 ? 1 : 0;
        break;
    case 3:
        printf("Comparação entre PIB: \n");
        printf("PIB carta 1: %.2f Bilhões de Reais \n", pib_carta1/1000000000);
        printf("PIB carta 2: %.2f Bilhões de Reais \n", pib_carta2/1000000000);
        resultado1 = pib_carta1 > pib_carta2 ? 1 : 0;
        break;
    case 4:
        printf("Comparação entre numero de pontos turísticos: \n");
        printf("Numero da carta 1: %d \n", pontos_turisticos_carta1);
        printf("Numero da carta 2: %d \n", pontos_turisticos_carta2);
        resultado1 = pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 0;
        break;
    case 5:
        printf("Comparação entre densidade populacional: \n");
        printf("Densidade populacional carta 1: %.2f hab/km² \n", densidade_populacional_carta1);
        printf("Densidade populacional carta 2: %.2f hab/km² \n", densidade_populacional_carta2);
        resultado1 = densidade_populacional_carta1 < densidade_populacional_carta1 ? 1 : 0;
        break;
    case 6:
        printf("Comparação entre PIB per capita: \n");
        printf("PIB per capita carta 1: %.2f reais \n", pib_per_capita_carta1);
        printf("PIB per capita carta 2: %.2f reais \n", pib_per_capita_carta2);
        resultado1 = pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 0;
        break;
    case 7:
        printf("Comparação entre super poder: \n");
        printf("Super poder carta 1: %.2f \n", super_poder_carta1);
        printf("Super poder carta 2: %.2f \n", super_poder_carta2);
        resultado1 = super_poder_carta1 > super_poder_carta2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida.");
        break;
    }    

    // Exibição do vencedor (primeira comparação)
    if (resultado1 == 1) {
        printf("Carta 1 venceu. \n");
    } else {
        printf("Carta 2 venceu. \n");
    }
    
    // Segunda logica de comparação dependendo do caso
    switch (escolha2)
    {
    case 1:
        printf("Comparação entre população: \n");
        printf("População carta 1: %d \n", populacao_carta1);
        printf("População carta 2: %d \n", populacao_carta2);
        resultado2 = populacao_carta1 > populacao_carta2 ? 1 : 0;
        break;
    case 2:
        printf("Comparação entre area: \n");
        printf("Area carta 1: %.2f km² \n", area_carta1);
        printf("Area carta 2: %.2f km² \n", area_carta2);
        resultado2 = area_carta1 > area_carta2 ? 1 : 0;
        break;
    case 3:
        printf("Comparação entre PIB: \n");
        printf("PIB carta 1: %.2f Bilhões de Reais \n", pib_carta1/1000000000);
        printf("PIB carta 2: %.2f Bilhões de Reais \n", pib_carta2/1000000000);
        resultado2 = pib_carta1 > pib_carta2 ? 1 : 0;
        break;
    case 4:
        printf("Comparação entre numero de pontos turísticos: \n");
        printf("Numero da carta 1: %d \n", pontos_turisticos_carta1);
        printf("Numero da carta 2: %d \n", pontos_turisticos_carta2);
        resultado2 = pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 0;
        break;
    case 5:
        printf("Comparação entre densidade populacional: \n");
        printf("Densidade populacional carta 1: %.2f hab/km² \n", densidade_populacional_carta1);
        printf("Densidade populacional carta 2: %.2f hab/km² \n", densidade_populacional_carta2);
        resultado2 = densidade_populacional_carta1 < densidade_populacional_carta1 ? 1 : 0;
        break;
    case 6:
        printf("Comparação entre PIB per capita: \n");
        printf("PIB per capita carta 1: %.2f reais \n", pib_per_capita_carta1);
        printf("PIB per capita carta 2: %.2f reais \n", pib_per_capita_carta2);
        resultado2 = pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 0;
        break;
    case 7:
        printf("Comparação entre super poder: \n");
        printf("Super poder carta 1: %.2f \n", super_poder_carta1);
        printf("Super poder carta 2: %.2f \n", super_poder_carta2);
        resultado2 = super_poder_carta1 > super_poder_carta2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida.");
        break;
    }    

    // Exibição do vencedor (segunda comparação)
    if (resultado2 == 1) {
        printf("Carta 1 venceu. \n");
    } else {
        printf("Carta 2 venceu. \n");
    }

    printf("------------------------------------------------------\n");
    printf("------------------------------------------------------\n");

    // Exibição vencedor geral
    if (resultado1 == 1 && resultado2 == 1) {
        printf("A carta 1 venceu essa rodada. \n");
    } else if (resultado1 != resultado2) {
        printf("Empate. As cartas empataram. \n");
    } else {
        printf("A carta 2 venceu essa rodada. \n");
    }

    return 0;
}