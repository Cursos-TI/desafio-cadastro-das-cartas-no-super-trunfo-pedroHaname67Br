#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis
    char nome[50];
    int codigo_da_cidade;
    int populacao;
    float area;
    float PIB;
    int numeros_de_pontos_turisticos;

    double densidade_populacional, PIB_Per_Capita;
    
    // Entrada de Dados
    printf("Digite o nome da Cidade: \n");
    scanf("%s",&nome);

    printf("Digite o Código da Cidade: \n");
    scanf("%d",&codigo_da_cidade);

    printf("Digite o número da população: \n");
    scanf("%d",&populacao);

    printf("Digite a área da Cidade: \n");
    scanf("%f",&area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f",&PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d",&numeros_de_pontos_turisticos);

    // Cálculo do Sistema
    densidade_populacional = populacao / area;

    PIB_Per_Capita = populacao / PIB;

    // Saída de Dados
    printf("Nome da Cidade: %s\n",nome);
    printf("Código da Cidade: %d\n",codigo_da_cidade);
    printf("População da Cidade: %d\n",populacao);
    printf("Área da Cidade: %.2f\n",area);
    printf("PIB da Cidade: %.2f\n",PIB);
    printf("Quantidade de Pontos Turísticos: %d\n",numeros_de_pontos_turisticos);
    printf("Densidade populacional: %.2f\n",densidade_populacional);
    printf("PIB per Capita: %.2f\n",PIB_Per_Capita);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
