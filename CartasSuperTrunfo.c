#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado_1[10], estado_2[10]; // estado de A a H
    char codigo_1[10], codigo_2[10]; // código será letra do estado seguido de n° 01 a 04
    char cidade_1[50], cidade_2[50];
    unsigned long int populacao_1, populacao_2; // Alterado o tipo de dados
    int p_turisticos_1, p_turisticos_2;
    float area_1, area_2;
    float pib_1, pib_2;
    float densidade_1, densidade_2;
    float pib_pc_1, pib_pc_2;
    float superpoder_1, superpoder_2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("----------Super Trunfo: Países----------\n"); // Titulo, breve apresentação do jogo
    printf("Vamos Começar!\n");
    printf("Cada jogador deve realizar o cadastro de uma carta.\n\n");
    printf("|Jogador 01|\nCadastrar nova carta\n"); // jogador 01 irá iniciar o jogo cadastrando a carta 01

    printf("Estado (Escolha uma letra de A á H):\n"); // itens que serão cadastrados pelo jogador 01
    scanf("%s", estado_1);

    printf("Código (Letra do Estado seguida de um número 01 a 04): \n");
    scanf("%s", codigo_1);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade_1); //    scanf("%s", cidade_1);

    printf("População: \n");
    scanf("%lu", &populacao_1); // alterado tipo

    printf("Área em km²: \n");
    scanf("%f", &area_1);

    printf("PIB: \n");
    scanf("%f", &pib_1);

    printf("Nº de Pontos Turisticos: \n");
    scanf("%d", &p_turisticos_1);

    // calculos jogador 01
    densidade_1 = (float)populacao_1 / area_1;                                                                   // calculo da densidade populacional: populacao dividido por area
    pib_pc_1 = pib_1 / (float)populacao_1;                                                                       // calculo pib per capita: pib dividido por população
    superpoder_1 = ((float)populacao_1 + area_1 + pib_1 + (float)p_turisticos_1 + pib_pc_1 + (1 / densidade_1)); // calculo superpoder todos atributos numericos convertidos para tipo float

    printf("---------------------------------------------\n"); // mensagem ao jogador 01 que todos os itens foram cadastrados com sucesso
    printf("|Jogador 01|\nCarta 01 Cadastrada com Sucesso!\n");
    printf("---------------------------------------------\n\n");

    printf("|Jogador 02|\nCadastrar nova carta\n"); // Jogador 02 inicia novo cadastro para segunda carta

    printf("Estado (Escolha uma letra de A á H):\n"); // itens que serão cadastrados pelo jogador 02
    scanf("%s", estado_2);

    printf("Código (Letra do Estado seguida de um número 01 a 04): \n");
    scanf("%s", codigo_2);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade_2); //    scanf("%s", cidade_2);

    printf("População: \n");
    scanf("%lu", &populacao_2); // Alterado tipo

    printf("Área em km²: \n");
    scanf("%f", &area_2);

    printf("PIB: \n");
    scanf("%f", &pib_2);

    printf("Nº de Pontos Turisticos: \n");
    scanf("%d", &p_turisticos_2);

    // calculos jogador 02
    densidade_2 = populacao_2 / area_2;                                                                          // calculo da densidade populacional: populacao dividido por area
    pib_pc_2 = pib_2 / populacao_2;                                                                              // calculo pib per capita: pib dividido por area
    superpoder_2 = ((float)populacao_2 + area_2 + pib_2 + (float)p_turisticos_2 + pib_pc_2 + (1 / densidade_2)); // calculo superpoder todos atributos numericos convertidos para tipo float

    printf("---------------------------------------------\n"); // mensagem ao jogador 02 que todos os itens foram cadastrados com sucesso
    printf("|Jogador 02|\nCarta 01 Cadastrada com Sucesso!\n");
    printf("---------------------------------------------\n\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("|Jogador 01|\nCarta 01\n"); // exibe carta 01 do jogador 01
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %lu habitantes\n", populacao_1); // alterado tipo de dados
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", p_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_pc_1);
    printf("Super Poder: %.2f\n\n", superpoder_1); // Adição de novo atributo na carta

    printf("|Jogador 02|\nCarta 01\n"); // exibe carta 01 do jogador 02
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %lu habitantes\n", populacao_2); // Alterado tipo de dados
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", p_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_pc_2);
    printf("Super Poder: %.2f\n\n", superpoder_2); // adição novo atributo na carta

    printf("COMPARAÇÃO DE CARTAS\n"); // adicionado comparação entre cartas/jogadores
    printf("População: Jogador 01 venceu (%d)\n", populacao_1 > populacao_2);
    printf("Área: Jogador 01 venceu (%d)\n", area_1 > area_2);
    printf("PIB: Jogador 01 venceu (%d)\n", pib_1 > pib_2);
    printf("Número de Pontos Turísticos: Jogador 01 venceu (%d)\n", p_turisticos_1 > p_turisticos_2);
    printf("Densidade Populacional: Jogador 01 Venceu (%d)\n", densidade_1 < densidade_2); // vence quem tem densidade populacional menor
    printf("PIB per capita: Jogador 01 venceu (%d)\n", pib_pc_1 > pib_pc_2);
    printf("Super Poder: Jogador 01 venceu (%d)\n", superpoder_1 > superpoder_2);

    return 0; // fim do codigo
}