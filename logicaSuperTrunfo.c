#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
// Desafio - Marcos Cavalcanti Costa
// Foi realizada continuação do código do módulo anterior - Implmentando as Estruturas de Decisões.
//Implementado o Menu Interativo(switch), comparação aninhada(if, else, else if)
// Exibição dos resultados

#include <stdio.h>
/*
Carta 1:
País: A
Código: A01
Nome do País: Coreia do Sul
População: 12.325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome do País: Coreia do Norte
População: 6.748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30    
*/
int main() {
    // Declaração das variáveis da Carta 1
    char pais1[3];
    char codigo1[10];
    char nomePais1[50];
    unsigned int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPercapita1;
   //float superPoder1;

    // Declaração das variáveis da Carta 2
    char pais2[3];
    char codigo2[10];
    char nomePais2[50];
    unsigned int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPercapita2;
    //float superPoder2; 

    int opcao;  


    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1\n");

    printf("Digite o país (letra de A a H): ");
    scanf("%s", pais1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nomePais1);  // Lê até o fim da linha (inclusive espaços)

    printf("Digite a população: ");
    scanf("%u", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    
     // forçada a saída em float, para melhor exatidão no resultado
    densidadePopulacional1 = (float) populacao1 / area1;
    // realizada a conversão do pib em bilhões, para ter um resultado mais exato.
    pibPercapita1 = (pib1 * 1000000000) / populacao1;

     printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2\n");

    printf("Digite o país (letra de A a H): ");
    scanf(" %s", &pais2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nomePais2);

    printf("Digite a população: ");
    scanf("%u", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // forçada a saída em float, para melhor exatidão no resultado
    densidadePopulacional2 = (float) populacao2 / area2;
    // realizada a conversão do pib em bilhões, para ter um resultado mais exato.
    pibPercapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n");

    /* 
    Exibição das cartas cadastradas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPercapita1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPercapita2);

    Calculo dos superpoderes.
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1 + (1.0f / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + (1.0f / densidadePopulacional2);
    */

    //implementação do menu
    printf("Disputa de Atributos:\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional");
    printf("6 - Pib per Capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Disputa %s x %s\n", nomePais1, nomePais2);

    //switch

    switch(opcao){
        case 1:
            printf("população %u x %u: ", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("%s Venceu!: \n ", nomePais1);
            else if (populacao2 > populacao1)
                printf("%s Venceu!\n ", nomePais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Area: %.2f x %.2f\n: ", area1, area2);
            if (area1 > area2)
                printf("%s Venceu!\n ", nomePais1);
            else if (area2 > area1)
                printf("%s Venceu!\n ", nomePais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Pib: %.2f x %.2f\n: ", pib1, pib2);
            if (pib1 > pib2)
                printf("%s Venceu!\n ", nomePais1);
            else if (pib2 > pib1)
                printf("%s Venceu!\n ", nomePais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d x %d\n: ", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("%s Venceu!\n ", nomePais1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("%s Venceu!\n ", nomePais2);
            else
                printf("Empate!\n");
            break;
        
        case 5:
            printf("Densidade Populacional: %.2f x %.2f\n: ", densidadePopulacional1, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("%s Venceu!\n ", nomePais1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("%s Venceu!\n ", nomePais2);
            else 
                printf("Empate!\n");
            break;
        
        case 6:
            printf("Pib per Capita: %.2f x %2.f\n: ", pibPercapita1, pibPercapita2);
            if (pibPercapita1 > pibPercapita2)
                printf ("%s Venceu\n", nomePais1);
            else if (pibPercapita2 > pibPercapita1)
                printf("%s Venceu!\n", nomePais2);
            else 
                printf("Empate!\n"):
            break;
        default:
        printf("ERROR\n");

    }

/*
    if (populacao1 > populacao2){
        printf("Populaçao da Carta 1 Venceu!\n");
    }else{
        printf("Vencedora é a população da Carta 2\n");
    }
    
    if (area1 > area2){
         printf("Área da Carta 1 venceu!\n");
    }else{
        printf("A grande vencedora é Área da Carta 2\n");
    }

     if (pib1 > pib2){
        printf("PIB da Carta 1 é o vencedor\n");
    }else{
        printf("O grande vencedor é o PIB da Carta 2\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos Turísticos da Carta 1 venceram!\n");
    }else{
        printf("Os vencedores foram os pontos turíticos da Carta 2!!\n");
    }
    if (densidadePopulacional1 < densidadePopulacional2){ // menor densidade vence
        printf("Densidade Populacional da Carta 1 é a Vencedora!!\n");
    }else{
        printf("A grande vencedora é a Densidade Populacional da Carta 2!!\n");
    }
    if (pibPercapita1 > pibPercapita2){
        printf("Pib Percapita da Carta 1 é o VENCEDOR!!\n");
    }else{
        printf("O Grande VECEDOR é o PIB Percapita da Carta 2!!\n");
        
    }
  //  resultado = (superPoder1 > superPoder2) ? 1 : 2;
  //  printf("Super Poder: Carta %d venceu\n", resultado);
*/
    return 0;
}
