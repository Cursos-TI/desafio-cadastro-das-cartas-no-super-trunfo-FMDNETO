#include<stdio.h>

//CRIANDO O PROGRAMA PRINCIPAL

int main()
    {
    //DECLARANDO VARIAVEIS
    char estado1[20], estado2[20], codigocarta1[20], codigocarta2[20], nomecidade1[20], nomecidade2[20];
    unsigned long int populacao1, populacao2; //POPULAÇÃO COMO UNSIGNED LONG INT - DESAFIO MESTRE
    int pturismo1, pturismo2; //MODIFICAÇÃO FEITA NO DESAFIO MESTRE
    float area1, area2, pib1,pib2;
    float denspop1, denspop2; //DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    float pibpercapita1, pibpercapita2; // PIB PER CAPITA - DESAFIO AVENTUREIRO
    float superpoder1, superpoder2; //SUPER PODER - DESAFIO MESTRE
    
    //INICIALIZANDO VARIAVEIS DA PRIMEIRA CARTA
    printf("Digite o nome do estado da primeira carta: ");
    scanf("%s", estado1);
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", nomecidade1);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigocarta1);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade: ");
    scanf("%f", &area1);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de Pontos Turisticos da cidade: ");
    scanf("%d", &pturismo1);
    denspop1 = populacao1 / area1; //CÁLCULO DA DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    pibpercapita1 = pib1 / populacao1; //CÁLCULO DO PIB PER CAPITA - DESAFIO AVENTUREIRO

    //INICIALIZANDO VARIAVEIS DA SEGUNDA CARTA
    printf("Digite o nome do estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", nomecidade2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigocarta2);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a area da cidade: ");
    scanf("%f", &area2);
    printf("Digite o pib da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de Pontos Turisticos da cidade: ");
    scanf("%d", &pturismo2);
    denspop2 = populacao2 / area2; //CÁLCULO DA DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    pibpercapita2 = pib2 / populacao2; //CÁLCULO DO PIB PER CAPITA - DESAFIO AVENTUREIRO

    //DESAFIO MESTRE - CALCULO DO SUPER PODER
    superpoder1 = (populacao1+area1+pturismo1+pibpercapita1+(1/denspop1));
    superpoder2 = (populacao2+area2+pturismo2+pibpercapita2+(1/denspop2));
    
    //EXIBINDO O RESULTADO DA PRIMEIRA CARTA
    printf("-------------------------\n");
    printf("------PRIMEIRA CARTA-----\n");
    printf("-------------------------\n");
    printf("A primeira carta é  :\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Pib: R$ %.2f BILHÕES\n", pib1);
    printf("Pontos Turisticos: %d\n", pturismo1);
    printf("Densidade Populacional: %.2f\n", denspop1); //EXIBINDO A DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    printf("Pib per capita: R$ %.2f\n", pibpercapita1); //EXIBINDO O PIB PER CAPITA - DESAFIO AVENTUREIRO
        
    //EXIBINDO O RESULTADO DA SEGUNDA CARTA
    printf("-------------------------\n");
    printf("------SEGUNDA CARTA------\n");
    printf("-------------------------\n");
    printf("A segunda carta é  :\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Pib: R$ %.2f BILHÕES\n", pib2);
    printf("Pontos Turisticos: %d\n", pturismo2);
    printf("Densidade Populacional: %.2f\n", denspop2); //EXIBINDO A DENSIDADE POPULACIONAL - DESAFIO AVENTUREIRO
    printf("Pib per capita: R$ %.2f\n", pibpercapita2); //EXIBINDO O PIB PER CAPITA - DESAFIO AVENTUREIRO

    //DESAFIO MESTRE - VERIFICANDO A CARTA VENCEDORA
    printf("------------------------------------\n");
    printf("----VERIFICANDO A CARTA VENCEDORA----\n");
    printf("------------------------------------\n");
    printf("Populacao:\n CARTA 1: %d CARTA 2: %d", (populacao1 > populacao2), (populacao2 > populacao1));
    printf("\nArea:\n CARTA 1: %d CARTA 2: %d", (area1 > area2), (area2 > area1));
    printf("\nPib:\n CARTA 1: %d CARTA 2: %d", (pib1 > pib2), (pib2 > pib1));
    printf("\nPontos Turisticos:\n CARTA 1: %d CARTA 2: %d", (pturismo1 > pturismo2), (pturismo2 > pturismo1));
    printf("\nDensidade Populacional:\n CARTA 1: %d CARTA 2: %d", (denspop1 > denspop2), (denspop2 > denspop1));
    printf("\nPib per capita:\n CARTA 1: %d CARTA 2: %d", (pibpercapita1 > pibpercapita2), (pibpercapita2 > pibpercapita1));
    printf("\nSuper Poder:\n CARTA 1: %d CARTA 2: %d", (superpoder1 > superpoder2), (superpoder2 > superpoder1));
    printf("\n------------------------------------\n");
    printf("FIM DO PROGRAMA\n");
    return 0;
    //FIM DO PROGRAMA
    }
