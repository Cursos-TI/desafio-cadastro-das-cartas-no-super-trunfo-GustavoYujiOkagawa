#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main()
{

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Definindo as variáveis do projetos Cartas Super Tunfo
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

    printf("Informe a área da cidade:\n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib);

    printf("Insira a escala (m para milhão, b para bilhão)\n");
    scanf("%s", escala);

   

    if (escala == 'm' || escala == 'M')
    {
        pib *= 1e6; // Multiplica por 1.000.000
    }
    else if (escala == 'b' || escala == 'B')
    {
        pib *= 1e9; // Multiplica por 1.000.000.000
    };

    // Calculando automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos
    DensidadePopulacional = Populacao / area;

    PIBCapita = pib / Populacao;

    printf("Informe o número de pontos turísticos da cidade:\n");
    scanf("%d", &PontosTuristicos);

    // Exibição dos Dados das Cartas
    // Exiba os valores inseridos para cada atributo da cidade
    printf("Código da cidade: %s\n ", CodigoCidade);
    printf("Cidade: %s\n ", nome);
    printf("População: %f\n ", Populacao);
    printf("Área: %f km²\n", area);
    printf("Valor convertido: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n ", PontosTuristicos);
    printf("Densidade Populacional: %.2f \n ", DensidadePopulacional);
    printf("PIB per Capita: %f\n ", PIBCapita);

    return 0;
}

/*
Dados para utilizar

Código da Cidade: 3504501
(Código IBGE de Avaré)
Nome: Avaré
População: Aproximadamente 90.000 habitantes (estimativa, verifique verificações recentes).
Área: 1.213,2 km²
PIB: R$ 2,5 bilhões (aproximado, com base em dados anteriores; atualizar conforme necessário).
Número de Pontos Turísticos: 15
(Inclui a Represa de Jurumirim, Parque Municipal, Horto Florestal, entre outros).
*/
