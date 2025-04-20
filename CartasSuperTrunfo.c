#include <stdio.h>

int main() {
   //Abixo são declaradas as cartas 1 e 2
   char carta1[50]="carta";   char carta2[50]="nome";//Cartas 
   char estado1[50] = "sergipe";   char estado2[50]="BHAIA";//Estados
   char codigo1[50] = "A01";   char codigo2[50]="B01";//Códigos
   char cidade1[50] = "telha";   char cidade2[50]="velha";//Cidades  
   unsigned int populacao1 = 1500000000; unsigned int populacao2=1500000000;//Populações
   float area1 = 30;   float area2=32;//Areas  
   unsigned int  PIB1 = 10; unsigned  PIB2=45;//PIBs
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
   scanf(" %u", &PIB1); // Caixa de entrada do PIB 1

   printf("digite o numero de pontos turisticos 1: \n"); // Pergunta o número de pontos turísticos 1
   scanf(" %d", &Pontos_turisticos1); // Caixa de entrada de pontos turísticos 1

   //Abaixo são feitos os cálculos para carta 1 

   densidade1=(float)populacao1/area1;//cálculo da densidade populacional
   inverso_densidade1=(float)area1 / populacao1;//cálculo do inverso da densidade populacional
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
   scanf(" %u", &PIB2); // Caixa de entrada do PIB 2

   printf("Digite o numero de pontos turisticos 2: \n"); // Pergunta o número de pontos turísticos 2
   scanf(" %d", &pontos_turisticos2); // Caixa de entrada de pontos turísticos 2

   //Abaixo são feitos os cálculos para carta 2
   densidade2=(float)populacao2/area2;//cálculo da densidade populacional
   inverso_densidade2=(float)area2/populacao2;//cálculo do inverso da densidade populacional
   PIB_per_capita2=(unsigned int )PIB2/populacao2;//cálculo do PIB per capita
   Super_Poder2=(double)PIB2+populacao2+area2+PIB_per_capita2+inverso_densidade2+pontos_turisticos2;//cálculo do super poder




   //Abaixo seão impressas a comparação das cartas 1 e 2
   
   printf("***Comparacao das cartas***\n");//Frase de inicio da comparação das cartas
   printf("Observacao verdadeira(1) falsa(0)\n");//Frase de inicio da comparação das cartas

   printf("A populacao 1>populacao2: %d\n", populacao1>populacao2); // Compara as populações
   printf("A area 1>area 2: %d\n", area1>area2); // Compara as áreas
   printf("O PIB 1>PIB 2: %d\n", PIB1>PIB2); // Compara os PIBs
   printf("A densidade 1<densidade 2: %d\n", densidade1<densidade2); // Compara as densidades
   printf("O PIB per capita 1>PIB per capita 2: %d\n", PIB_per_Capita1>PIB_per_capita2); // Compara os PIBs per capita
   printf("O inverso da densidade 1>inverso da densidade 2: %d\n", inverso_densidade1>inverso_densidade2); // Compara os inversos das densidades
   printf("o numero de pontos turisticos 1>pontos turisticos 2: %d\n", Pontos_turisticos1>pontos_turisticos2); // Compara os números de pontos turísticos
   printf("O super poder 1>super poder 2: %d\n", Super_Poder1>Super_Poder2); // Compara os super poderes
   
   
   
   return 0; // Indica que o programa terminou com sucesso
}