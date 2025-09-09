#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variáveis para a CARTA 1
    int codigo1, pontosTuristicos1;
    char nome1[50];
    long int populacao1;
    float area1;
    double pib1;

    // Variáveis para a CARTA 2
    int codigo2, pontosTuristicos2;
    char nome2[50];
    long int populacao2;
    float area2;
    double pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // --- CADASTRO DA CARTA 1 ---
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o codigo do pais: \n");
    scanf("%d", &codigo1);

    printf("Digite o nome do pais: \n");
    scanf("%s", nome1); 

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao1);

    printf("Digite a area em km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de USD): \n");
    scanf("%lf", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o codigo do pais: \n");
    scanf("%d", &codigo2);

    printf("Digite o nome do pais: \n");
    scanf("%s", nome2);

    printf("Digite a populacao: \n");
    scanf("%ld", &populacao2);

    printf("Digite a area em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de USD): \n");
    scanf("%lf", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\n--- CARTAS CADASTRADAS ---\n");
    
    // Mostra os dados da Carta 1
    printf("CARTA 1\n");
    printf("Pais: %s - Codigo: %d\n", nome1, codigo1);
    printf("Populacao: %ld habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: U$ %.2lf bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("--------------------------\n");

    // Mostra os dados da Carta 2
    printf("\nCARTA 2\n");
    printf("Pais: %s - Codigo: %d\n", nome2, codigo2);
    printf("Populacao: %ld habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: U$ %.2lf bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("--------------------------\n");

    return 0;
}
