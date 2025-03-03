#include <stdio.h>


int main() {
    // Variáveis
    char nome[25];
    int codigo_da_cidade;
    int populacao;
    double area;
    double PIB, Super_Poder;
    int numeros_de_pontos_turisticos;

    double densidade_populacional, PIB_Per_Capita;
    
    // Entrada de Dados
    printf("Digite o nome da Cidade 1: \n");
        scanf("%s",&nome);

    printf("Digite o Código da Cidade: \n");
        scanf("%d",&codigo_da_cidade);

    printf("Digite o número da população: \n");
        scanf("%d",&populacao);

    printf("Digite a área da Cidade: \n");
        scanf("%lf",&area);

    printf("Digite o PIB da Cidade: \n");
        scanf("%lf",&PIB);

    printf("Digite o número de pontos turísticos: \n");
        scanf("%d",&numeros_de_pontos_turisticos);

        // Cálculo do Sistema

        densidade_populacional = populacao / area;

        PIB_Per_Capita = populacao / PIB;

        Super_Poder = (int)populacao + area + numeros_de_pontos_turisticos + PIB;

        // Variáveis (2)
        char nome2[25];
        int codigo_da_cidade2;
        int populacao2;
        double area2;
        double PIB2, Super_Poder2;
        int numeros_de_pontos_turisticos2;
    
        double densidade_populacional2, PIB_Per_Capita2;
        
        // Entrada de Dados (2)
        printf("Digite o nome da Cidade 2: \n");
            scanf("%s",&nome2);
    
        printf("Digite o Código da Cidade: \n");
            scanf("%d",&codigo_da_cidade2);
    
        printf("Digite o número da população: \n");
            scanf("%d",&populacao2);
    
        printf("Digite a área da Cidade: \n");
            scanf("%lf",&area2);
    
        printf("Digite o PIB da Cidade: \n");
            scanf("%lf",&PIB2);
    
        printf("Digite o número de pontos turísticos: \n");
            scanf("%d",&numeros_de_pontos_turisticos2);

    // Cálculo do Sistema (2)
    densidade_populacional2 = populacao2 / area2;

    PIB_Per_Capita2 = populacao2 / PIB2;

    Super_Poder2 = (int)populacao2 + area2 + numeros_de_pontos_turisticos2 + PIB2;

    // Saída de Dados
    printf("***Comparação das Cartas***\n");
    printf("População: Venceu Carta(%d)\n", populacao >= populacao2);
    printf("Área da Cidade: Venceu Carta(%d)\n", (int)area >= area2);
    printf("PIB da Cidade: Venceu Carta(%d)\n", (int)PIB >= PIB2);
    printf("Quantidade de Pontos Turísticos: Venceu Carta(%d)\n", numeros_de_pontos_turisticos >= numeros_de_pontos_turisticos2);
    printf("Densidade populacional: Venceu Carta(%d)\n", (int)densidade_populacional <= densidade_populacional2);
    printf("PIB per Capita: Venceu Carta(%d)\n", (int)PIB_Per_Capita >= PIB_Per_Capita2);
    printf("Super Poder: Venceu Carta(%d)\n", Super_Poder >= Super_Poder2);


    return 0;
}
