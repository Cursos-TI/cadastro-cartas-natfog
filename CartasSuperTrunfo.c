#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível: Novato // Nível: Aventureiro // Nível: Mestre
// Objetivo: Cadastro das cartas // Calcular Densidade Populacional e PIB per Capita // Comparação das Cartas

int main(){
    printf("CARTAS DO JOGO: \n");
    printf("\n");

// Área para definição das variáveis para armazenar as propriedades das cidades

// -- VARIÁVEIS CARTA 1: --
    int pontosTurísticos1;
    float área1, pib1, densidadePopulacional1, pibperCapita1, superPoder1;
    char estado1, código1[4], cidade1[50];
    unsigned long int população1;

// -- VARIÁVEIS CARTA 2: --
    int pontosTurísticos2;
    float área2, pib2, densidadePopulacional2, pibperCapita2, superPoder2;
    char estado2, código2[4], cidade2[50];
    unsigned long int população2;
   
// Área para entrada de dados

    printf("CARTA 1 \n");

    printf("Digite o estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", código1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%u", &população1);

    printf("Digite a área: \n");
    scanf("%f", &área1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTurísticos1);

// Cálculo Carta 1:
    
    densidadePopulacional1 = (float) população1 / área1;
    pibperCapita1 = (pib1 * 1000000000) / população1; // Converte PIB de bilhões para reais
    superPoder1 = (float) população1 + área1 + pib1 + pontosTurísticos1 + pibperCapita1 + (1.0f / densidadePopulacional1);

//---------------------------------------
    printf("\n");
//---------------------------------------

    printf("CARTA 2 \n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", código2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%u", &população2);

    printf("Digite a área: \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTurísticos2);

// Cálculo Carta 2:
    
    densidadePopulacional2 = (float) população2 / área2;
    pibperCapita2 = (pib2 * 1000000000) / população2; // Converte PIB de bilhões para reais
    superPoder2 = (float) população2 + área2 + pib2 + pontosTurísticos2 + pibperCapita2 + (1.0f / densidadePopulacional2);
 
//----------------------------------
    printf("\n");
//----------------------------------        

// Área para exibição dos dados da cidade

    printf("CARTA 1 \n");

    printf("ESTADO: %c \n", estado1);
    printf("CÓDIGO: %s \n", código1);
    printf("CIDADE: %s \n", cidade1);
    printf("POPULAÇÃO: %u \n", população1);
    printf("ÁREA: %.2f km² \n", área1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("PONTOS TURÍSTICOS: %d \n", pontosTurísticos1);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per CAPITA: %.2f reais\n", pibperCapita1);
    printf("SUPER PODER: %.2f \n", superPoder1);

//------------------------------------
    printf("\n");
//------------------------------------    

    printf("CARTA 2 \n");

    printf("ESTADO: %c \n", estado2);
    printf("CÓDIGO: %s \n", código2);
    printf("CIDADE: %s \n", cidade2);
    printf("POPULAÇÃO: %u \n", população2);
    printf("ÁREA: %.2f km² \n", área2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("PONTOS TURÍSTICOS: %d \n", pontosTurísticos2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per CAPITA: %.2f reais\n", pibperCapita2);
    printf("SUPER PODER: %.2f \n", superPoder2);

//--------------------------------------
    printf("\n");
//--------------------------------------       

    printf("Comparação das Cartas: \n");

    printf("A população da CARTA 1 é maior que a população da CARTA 2? %d\n", população1 > população2);
    printf("A área da CARTA 1 é maior que a área da CARTA 2? %d\n", área1 > área2);
    printf("O PIB da CARTA 1 é maior que o PIB da CARTA 2? %d\n", pib1 > pib2);
    printf("A quantidade de pontos turísticos da CARTA 1 é maior que a quantidade de pontos turísticos da CARTA 2? %d\n", pontosTurísticos1 > pontosTurísticos2);
    printf("A densidade populacional da CARTA 1 é menor que a densidade populacional da CARTA 2? %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf("O PIB per Capita da CARTA 1 é maior que o PIB per Capita da CARTA 2? %d\n", pibperCapita1 > pibperCapita2);
    printf("O super poder da CARTA 1 é maior que o super poder da CARTA 2? %d\n", superPoder1 > superPoder2);


return 0;

}