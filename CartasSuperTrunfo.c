#include <stdio.h>

int main(){
    char estado1[50];
    char codigo1[10];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pt1;
    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pt2;

    printf("Digite o Estado da Carta A: \n");
    scanf("%s", &estado1);


    printf("Digite a cidade da Carta A: \n");
    scanf("%s", &cidade1);

    printf("Digite o código da carta A: \n");
    scanf("%s", &codigo1);

    printf("Digite a população da Carta A: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta A: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta A: \n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem na Carta A: \n");
    scanf("%d", &pt1);
//CARTA B

    printf("Digite o Estado da Carta B: \n");
    scanf("%s", &estado2);


    printf("Digite a cidade da Carta B: \n");
    scanf("%s", &cidade2);

    printf("Digite o código da carta B: \n");
    scanf("%s", &codigo2);

    printf("Digite a população da Carta B: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta B: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta B: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem na Carta B: \n");
    scanf("%d", &pt2);
    
    printf("Carta A\n Estado %s\n Cidade: %s\n", estado1, cidade1);
    printf("Código: %s\n População: %d\n Área: %f\n", codigo1, populacao1, area1);
    printf("PIB %f\n Pontos Turísticos: %d\n\n", pib1, pt1);

    printf("Carta B\n Estado %s\n Cidade: %s\n", estado2, cidade2);
    printf("Código: %s\n População: %d\n Área: %f\n", codigo2, populacao2, area2);
    printf("PIB %f\n Pontos Turísticos: %d\n\n", pib2, pt2);
    return 0;
}