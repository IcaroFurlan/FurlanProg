#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> //possibilita o uso da função strcspn que remove o \n da string
#include <unistd.h> //possibilita o uso da função sleep para esperar

int main(){
    char carta1[10], carta2[10];
        char estado1[20], estado2[20];
            char codigo1[20], codigo2[20];
                char cidade1[50], cidade2[50];
                   unsigned long int populacao1, populacao2;
                        float area1, area2;
                            float pib1, pib2;
                                int turistico1, turistico2;
                                  float densidade1, densidade2;
                                    float pibpc1, pibpc2;
                                      float SuperPoder1, SuperPoder2; 
                                       int opcaoMenu, atributo1, atributo2, resultado1, resultado2;



// Menu de opções
        menu:
            printf("Menu Principal\n");
            printf("1 - Iniciar o Jogo\n");
            printf("2 - Regras do jogo\n");
            printf("3 - Sair\n");
            scanf("%d", &opcaoMenu);
            while(getchar() != '\n');

        switch (opcaoMenu) {
        case 1:
        
        do {
            printf("Escolha um atributo para comparar as cartas (Sera usado para determinar o vencedor):\n");
            printf("1 - População\n");
            printf("2 - Área em km²\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turísticos\n");
            printf("5 - Densidade populacional\n");
            printf("6 - PIB per capita\n");
            scanf("%d", &atributo1);
            while(getchar() != '\n');
            
            if (atributo1 < 1 || atributo1 > 6) {
                printf("Opção inválida, porfavor escolha um número de 1 a 6\n");
            } // fechando o if
        } while (atributo1 < 1 || atributo1 > 6); //Enquanto a opção for menor que 1 ou maior que 6, o loop continua
        do {
            printf("Escolha o segundo atributo para comparar as cartas:\n");
            printf("1 - População\n");
            printf("2 - Área em km²\n");
            printf("3 - PIB\n");
            printf("4 - Pontos turísticos\n");
            printf("5 - Densidade populacional\n");
            printf("6 - PIB per capita\n");
            scanf("%d", &atributo2);
            while(getchar() != '\n');
            
            if (atributo2 < 1 || atributo2 > 6) {
                printf("Opção inválida, porfavor escolha um número de 1 a 6\n");
            } else if (atributo2 == atributo1) {
                printf("Opção inválida, porfavor escoalha um número diferente do anterior\n");
            } // fechando if
        } while (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1); //Enquanto a opção for menor que 1 ou maior que 6, ou igual ao primeiro atributo, o loop continuará
            printf("Iniciando o jogo...\n");
            sleep(3);
        break;
        case 2:
            printf("Regras do jogo:\n");
            printf("O jogador deve escolher um Estado/Cidade para jogar.\n");
            printf("Os atributos das cartas devem ser preenchidos de acordo com valores reais da cidade escolhida\n");
            printf("Vence o jogador que tiver os maiores atributos somados no final da partida\n");
            printf("Aperte enter para voltar ao menu principal\n");
            getchar();
            goto menu;
            break;

        case 3:
            printf("Saindo do jogo...");
            return 0;

        default:
            printf("Opção inválida\n");
            return 1;




}



//mensagem inicial de boas vindas ao jogo
            printf("***Iniciando o cadastro de cartas do jogo Super Trunfo***\n\n");

//sequência que pede ao usuário para inserir os dados da 1ª carta
    printf("Digite 1 para a 1ª carta \n");
    scanf("%s", &carta1);
    while(getchar() != '\n');

    printf("Digite o nome do 1º Estado \n");
    scanf("%s", &estado1);
    while(getchar() != '\n');

    printf("Digite o codigo da 1ª carta (Ex: A01) \n");
    scanf("%s", &codigo1);
    while(getchar() != '\n');

    printf("Digite o nome da 1ª cidade \n");
    scanf("%s", &cidade1);
    fgets(cidade1, 50, stdin);
    // Remover o '\n' final da string
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite o nº da população (sem vírgula): \n");
    scanf("%lu", &populacao1);
    while(getchar() != '\n');

    printf("Digite a área em Km² (use ponto para casa decimal): \n");
    scanf("%f", &area1);
    while(getchar() != '\n');

    printf("Digite o PIB em Bilhões: \n");
    scanf("%f", &pib1);
    while(getchar() != '\n');

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &turistico1);
    while(getchar() != '\n');

     if (populacao1 == 0) {
            printf("População não pode ser 0\n");
            return 1;
     }

    //cálculo da densidade demográfica 
    densidade1 = populacao1 / area1; //divisão da população pela área em km²
    //cálculo do PIB per Capita
    pibpc1 = pib1 / populacao1; //divisão do Pib pela População Habitacional da cidade
    
    /* calcular o super poder (soma de todos os atributos numéricos: população, área, PIB, 
       pontos turísticos PIB per capta e o inverso da densidade populacional - 
       quanto menor a densidade maior o "poder")
    */

    SuperPoder1 = populacao1 + area1 + pib1 + turistico1 + pibpc1;
   

                printf("Agora digite os dados da sua 2ª carta\n\n");


    //sequência que pede ao usuário para inserir os dados da 2ª carta
    printf("Digite 2 para a 2ª carta \n");
    scanf("%s", &carta2);
    while(getchar() != '\n');

    printf("Digite o nome do 2º Estado \n");
    scanf("%s", &estado2);
    while(getchar() != '\n');

    printf("Digite o codigo da 2ª carta (Ex:A02) \n");
    scanf("%s", &codigo2);
    while(getchar() != '\n');

    printf("Digite o nome da 2ª cidade \n");
    fgets(cidade2, 50, stdin); //Estabelence o limite de caracteres, e a entrada de dados
            cidade2[strcspn(cidade2, "\n")] = '\0'; /// STRCSPN retorna o tamanho da string, sem o \n

    printf("Digite o nº da população (sem vírgula): \n");
    scanf("%lu", &populacao2);
    while(getchar() != '\n');

    printf("Digite a área em Km² (use ponto para casa decimal): \n");
    scanf("%f", &area2);
    while(getchar() != '\n');

    printf("Digite o PIB em Bilhões: \n");
    scanf("%f", &pib2);
    while(getchar() != '\n');

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &turistico2);
    while(getchar() != '\n');

     //cálculo da densidade demográfica
    densidade2 = populacao2 / area2; //divisão da população pela área em km²
    //cálculo do PIB per Capita
    pibpc2 = pib2 / populacao2; //divisão do Pib pela População Habitacional da cidade

    /* calcular o super poder (soma de todos os atributos numéricos: população, área, PIB, 
       pontos turísticos PIB per capta e o inverso da densidade populacional - 
       quanto menor a densidade maior o "poder")
    */

    SuperPoder2 = populacao2 + area2 + pib2 + turistico2 + pibpc2;

//resultado = conjunto de escrita que aparecerá na tela para o usuário da carta 1
    printf("Carta: %s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpc1);
    printf("Super poder da 1ª carta = %.2f\n", SuperPoder1);
    sleep (3);


    //resultado = conjunto de escrita que aparecerá na tela para o usuário da carta 2
    
    printf("Carta: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    printf("Super poder da 2ª carta = %.2f\n\n", SuperPoder2);
    
     printf("Comparando as cartas...\n");
            sleep(3);

    switch(atributo1) {
            case 1:
            printf("Atributo escolhido para comparação: População\n População da carta 1: %d\n População da carta 2: %d\n", populacao1, populacao2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                populacao1 > populacao2 ? printf("Carta 1 venceu!!\n") : populacao2 > populacao1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
            case 2:
            printf("Atributo escolhido para comparação: Área em Km²\n Área da carta 1: %.2f\n Área da carta 2: %.2f\n", area1, area2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                area1 > area2 ? printf("Carta 1 venceu!!\n") : area2 > area1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
            case 3:
            printf("Atributo escolhido para comparação: PIB\n PIB da carta 1: R$ %.2lf Bilhões\n PIB da carta 2: R$ %.2lf Bilhões\n", pib1, pib2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                pib1> pib2 ? printf("Carta 1 venceu!!\n") : pib2 > pib1? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
            case 4:
            printf("Atributo escolhido para comparação: Pontos turísticos\n Pontos turísticos da carta 1: %d\n Pontos turísticos da carta 2: %d\n", turistico1, turistico2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                turistico1 > turistico2 ? printf("Carta 1 venceu!!\n") : turistico2 > turistico1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;         
            case 5:
            printf("Atributo escolhido para comparação: Densidade populacional\n Densidade populacional da carta 1: %.2lf\n Densidade populacional da carta 2: %.2lf\n", densidade1, densidade2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                densidade1 < densidade2 ? printf("Carta 1 venceu!!\n") : densidade2 < densidade1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
            case 6:
            printf("Atributo escolhido para comparação: PIB per capita\n PIB per capita da carta 1: R$ %.2lf\n PIB per capita da carta 2: R$ %.2lf\n", pibpc1, pibpc2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                pibpc1 > pibpc2 ? printf("Carta 1 venceu!!\n") : pibpc2 > pibpc1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
        }
    
        switch(atributo2) {
            case 1:
            printf("Atributo escolhido para comparação: População\n População da carta 1: %d\n População da carta 2: %d\n", populacao1, populacao2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                populacao1 > populacao2 ? printf("Carta 1 venceu!!\n") : populacao2 > populacao1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
            case 2:
            printf("Atributo escolhido para comparação: Área em Km²\n Área da carta 1: %.2f\n Área da carta 2: %.2f\n", area1, area2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                area1 > area2 ? printf("Carta 1 venceu!!\n") : area2 > area1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
            case 3:
            printf("Atributo escolhido para comparação: PIB\n PIB da carta 1: R$ %.2lf Bilhões\n PIB da carta 2: R$ %.2lf Bilhões\n", pib1, pib2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                pib1> pib2 ? printf("Carta 1 venceu!!\n") : pib2 > pib1? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
            case 4:
            printf("Atributo escolhido para comparação: Pontos turísticos\n Pontos turísticos da carta 1: %d\n Pontos turísticos da carta 2: %d\n", turistico1, turistico2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                turistico1 > turistico2 ? printf("Carta 1 venceu!!\n") : turistico2 > turistico1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;         
            case 5:
            printf("Atributo escolhido para comparação: Densidade populacional\n Densidade populacional da carta 1: %.2lf\n Densidade populacional da carta 2: %.2lf\n", densidade1, densidade2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                densidade1 < densidade2 ? printf("Carta 1 venceu!!\n") : densidade2 < densidade1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
            case 6:
            printf("Atributo escolhido para comparação: PIB per capita\n PIB per capita da carta 1: R$ %.2lf\n PIB per capita da carta 2: R$ %.2lf\n", pibpc1, pibpc2);
            printf("Comparando os atributos das cartas...\n");
            sleep (2);
                pibpc1 > pibpc2 ? printf("Carta 1 venceu!!\n") : pibpc2 > pibpc1 ? printf("Carta 2 venceu!!\n") : printf("Empate!!\n");
            break;
        }
    

        //PARADA PARA QUE O TERMINAL NÃO SE FECHE IMEDIATAMENTE APÓS A EXECUÇÃO DAS VARIAVEIS
            printf("Pressione qualquer tecla para sair...");
            getchar();
            return 0;

}
