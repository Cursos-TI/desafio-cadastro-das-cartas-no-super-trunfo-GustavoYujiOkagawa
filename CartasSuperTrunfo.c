#include <stdio.h>

int main()
{
    // Definindo as variáveis do projeto Cartas Super Trunfo
    char CodigoCidade1[100], nome1[100], escala1, 
    jogador1[20], 
    CodigoCidade2[100], nome2[100], escala2,
    jogador2[20];

    float Populacao1, area1, DensidadePopulacional1, PIBCapita1,
    Populacao2, area2, DensidadePopulacional2, PIBCapita2;
    double pib1, pib2;
    int PontosTuristicos1, PontosTuristicos2;

    // Cadastro das Cartas:
    printf("Jogo Cartas Super Trunfo: Jogador 1 x Jogador 2!\n");
    printf("Escolha suas cartas, desafie seu oponente e descubra quem é o verdadeiro mestre do Super Trunfo!\n\n");

    //utilizei a função fgets() da biblioteca do stdio.h para capturar os nomes completos.
    printf("Escolha o nome do Jogador 1:");
    fgets(jogador1, sizeof(jogador1), stdin);
    printf("Escolha o nome do Jogador 2:");
    fgets(jogador2, sizeof(jogador2), stdin);

    // Definindo a entrada do usuário
    printf("\n%sadicione as propriedades das cartas!\n\n", jogador1);
    printf("Digite o código da cidade:\n");
    scanf("%s", CodigoCidade1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);

    printf("Informe a população da cidade:\n");
    scanf("%f", &Populacao1);

    printf("Informe a área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib1);

    printf("Insira a escala (m para milhão, b para bilhão):\n");
    scanf(" %c", &escala1); // Note o espaço antes do %c para evitar problemas com o buffer

    // Convertendo o PIB com base na escala
    if (escala1 == 'm' || escala1 == 'M')
    {
        pib1  *= 1e6;
    }
    else if (escala1 == 'b' || escala1 == 'B')
    {
        pib1 *= 1e9;
    }

    // Calculando automaticamente a Densidade Populacional e o PIB per Capita
    DensidadePopulacional1 = Populacao1 / area1;
    PIBCapita1 = pib1 / Populacao1;

    printf("Informe o número de pontos turísticos da cidade:\n");
    scanf("%d", &PontosTuristicos1);

    // Exibição dos Dados das Cartas do jogador1
    printf("Propriedades das cartas do %s", jogador1);
    printf("\nDados da cidade:\n");
    printf("Código da cidade: %s\n", CodigoCidade1);
    printf("Cidade: %s\n", nome1);
    printf("População: %.2f\n", Populacao1  );
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n\n", PIBCapita1);

    //Agora entrando com as propriedades das cartas do jogador2
    printf("Agora digite as propriedades da %s", jogador2);

    printf("\n%sadicione as propriedades das cartas!\n\n", jogador2);
    printf("Digite o código da cidade:\n");
    scanf("%s", CodigoCidade2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);

    printf("Informe a população da cidade:\n");
    scanf("%f", &Populacao2);

    printf("Informe a área da cidade (em km²):\n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade:\n");
    scanf("%lf", &pib2);

    printf("Insira a escala (m para milhão, b para bilhão):\n");
    scanf(" %c", &escala2); // Note o espaço antes do %c para evitar problemas com o buffer

    // Convertendo o PIB com base na escala
    if (escala2 == 'm' || escala2 == 'M')
    {
        pib2  *= 1e6;
    }
    else if (escala2 == 'b' || escala2 == 'B')
    {
        pib2 *= 1e9;
    }

    // Calculando automaticamente a Densidade Populacional e o PIB per Capita
    DensidadePopulacional2 = Populacao2 / area2;
    PIBCapita1 = pib2 / Populacao2;

    printf("Informe o número de pontos turísticos da cidade:\n");
    scanf("%d", &PontosTuristicos2);

    // Exibição dos Dados das Cartas do jogador2
    printf("Propriedades das cartas do %s", jogador2);
    printf("\nDados da cidade:\n");
    printf("Código da cidade: %s\n", CodigoCidade2);
    printf("Cidade: %s\n", nome2);
    printf("População: %.2f\n", Populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n\n", PIBCapita2);


    if(DensidadePopulacional1 < DensidadePopulacional2){
        printf("Jogador %s Ganhou está partida!", jogador1);
    }else if(DensidadePopulacional2 < DensidadePopulacional1){
        printf("Jogador %s Ganhou está partida!", jogador2);
    }

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
