/*
 * Programa: Super Trunfo de Cidades
 * Descrição: Este programa implementa um jogo de cartas estilo Super Trunfo
 * onde cada carta representa uma cidade com suas características
 */

// Inclui as bibliotecas necessárias
#include <stdio.h>  // Para funções de entrada/saída (printf, scanf)
#include <string.h> // Para manipulação de strings (strlen, strcpy)

/*
 * Função: limpar_buffer
 * Descrição: Limpa o buffer do teclado após cada leitura de dados
 * Parâmetros: Nenhum
 * Retorno: Void
 */
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função principal do programa
int main() {

    // ===== Declaração das variáveis da Carta 1 =====
    
    // Variáveis para informações textuais da cidade 1
    char estado_carta1[3];      // Armazena a sigla do estado com 2 caracteres + terminador nulo (ex: "SP\0")
    char codigo_carta1[6];      // Código de identificação da cidade com 5 caracteres + terminador nulo
    char nome_cidade_carta1[50];// Nome completo da cidade (limitado a 49 caracteres + terminador nulo)
    
    // Variáveis para dados numéricos da cidade 1
    int populacao_carta1;       // População total em número de habitantes
    float area_carta1;          // Área territorial em quilômetros quadrados (km²)
    float pib_carta1;           // Produto Interno Bruto (PIB) em reais (R$)
    int pontos_turisticos1;     // Quantidade de pontos turísticos cadastrados

    // ===== Entrada de dados para a Carta 1 =====

    // Solicita e lê a sigla do estado (ex: SP, RJ)
    printf("Digite o Estado: "); 
    scanf("%s", estado_carta1);  // Usa %s para ler string, sem & pois array já é ponteiro
    limpar_buffer();            // Limpa caracteres residuais do buffer
    printf("\n");               // Pula uma linha para melhor formatação

    // Solicita e lê o código identificador da cidade
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_carta1);  // Lê o código como string para preservar zeros à esquerda
    limpar_buffer();
    printf("\n");

    // Solicita e lê o nome completo da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_carta1);  // Lê o nome como string
    limpar_buffer();
    printf("\n");

    // Solicita e lê a população total da cidade
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_carta1);   // Usa %d para ler número inteiro
    limpar_buffer();
    printf("\n");

    // Solicita e lê a área territorial em km²
    printf("Digite a area da cidade: ");
    scanf("%f", &area_carta1);        // Usa %f para ler número decimal
    limpar_buffer();
    printf("\n");

    // Solicita e lê o PIB da cidade
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib_carta1);         // Lê o PIB como número decimal
    limpar_buffer();
    printf("\n");

    // Solicita e lê a quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turisticos da cidade: ");    
    scanf("%d", &pontos_turisticos1); // Lê quantidade como número inteiro
    limpar_buffer();
    printf("\n\n");                   // Adiciona espaço extra para separar da exibição  // Adiciona uma linha extra antes de mostrar a carta


    // ===== Exibição dos dados da Carta 1 =====
    
    // Imprime todas as informações da primeira carta em formato estruturado
    printf("\nCarta 1\n\n"                    // Título com espaçamento para melhor visualização
           "Estado: %s\n"                      // Exibe a sigla do estado
           "Codigo da cidade: %s\n"            // Exibe o código identificador
           "Nome da cidade: %s\n"              // Exibe o nome completo
           "Populacao: %d\n"                   // Exibe população (valor inteiro)
           "Area: %.2f km²\n"                  // Exibe área com 2 casas decimais e unidade
           "PIB: R$ %.2f\n"                    // Exibe PIB com 2 casas decimais e símbolo da moeda
           "Pontos Turisticos: %d\n\n\n",      // Exibe quantidade de pontos turísticos e adiciona espaço
           estado_carta1,                      // Passa a string do estado
           codigo_carta1,                      // Passa a string do código
           nome_cidade_carta1,                 // Passa a string do nome
           populacao_carta1,                   // Passa o valor da população
           area_carta1,                        // Passa o valor da área
           pib_carta1,                         // Passa o valor do PIB
           pontos_turisticos1);                // Passa a quantidade de pontos turísticos

    // ===== Declaração das variáveis da Carta 2 =====
    
    // Variáveis para informações textuais da cidade 2
    char estado_carta2[3];      // Armazena a sigla do estado com 2 caracteres + terminador nulo (ex: "SP\0")
    char codigo_carta2[6];      // Código de identificação da cidade com 5 caracteres + terminador nulo
    char nome_cidade_carta2[50];// Nome completo da cidade (limitado a 49 caracteres + terminador nulo)
    
    // Variáveis para dados numéricos da cidade 2
    int populacao_carta2;       // População total em número de habitantes
    float area_carta2;          // Área territorial em quilômetros quadrados (km²)
    float pib_carta2;           // Produto Interno Bruto (PIB) em reais (R$)
    int pontos_turisticos2;     // Quantidade de pontos turísticos cadastrados

    // ===== Entrada de dados para a Carta 2 =====

    // Solicita e lê a sigla do estado (ex: SP, RJ)
    printf("Digite o Estado: "); 
    scanf("%s", estado_carta2);  // Usa %s para ler string, sem & pois array já é ponteiro
    limpar_buffer();            // Limpa caracteres residuais do buffer
    printf("\n");               // Pula uma linha para melhor formatação

    // Solicita e lê o código identificador da cidade
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo_carta2);  // Lê o código como string para preservar zeros à esquerda
    limpar_buffer();
    printf("\n");

    // Solicita e lê o nome completo da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_carta2);  // Lê o nome como string
    limpar_buffer();
    printf("\n");

    // Solicita e lê a população total da cidade
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_carta2);   // Usa %d para ler número inteiro
    limpar_buffer();
    printf("\n");

    // Solicita e lê a área territorial em km²
    printf("Digite a area da cidade: ");
    scanf("%f", &area_carta2);        // Usa %f para ler número decimal
    limpar_buffer();
    printf("\n");

    // Solicita e lê o PIB da cidade
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib_carta2);         // Lê o PIB como número decimal
    limpar_buffer();
    printf("\n");

    // Solicita e lê a quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turisticos da cidade: ");  
    scanf("%d", &pontos_turisticos2); // Lê quantidade como número inteiro
    limpar_buffer();
    printf("\n\n");                   // Adiciona espaço extra para separar da exibição  // Adiciona uma linha extra antes de mostrar a carta

    // ===== Exibição dos dados da Carta 2 =====
    
    // Imprime todas as informações da segunda carta em formato estruturado
    printf("\nCarta 2\n\n"                    // Título com espaçamento para melhor visualização
           "Estado: %s\n"                      // Exibe a sigla do estado
           "Codigo da cidade: %s\n"            // Exibe o código identificador
           "Nome da cidade: %s\n"              // Exibe o nome completo
           "Populacao: %d\n"                   // Exibe população (valor inteiro)
           "Area: %.2f km²\n"                  // Exibe área com 2 casas decimais e unidade
           "PIB: R$ %.2f\n"                    // Exibe PIB com 2 casas decimais e símbolo da moeda
           "Pontos Turisticos: %d\n\n\n",      // Exibe quantidade de pontos turísticos e adiciona espaço
           estado_carta2,                      // Passa a string do estado
           codigo_carta2,                      // Passa a string do código
           nome_cidade_carta2,                 // Passa a string do nome
           populacao_carta2,                   // Passa o valor da população
           area_carta2,                        // Passa o valor da área
           pib_carta2,                         // Passa o valor do PIB
           pontos_turisticos2);                // Passa a quantidade de pontos turísticos

    // Finaliza o programa retornando sucesso
    return 0;                   // O valor 0 indica que o programa executou sem erros
}

