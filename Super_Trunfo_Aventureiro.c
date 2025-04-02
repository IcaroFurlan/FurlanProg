
#include <stdio.h>

int main(){
    char carta1[10], carta2[10];
        char estado1[20], estado2[20];
            char codigo1[20], codigo2[20];
                char cidade1[20], cidade2[20];
                    int populacao1, populacao2;
                        float area1, area2;
                            float pib1, pib2;
                                int turistico1, turistico2;
                                  float densidade1, densidade2;
                                    float pibpc1, pibpc2;
                
//mensagem inicial de boas vindas ao jogo
            printf("***Iniciando o cadastro de cartas do jogo Super Trunfo***\n\n");

//sequência que pede ao usuário para inserir os dados da 1ª carta
    printf("Digite 1 para a 1ª carta \n");
    scanf("%s", &carta1);

    printf("Digite o nome do 1º Estado \n");
    scanf("%s", &estado1);
    
    printf("Digite o codigo da 1ª carta (Ex: A01) \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da 1ª cidade \n");
    scanf("%s", &cidade1);

    printf("Digite o nº da população (sem vírgula): \n");
    scanf("%d", &populacao1);

    printf("Digite a área em Km² (use ponto para casa decimal): \n");
    scanf("%f", &area1);

    printf("Digite o PIB em Bilhões: \n");
    scanf("%f", &pib1);

    printf("Digite o nº de pontos turísticos: \n");
    scanf("%d", &turistico1);
    
    //cálculo da densidade demográfica 
    densidade1 = populacao1 / area1; //divisão da população pela área em km²
    //cálculo do PIB per Capita
    pibpc1 = pib1 / populacao1; //divisão do Pib pela População Habitacional da cidade
    



                printf("Agora digite os dados da sua 2ª carta\n\n");


    //sequência que pede ao usuário para inserir os dados da 2ª carta
    printf("Digite 2 para a 2ª carta \n");
    scanf("%s", &carta2);

    printf("Digite o nome do 2º Estado \n");
    scanf("%s", &estado2);
    
    printf("Digite o codigo da 2ª carta (Ex:A02) \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da 2ª cidade \n");
    scanf("%s", &cidade2);

    printf("Digite o nº da população (sem vírgula): \n");
    scanf("%d", &populacao2);

    printf("Digite a área em Km² (use ponto para casa decimal): \n");
    scanf("%f", &area2);

    printf("Digite o PIB em Bilhões: \n");
    scanf("%f", &pib2);

    printf("Digite o nº de pontos turísticos: \n\n");
    scanf("%d", &turistico2);

     //cálculo da densidade demográfica
    densidade2 = populacao2 / area2; //divisão da população pela área em km²
    //cálculo do PIB per Capita
    pibpc2 = pib2 / populacao2; //divisão do Pib pela População Habitacional da cidade

    
//resultado = conjunto de escrita que aparecerá na tela para o usuário
    printf("Carta: %s\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pibpc1);


    printf("Carta: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);
    

    
    return 0;

}
    
