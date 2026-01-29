#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível: Novato
// Objetivo: Cadastro das cartas

int main(){
    printf("CARTAS DO JOGO: \n");
    printf("\n");

// Área para definição das variáveis para armazenar as propriedades das cidades

// -- VARIÁVEIS CARTA 1: --
    int população1, pontosTurísticos1;
    float área1, pib1;
    char estado1, código1[4], cidade1[50];

// -- VARIÁVEIS CARTA 2: --
    int população2, pontosTurísticos2;
    float área2, pib2;
    char estado2, código2[4], cidade2[50];
   
// Área para entrada de dados

    printf("CARTA 1 \n");

    printf("Digite o estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", código1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &população1);

    printf("Digite a área: \n");
    scanf("%f", &área1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTurísticos1);

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
    scanf("%d", &população2);

    printf("Digite a área: \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontosTurísticos2);
 
//----------------------------------
    printf("\n");
//----------------------------------        

// Área para exibição dos dados da cidade

    printf("CARTA 1 \n");

    printf("ESTADO: %c \n", estado1);
    printf("CÓDIGO: %s \n", código1);
    printf("CIDADE: %s \n", cidade1);
    printf("POPULAÇÃO: %d \n", população1);
    printf("ÁREA: %.2f km² \n", área1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("PONTOS TURÍSTICOS: %d \n", pontosTurísticos1);

//------------------------------------
    printf("\n");
//------------------------------------    

    printf("CARTA 2 \n");

    printf("ESTADO: %c \n", estado2);
    printf("CÓDIGO: %s \n", código2);
    printf("CIDADE: %s \n", cidade2);
    printf("POPULAÇÃO: %d \n", população2);
    printf("ÁREA: %.2f km² \n", área2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("PONTOS TURÍSTICOS: %d \n", pontosTurísticos2);

return 0;

}