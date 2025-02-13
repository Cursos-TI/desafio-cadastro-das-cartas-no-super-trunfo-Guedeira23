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
    // irei pedir o código da cidade e declarar ele com um printf.
    printf("digite o código da cidade:\n");
    scanf("%d", &cod_cidade);
    printf("o código da sua cidade é: %d\n", cod_cidade);

    printf("digite o nome da cidade:\n");
    scanf("%s", &nome_cidade);
    printf("o nome da sua cidade é: %s\n", nome_cidade);

    return 0;
}
