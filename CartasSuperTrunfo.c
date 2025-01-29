#include <stdio.h>

int main() {
    // Definindo as variáveis do projeto Cartas Super Trunfo
    char CodigoCidade[100], nome[100], escala;
    float Populacao, area, DensidadePopulacional, PIBCapita;
    double pib;
    int PontosTuristicos;

    // Cadastro das Cartas:
    printf("Insira as informações de cada cidade\n");

    // Definindo a entrada do usuário
    printf("Digite o código da cidade:\n");
    scanf("%s", CodigoCidade);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Informe a população da cidade:\n");
    scanf("%f", &Populacao);

    printf("Informe a área da cidade (em km²):\n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib);

    printf("Insira a escala (m para milhão, b para bilhão):\n");
    scanf(" %c", &escala);  // Note o espaço antes do %c para evitar problemas com o buffer

    // Convertendo o PIB com base na escala
    if (escala == 'm' || escala == 'M') {
        pib *= 1e6; 
    } else if (escala == 'b' || escala == 'B') {
        pib *= 1e9; 
    }

    // Calculando automaticamente a Densidade Populacional e o PIB per Capita
    DensidadePopulacional = Populacao / area;
    PIBCapita = pib / Populacao;

    printf("Informe o número de pontos turísticos da cidade:\n");
    scanf("%d", &PontosTuristicos);

    // Exibição dos Dados das Cartas
    printf("\nDados da cidade:\n");
    printf("Código da cidade: %s\n", CodigoCidade);
    printf("Cidade: %s\n", nome);
    printf("População: %.2f\n", Populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf("PIB per Capita: %.2f\n", PIBCapita);

    return 0;
}
/*
Dados para utilizar

Código da Cidade: 3504501
(Código IBGE de Avaré)
Nome: Avaré
População: Aproximadamente 90.000 habitantes.
Área: 1.213,2 km²
PIB: R$ 2,5 bilhões.
Número de Pontos Turísticos: 15.
*/
