#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
// Desafio - Marcos Cavalcanti Costa
// Foi realizada continuação do código do módulo anterior - Implmentando as Estruturas de Decisões.
//Implementado o Menu Interativo(switch), comparação aninhada(if, else, else if)
//Impmentado operadores ternários, menus dinâmicos e comparações entre as cartas
// E ao final exibição do vencedor.
// Exibição dos resultados

#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char nome1[50];
    unsigned int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibCapita1;

    // Dados da Carta 2
    char nome2[50];
    unsigned int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibCapita2;

    // Escolhas de atributos
    int escolha1, escolha2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite o nome do pais: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a populacao: ");
    scanf("%u", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float) populacao1 / area1;
    pibCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2\n");
    printf("Digite o nome do pais: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a populacao: ");
    scanf("%u", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float) populacao2 / area2;
    pibCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n");

    // Menu de escolha para o primeiro pais
    printf("%s, escolha o atributo:\n", nome1);
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("6 - PIB per capita\n");
    printf("Opcao: ");
    scanf("%d", &escolha1);

    // Menu de escolha para o segundo pais
    printf("%s, escolha o atributo:\n", nome2);
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("6 - PIB per capita\n");
    printf("Opcao: ");
    scanf("%d", &escolha2);

    float valor1 = 0, valor2 = 0;
    float soma1 = 0, soma2 = 0;

    // Comparacao da escolha do primeiro pais
    switch (escolha1) {
        case 1:
            printf("\nPopulacao: %u x %u\n", populacao1, populacao2);
            valor1 = populacao1;
            valor2 = populacao2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        case 2:
            printf("\nArea: %.2f x %.2f\n", area1, area2);
            valor1 = area1;
            valor2 = area2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        case 3:
            printf("\nPIB: %.2f x %.2f\n", pib1, pib2);
            valor1 = pib1;
            valor2 = pib2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        case 4:
            printf("\nPontos turisticos: %d x %d\n", pontos1, pontos2);
            valor1 = pontos1;
            valor2 = pontos2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        case 5:
            printf("\nDensidade demografica: %.2f x %.2f\n", densidade1, densidade2);
            valor1 = densidade1;
            valor2 = densidade2;
            // regra invertida: menor vence
            soma1 += (densidade1 < densidade2) ? 1 : 0;
            soma2 += (densidade2 < densidade1) ? 1 : 0;
            break;
        case 6:
            printf("\nPIB per capita: %.2f x %.2f\n", pibCapita1, pibCapita2);
            valor1 = pibCapita1;
            valor2 = pibCapita2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        default:
            printf("Opcao invalida!\n");
    }

    // Comparacao da escolha do segundo pais
    switch (escolha2) {
        case 1:
            printf("\nPopulacao: %u x %u\n", populacao1, populacao2);
            valor1 = populacao1;
            valor2 = populacao2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        case 2:
            printf("\nArea: %.2f x %.2f\n", area1, area2);
            valor1 = area1;
            valor2 = area2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        case 3:
            printf("\nPIB: %.2f x %.2f\n", pib1, pib2);
            valor1 = pib1;
            valor2 = pib2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        case 4:
            printf("\nPontos turisticos: %d x %d\n", pontos1, pontos2);
            valor1 = pontos1;
            valor2 = pontos2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        case 5:
            printf("\nDensidade demografica: %.2f x %.2f\n", densidade1, densidade2);
            valor1 = densidade1;
            valor2 = densidade2;
            soma1 += (densidade1 < densidade2) ? 1 : 0;
            soma2 += (densidade2 < densidade1) ? 1 : 0;
            break;
        case 6:
            printf("\nPIB per capita: %.2f x %.2f\n", pibCapita1, pibCapita2);
            valor1 = pibCapita1;
            valor2 = pibCapita2;
            soma1 += valor1;
            soma2 += valor2;
            break;
        default:
            printf("Opcao invalida!\n");
    }

    // Resultado final
    printf("\nResultado da disputa:\n");
    printf("%s: %.2f pontos\n", nome1, soma1);
    printf("%s: %.2f pontos\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s\n", nome1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
