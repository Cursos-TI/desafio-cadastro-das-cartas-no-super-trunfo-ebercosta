#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    /*  Declaração de variáveis */
    char estado1, estado2, cod_carta1, cod_carta2, cidade1[50], cidade2[50];
    int populacao1, populacao2, pt1, pt2;
    float area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, pib_per_capita1, pib_per_capita2;

    /*  Onboarding */
    printf("\033[H\033[J"); // Limpa a tela
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Você precisa inserir os dados de duas cartas para inciar o jogo.\n");
    printf("Pressione [ENTER] para continuar...\n");
    getchar(); // Aguarda a tecla Enter ser pressionada
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /*  Entrada de dados - Primeira carta */
    printf("Insira os dados da primeira carta!\n");
    printf("----------------------------------\n");
    printf("Estado (Apenas uma letra de 'A' a 'H'): ");
    scanf(" %c",&estado1);
    getchar(); // Consome o '\n' do buffer

    printf("Cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o '\n' do final
    
    printf("População (habitantes): ");
    scanf("%d", &populacao1);
    
    printf("Área em km². (Ex: 120.75): ");
    scanf("%f", &area1);

    printf("PIB em R$: ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pt1);

    /*  Entrada de dados - Segunda carta */
    printf("\nInsira os dados da segunda carta!\n");
    printf("----------------------------------\n");
    printf("Estado (Apenas uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    getchar(); // Consome o '\n' do buffer

    printf("Cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o '\n' do final
    
    printf("População (habitantes): ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB em R$: ");
    scanf("%f", &pib2);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pt2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\033[H\033[J"); // Limpa a tela
    printf("Confira as cartas cadastradas:\n\n");
    
    printf("CARTA 01\n");
    printf("---------\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c01\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de Pontos turísticos: %d\n", pt1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", (float) populacao1 / area1);
    printf("PIB per Capita: R$ %.2f\n", pib1 / populacao1);

    printf("\nCARTA 02\n");
    printf("---------\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c02\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos turísticos: %d\n", pt2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", (float) populacao2 / area2);
    printf("PIB per Capita: R$ %.2f\n", pib2 / populacao2);

    return 0;
}
