#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Definindo as variáveis do projetos Cartas Super Tunfo
    char CodigoCidade[100], nome[100];
    float Populacao,area, pib;
    int PontosTuristicos;
    
    // Cadastro das Cartas:

    printf("Insira as informações de cada cidade\n");

    //Definindo a entrada do usuário
    printf("Digite o código da cidade:\n");
    scanf("%s", CodigoCidade);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Informe a população da cidade:\n");
    scanf("%f", &Populacao);

    printf("Informe a área da cidade:\n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos da cidade:\n");
    scanf("%d", &PontosTuristicos);
    
    // Exibição dos Dados das Cartas
    //Exiba os valores inseridos para cada atributo da cidade
    printf("Código da cidade: %s ", CodigoCidade);
    printf("Cidade: %s ", nome);
    printf("População: %.3f ", Populacao);
    printf("Área: %.3f km²", area);
    printf("Pib: %.2f ", pib);
    printf("Número de pontos turísticos: %d", PontosTuristicos);

    return 0;
}


/*Teste com esses dados
    Populacão:  91.792 
    Cidade: Avaré
    Pib: R$ 2,82 bilhões
    Pontos turísticos : 10
    área 1.213.055
*/
