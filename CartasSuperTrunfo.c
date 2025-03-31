#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char Estado1[50], Estado2[50];
    char codigo1[20], codigo2[20];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    float densidadePOP1, densidadePOP2;
    float pibPER1, pibPER2;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("insira uma letra de 'A' a 'H' correspondente a um dos 8 Estados: ");
    scanf("%s", Estado1);
    printf("insira o codigo da cidade(letra do estado seguida de um numero de 01 a 04): ");
    scanf("%s", codigo1);
    printf("insira o nome da cidade: ");
    scanf("%s", nome1);
    printf("insira a populacao da cidade: ");
    scanf("%d", &populacao1);
    printf("insira a area da cidade: ");
    scanf("%f", &area1);
    printf("insira o pib da cidade: ");
    scanf("%f", &pib1);
    printf("insira qte ptos turisticos: ");
    scanf("%d", &pontos_turisticos1);


    printf("\n\ninsira uma letra de 'A' a 'H' correspondente a um dos 8 Estados: ");
    scanf("%s", Estado2);
    printf("insira o codigo da cidade(letra do estado seguida de um numero de 01 a 04): ");
    scanf("%s", codigo2);
    printf("insira o nome da cidade: ");
    scanf("%s", nome2);
    printf("insira a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("insira a area da cidade: ");
    scanf("%f", &area2);
    printf("insira o pib da cidade: ");
    scanf("%f", &pib2);
    printf("insira qte ptos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    densidadePOP1 = populacao1/area1;
    pibPER1 = pib1/populacao1;
    densidadePOP2 = populacao2/area2;
    pibPER2 = pib2/populacao2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCarta 1:\nEstado: %s\ncodigo: %s\nnome: %s\npopulacao: %d\narea(Em km^2): %2.f\npib: %2.f\npontos turisticos: %d\ndensidade populacional: %2.f\npib percapita: %2.f\n\n\n ", Estado1, codigo1, nome1, populacao1, area1, pib1, pontos_turisticos1, densidadePOP1, pibPER1);


    
    printf("\n\nCarta 2:\nEstado: %s\ncodigo: %s\nnome: %s\npopulacao: %d\narea(Em km^2): %2.f\npib: %2.f\npontos turisticos: %d\ndensidade populacional: %2.f\npib percapita: %2.f\n\n\n ", Estado2, codigo2, nome2, populacao2, area2, pib2, pontos_turisticos2, densidadePOP2, pibPER2);


    return 0;
}
