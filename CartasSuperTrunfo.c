#include <stdio.h>
 
 int main() {
    //Abixo são declaradas as cartas 1 e 2
 
    char carta1[50],  carta2[50];//Cartas 
    char estado1[50], estado2[50];//Estados
    char codigo1[50], codigo2[50];//Códigos
    char cidade1[50], cidade2[50];//Cidades  
    unsigned int populacao1 = 1500000000; unsigned int populacao2=1500000000;//Populações
    float area1 = 30;   float area2=32;//Areas  
    float  PIB1 = 10; float  PIB2=45;//PIBs
    int Pontos_turisticos1 = 10; int pontos_turisticos2=12;//Pontos turísticos
    float densidade1=1;  float densidade2=2;//Densidades populacionais
    float PIB_per_Capita1=12;float PIB_per_capita2=13;//PIBs per capita 
    double Super_Poder1=15;double Super_Poder2=6;//Super Poderes
    float inverso_densidade1=1;float inverso_densidade2=3;//Inverso da densidade populacional
 
    //Abaixo é declarado o cadastro da carta 1
 
    printf("***Primeira Carta***\n");//Frase de inicio da carta 1
 
 
    printf("Digite o Estado 1: \n"); // Pergunta o estado 1
    scanf(" %s", estado1); // Caixa de entrada do estado 1
 
    printf("Digite o codigo 1: \n"); // Pergunta o código 1
    scanf(" %s", codigo1); // Caixa de entrada do código 1
 
    printf("Digite a Cidade 1: \n"); // Pergunta a cidade 1
    scanf(" %s", cidade1); // Caixa de entrada da cidade 1
 
    printf("Digite a populacao 1: \n"); // Pergunta população 1
    scanf(" %u", &populacao1); // Caixa de entrada da população 1
 
    printf("Digite a area 1: \n"); // Pergunta área 1
    scanf(" %f", &area1); // Caixa de entrada da área 1
 
    printf("Digite o PIB 1: \n"); // Pergunta o PIB 1
    scanf(" %f", &PIB1); // Caixa de entrada do PIB 1
 
    printf("digite o numero de pontos turisticos 1: \n"); // Pergunta o número de pontos turísticos 1
    scanf(" %d", &Pontos_turisticos1); // Caixa de entrada de pontos turísticos 1
 
    //Abaixo são feitos os cálculos para carta 1 
 
    densidade1=(float)populacao1/area1;//cálculo da densidade populacional
    inverso_densidade1=(densidade1> 0) ? (1/densidade1): 0;//cálculo do inverso da densidade populacional
    PIB_per_Capita1=(unsigned int)PIB1/populacao1;//cálculo do PIB per capita
    Super_Poder1=(double)PIB1+populacao1+area1+PIB_per_Capita1+inverso_densidade1+Pontos_turisticos1;//cálculo do super poder
 
 
    //Abaixo é declarado o cadastro da carta 2
 
    printf("***Segunda Carta***\n");//Frase de inicio da carta 2
 
 
    printf("Digite o Estado 2: \n"); // Pergunta o estado 2
    scanf(" %s", estado2); // Caixa de entrada do estado 2
 
    printf("Digite o Codigo 2: \n"); // Pergunta o código 2
    scanf(" %s", codigo2); // Caixa de entrada do código 2
 
    printf("Digite a Cidade 2: \n"); // Pergunta a cidade 2
    scanf(" %s", cidade2); // Caixa de entrada da cidade 2
 
    printf("Digite a populacao 2: \n"); // Pergunta população 2
    scanf(" %u", &populacao2); // Caixa de entrada da população 2
 
    printf("Digite a area 2: \n"); // Pergunta área 2
    scanf(" %f", &area2); // Caixa de entrada da área 2
 
    printf("Digite o PIB 2: \n"); // Pergunta o PIB 2
    scanf(" %f", &PIB2); // Caixa de entrada do PIB 2
 
    printf("Digite o numero de pontos turisticos 2: \n"); // Pergunta o número de pontos turísticos 2
    scanf(" %d", &pontos_turisticos2); // Caixa de entrada de pontos turísticos 2
 
    //Abaixo são feitos os cálculos para carta 2
    densidade2=(float)populacao2/area2;//cálculo da densidade populacional
    inverso_densidade2=(densidade2 > 0) ? (1/densidade2): 0;//cálculo do inverso da densidade populacional
    PIB_per_capita2=(unsigned int )PIB2/populacao2;//cálculo do PIB per capita
    Super_Poder2=(double)PIB2+populacao2+area2+PIB_per_capita2+inverso_densidade2+pontos_turisticos2;//cálculo do super poder
 
    //Abaixo são impressas as comparações das cartas 1 e 2
 
    printf("***Comparacao das cartas***\n");//Frase de inicio da comparação das cartas
    
   
    if(populacao1> populacao2){
        printf("A populacao 1 venceu\n");
    } else if(populacao1 < populacao2){
        printf("A Populacao 2 venceu\n");
    } else {
        printf("As populacoes sao iguais\n");
    }
    if(area1> area2){
        printf("A area 1 venceu\n");
    } else if(area1 < area2){
        printf("A Area 2 venceu\n");
    } else {
        printf("As areas sao iguais\n");
    }
    if(PIB1> PIB2){
        printf("O PIB 1 venceu\n");
    } else if(PIB1 < PIB2){
        printf("O PIB 2 venceu\n");
    } else {
        printf("Os PIBs sao iguais\n");
    }
    if(densidade1> densidade2){
        printf("A densidade 2 venceu\n");
    } else if(densidade1 < densidade2){
        printf("A Densidade 1 venceu\n");
    } else {
        printf("As densidades sao iguais\n");
    }
    if(PIB_per_Capita1> PIB_per_capita2){
        printf("O PIB per capita 1 venceu\n");
    } else if(PIB_per_Capita1 < PIB_per_capita2){
        printf("O PIB per capita 2 venceu\n");
    } else {
        printf("Os PIBs per capita sao iguais\n");
    }
    if(inverso_densidade1> inverso_densidade2){
        printf("O inverso da densidade 1 venceu\n");
    } else if(inverso_densidade1 < inverso_densidade2){
        printf("O inverso da densidade 2 venceu\n");
    } else {
        printf("Os inversos das densidades sao iguais\n");
    }
    if(Pontos_turisticos1> pontos_turisticos2){
        printf("O numero de pontos turisticos 1 venceu\n");
    } else if(Pontos_turisticos1 < pontos_turisticos2){
        printf("O numero de pontos turisticos 2 venceu\n");
    } else {
        printf("Os numeros de pontos turisticos sao iguais\n");
    }
    if(Super_Poder1> Super_Poder2){
        printf("O super poder 1 venceu\n");
    } else if(Super_Poder1 < Super_Poder2){
        printf("O super poder 2 venceu\n");
    } else {
        printf("Os super poderes sao iguais\n");
    }
 
 
     return 0; // Indica que o programa terminou com sucesso
 }