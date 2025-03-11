#include <stdio.h>

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
    float area1, area2, pib1, pib2;

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

    printf("Cidade: ");
    fgets(cidade1, 50, stdin);
    
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

    printf("Cidade: ");
    fgets(cidade2, 50, stdin);
    
    printf("População (habitantes): ");
    scanf("%d", &populacao2);
    
    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB em R$: ");
    scanf("%f", &pib1);
    
    printf("Número de pontos turísticos: ");
    scanf("%d", &pt2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
