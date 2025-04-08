#include <stdio.h>

int main() {
    
    //Abixo são declaradas as variaveis das cartas 1 e 2
    char carta1[50]="carta"; char carta2[50]="nome";//declara as cartas 1 e 2
    char estado1[50] = "sergipe"; char estado2[50]="BHAIA";//delcara os estados 1 e 2
    char Codigo1[50] = "A01"; char codigo2[50]="B01";//declara os codigos 1 e 2 
    char Cidade1[50] = "telha"; char cidade2[50]="velha";//delcara as cidades 1 e 2 
    int Populacao1 = 12230; int populacao2=3255;//declara as populações 1 e 2 
    float Area1 = 30; float Area2=32;//declara as Areas 1 e 2 
    float PIB1 = 10; float PIB2=45;//declara os PIBs 1 e 2
    int Pontos_turisticos1 = 10; int pontos_turisticos2=12;//declara os pontos turisticos 1 e 2

    //Abaixo é declarado o cadstro da carta 1

    printf("digite a carta1: ");//pergunata a carta1
    scanf("%s",carta1);//caixa de entrada da caixa1

    printf("Digite o seu Estado1: "); // Pergunta o estado1
    scanf("%s", estado1); // Caixa de entrada do estado1

    printf("Digite o seu Codigo1: "); // Pergunta o código1
    scanf("%s", Codigo1); // Caixa de entrada do código1

    printf("Digite o nome da cidade1: "); // Pergunta a cidade1
    scanf("%s", Cidade1); // Caixa de entrada da cidade1

    printf("Digite a populacao1: "); // Pergunta população1
    scanf("%d", &Populacao1); // Caixa de entrada da população1

    printf("Digite a area1: "); // Pergunta área1
    scanf("%f", &Area1); // Caixa de entrada da área1

    printf("Digite o PIB1: "); // Pergunta o PIB1
    scanf("%f", &PIB1); // Caixa de entrada do PIB1

    printf("digite o numero de pontos turisticos1: "); // Pergunta o número de pontos turísticos1
    scanf("%d", &Pontos_turisticos1); // Caixa de entrada de pontos turísticos1
    
    // Impressão da carta 1
    printf("%s\n", carta1);//Imprime a carta1
    printf("estado1: %s\n", estado1); // Imprime o estado1
    printf("codigo1: %s\n", Codigo1); // Imprime o código1
    printf("cidade1: %s\n", Cidade1); // Imprime a cidade1
    printf("populacao1: %d\n", Populacao1); // Imprime a população1
    printf("area1: %.2f Km²\n", Area1); // Imprime a área1
    printf("PIB1: %.2f Bilhoes de Reais\n", PIB1); // Imprime o PIB1
    printf("pontos Turisticos1: %d\n", Pontos_turisticos1); // Imprime o número de pontos turísticos1

    //Abixo é declarado o cadstro da carta 2

    printf("digite a carta2: ");//pergunata a carta2
    scanf("%s",carta2);//caixa de entrada da caixa2

    printf("Digite o seu Estado2: "); // Pergunta o estado2
    scanf("%s", estado2); // Caixa de entrada do estado2

    printf("Digite o seu Codigo2: "); // Pergunta o código2
    scanf("%s", codigo2); // Caixa de entrada do código2

    printf("Digite o nome da cidade2: "); // Pergunta a cidade2
    scanf("%s", cidade2); // Caixa de entrada da cidade2

    printf("Digite a populacao2: "); // Pergunta população2
    scanf("%d", &populacao2); // Caixa de entrada da população2

    printf("Digite a area2: "); // Pergunta área2
    scanf("%f", &Area2); // Caixa de entrada da área2

    printf("Digite o PIB2: "); // Pergunta o PIB2
    scanf("%f", &PIB2); // Caixa de entrada do PIB2

    printf("digite o numero de pontos turisticos2: "); // Pergunta o número de pontos turísticos2
    scanf("%d", &pontos_turisticos2); // Caixa de entrada de pontos turísticos2

    //Impressão da carta 2

    printf("%s\n", carta2);//Imprime a carta2
    printf("estado2: %s\n", estado2); // Imprime o estado2
    printf("codigo2: %s\n", codigo2); // Imprime o código2
    printf("cidade2: %s\n", cidade2); // Imprime a cidade2
    printf("populacao2: %d\n", populacao2); // Imprime a população2
    printf("area2: %.2f Km²\n", Area2); // Imprime a área2
    printf("PIB2: %.2f Bilhoes de Reais\n", PIB2); // Imprime o PIB2
    printf("pontos Turisticos2: %d\n", pontos_turisticos2); // Imprime o número de pontos turísticos2

    return 0; // Indica que o programa terminou com sucesso
}