#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int menu, selecionarModo, jogarVs, jogarComputador, PontosTuristicos1, PontosTuristicos2;

    char jogador1[20], Computador[20],
        CodigoCidade1[100], nome1[100], escala1,
        CodigoCidade2[100], nome2[100], escala2;

        const char *cidades_sp[] = {
    "São Paulo",
    "Campinas",
    "Santos",
    "São Bernardo do Campo",
    "Guarulhos",
    "Ribeirão Preto",
    "São José dos Campos",
    "Sorocaba",
    "Osasco",
    "Mogi das Cruzes",
    "Jundiaí",
    "Piracicaba",
    "Bauru",
    "Santo André",
    "Franca",
    "São Vicente",
    "Carapicuíba",
    "Barueri",
    "Taubaté",
    "Marília"
};

    float Populacao1, area1, DensidadePopulacional1, PIBCapita1,
        Populacao2, area2, DensidadePopulacional2, PIBCapita2;

    double pib1, pib2;

    srand(time(NULL));

    printf("Jogo Cartas Super Trunfo: Jogador 1 x Jogador 2!\n");
    printf("Selecione uma opção: \n");
    printf("1. Iniciar o jogo \n");
    printf("2. Regras \n");
    printf("3. Exit\n");

    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Jogo Cartas Super Trunfo! \n");
        printf("Selecione qual modo quer jogar!\n");
        printf("1. player1 vs player2\n");
        printf("2. jogar contra um computador\n");
        printf("3. Voltar\n");
        scanf("%d", &selecionarModo);
        switch (selecionarModo)
        {
        case 1:
            // Cadastro das Cartas:
            printf("Jogo Cartas Super Trunfo: Jogador 1 x Jogador 2!\n");
            printf("Escolha suas cartas, desafie seu oponente e descubra quem é o verdadeiro mestre do Super Trunfo!\n\n");

            // utilizei a função fgets() da biblioteca do stdio.h para capturar os nomes completos.
            printf("Escolha o nome do Jogador 1:");
            while (getchar() != '\n')
                ; // limpa o \n do buffer
            fgets(jogador1, sizeof(jogador1), stdin);
            jogador1[strcspn(jogador1, "\n")] = '\0'; // tira o \n
            printf("Escolha o nome do Jogador 2:");
            fgets(jogador2, sizeof(jogador2), stdin);
            jogador2[strcspn(jogador2, "\n")] = '\0';

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
                pib1 *= 1e6;
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
            printf("População: %.2f\n", Populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Número de pontos turísticos: %d\n", PontosTuristicos1);
            printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
            printf("PIB per Capita: %.2f\n\n", PIBCapita1);

            // Agora entrando com as propriedades das cartas do jogador2
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
                pib2 *= 1e6;
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

            // utilizei uma estrutura de condição para comparar os valores e decidir o vencedor
            if (DensidadePopulacional1 < DensidadePopulacional2)
            {
                printf("Jogador %s Ganhou está partida!", jogador1);
            }
            else if (DensidadePopulacional2 < DensidadePopulacional1)
            {
                printf("Jogador %s Ganhou está partida!", jogador2);
            }
            else if (Populacao1 > Populacao2 || area1 > area2 || pib1 > pib2 || PontosTuristicos1 > PontosTuristicos2)
            {
                printf("Jogador %s Ganhou está partida!", jogador1);
            }
            else if (Populacao2 > Populacao1 || area2 > area1 || pib2 > pib1 || PontosTuristicos2 > PontosTuristicos1)
            {
                printf("Jogador %s Ganhou está partida!", jogador2);
            }
            break;

            case 2:

             printf("Jogo Cartas Super Trunfo: vs Computador!\n");
             
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
                pib1 *= 1e6;
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
            printf("População: %.2f\n", Populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Número de pontos turísticos: %d\n", PontosTuristicos1);
            printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
            printf("PIB per Capita: %.2f\n\n", PIBCapita1);


            int cidadeCodigo = (rand() % (99 - 11 + 1)) + 11 ; 

            char CidadeCp = sizeof(cidades_sp) / sizeof(cidades_sp[0]);

            int indice = rand() % CidadeCp;

            int populacaoMin = 10000;
            int populacaoMax = 2000000;

            int populacaoSort = (rand() % (populacaoMax - populacaoMin + 1)) + populacaoMin;

            int densidade_min = 50;      
            int densidade_max = 15000;   
            int densidade = (rand() % (densidade_max - densidade_min + 1)) + densidade_min;

            
            int area_min = 10;           
            int area_max = 2000;        
            int area = (rand() % (area_max - area_min + 1)) + area_min;
                int populacao = densidade * area;

            int pontosTuristicos = (rand() % (10 - 1 + 1)) + 1 ; 

            // Exibição do computador
            printf("O seu adversário escolheu: %03d!\n", cidadeCodigo);
            printf("O seu adversário escolheu: %s!\n", cidades_sp[indice]);
            printf("A populacão da cidade é:  %d\n", populacaoSort);
            printf("Cidade com %d km² de área e densidade de %d habitantes por km²:\n", area, densidade);
            printf("Os pontos turísticos da cidade: %d\n", pontosTuristicos);


             // utilizei uma estrutura de condição para comparar os valores e decidir o vencedor
            if (DensidadePopulacional1 < densidade)
            {
                printf("Jogador %s Ganhou está partida!", jogador1);
            }
            else if (DensidadePopulacional2 < densidade)
            {
                printf("Jogador %s Ganhou está partida!", Computador);
            }
            else if (Populacao1 > Populacao2 || area1 > area2 || pib1 > pib2 || PontosTuristicos1 > PontosTuristicos2)
            {
                printf("Jogador %s Ganhou está partida!", jogador1);
            }
            else if (Populacao2 > Populacao1 || area2 > area1 || pib2 > pib1 || PontosTuristicos2 > PontosTuristicos1)
            {
                printf("Jogador %s Ganhou está partida!", Computador);
            }
           
            


            break;

        default:
            break;
        }
        break;

    default:
        break;
    }
}