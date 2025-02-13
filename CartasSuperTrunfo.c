#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //irei declarar as variáveis que irei usar.
    int cod_cidade, pontos_turisticos;
    char nome_cidade[20];
    float populacao, area, pib;

    // irei pedir o código da cidade.
    printf("digite o código da cidade:\n");
    scanf("%d", &cod_cidade);

    //irei digitar o nome da cidade.
    printf("digite o nome da cidade:\n");
    scanf("%s", &nome_cidade);

    //irei declarar a população.
    printf("digite a população da cidade:\n");
    scanf("%f", &populacao);
    //irei declarar a área da cidade.
    printf("digite a àrea da cidade:\n");
    scanf("%f", &area);
    //irei declarar o pib da cidade.
    printf("digite o pib da cidade:\n");
    scanf("%f", &pib);
    //irei digitar a quantidade de pontos turisticos da cidade.
    printf("digite a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &pontos_turisticos);
    //irei imprimir todos os resultados de uma vez com o printf. Sendo um em cada linha com o \n.
    printf("O código da cidade é: %d\n O nome da cidade é: %s\n A população da cidade é: %f\n A área da cidade é: %f\n O pib da cidade é: %f\n Os pontos turisticos da cidade são: %d\n ", cod_cidade, nome_cidade, populacao, area, pib, pontos_turisticos);

    return 0;
}
