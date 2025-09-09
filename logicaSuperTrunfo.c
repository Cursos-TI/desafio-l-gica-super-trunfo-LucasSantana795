#include <stdio.h>
#include <string.h>

int main() {
    
    int escolha1, escolha2;
    int resultado1, resultado2;
    int soma1, soma2;
    char nome1[30];
    char nome2[30];
    int pop1, pop2, pt1, pt2; //pop = populacao pt = pontos turisticos
    float area1, area2, pib1, pib2;
    float dd1, dd2; //dp = densidade demografica

    printf("Nome do primeiro país: \n");
    fgets(nome1, 30, stdin);
    nome1[strcspn(nome1, "\n")] = 0;
    printf("População do primeiro país: \n");
    scanf("%d", &pop1);
    printf("Área do primeiro país (em km²): \n");
    scanf("%f", &area1);
    printf("PIB do primeiro país: \n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos no primeiro país: \n");
    scanf("%d", &pt1);
    printf("Nome do segundo país: \n");
    fgetc(stdin);
    fgets(nome2, 30, stdin);
    nome2[strcspn(nome2, "\n")] = 0;
    printf("População do segundo país: \n");
    scanf("%d", &pop2);
    printf("Área do segundo país (em km²): \n");
    scanf("%f", &area2);
    printf("PIB do segundo país: \n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos no segundo país: \n");
    scanf("%d", &pt2);

    //calculo da densidade demografica
    dd1 = (float) pop1 / area1; 
    dd2 = (float) pop2 / area2;

    printf("\nEscolha o primeiro atributo para comparar\n");
    printf("1. Nome dos países\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n\n");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        printf("Nome dos países\n");
        printf("1. %s\n", nome1);
        printf("2. %s", nome2);
        break;
    case 2:
        resultado1 = pop1 > pop2;
        break;
    case 3:
        resultado1 = area1 > area2;
        break;
    case 4:
        resultado1 = pib1 > pib2;
        break;
    case 5:
        resultado1 = pt1 > pt2;
        break;
    case 6:
        resultado1 = dd1 < dd2;
        break;
    default:
        printf("Opção inválida");
        break;
    }

    printf("\nEscolha o segundo atributo para comparar\n"); //lógica para saber se um atributo já foi escolhido
    printf("1. Nome dos países\n");
    escolha1 == 2 ? printf("Atributo já selecionado\n") : printf("2. População\n");
    escolha1 == 3 ? printf("Atributo já selecionado\n") : printf("3. Área\n");
    escolha1 == 4 ? printf("Atributo já selecionado\n") : printf("4. PIB\n");
    escolha1 == 5 ? printf("Atributo já selecionado\n") : printf("5. Número de pontos turísticos\n");
    escolha1 == 6 ? printf("Atributo já selecionado\n\n") : printf("6. Densidade demográfica\n\n");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2)
    {
        printf("Atributo já selecionado");
        return 0;
    }
    switch (escolha2)
    {
    case 1:
        printf("Nome dos países\n");
        printf("1. %s\n", nome1);
        printf("2. %s", nome2);
        break;
    case 2:
        resultado2 = pop1 > pop2;
        break;
    case 3:
        resultado2 = area1 > area2;
        break;
    case 4:
        resultado2 = pib1 > pib2;
        break;
    case 5:
        resultado2 = pt1 > pt2;
        break;
    case 6:
        resultado2 = dd1 < dd2;
        break;
    default:
        printf("Opção inválida");
        break;
    }
    
    soma1 = resultado1 + resultado2;
    soma2 = !resultado1 + !resultado2;

    printf("\n%s - %s\n", nome1, nome2);

    switch (escolha1 + escolha2)
    {
    case 5:
        printf("População: %d - %d\nÁrea: %.2f - %.2f\n", pop1, pop2, area1, area2);
        break;
    case 6:
        printf("População: %d - %d\nPIB: %.2f - %.2f\n", pop1, pop2, pib1, pib2);
        break;
    case 7:
        (escolha1 || escolha2) == 2 ?
        printf("População: %d - %d\nNúmero de pontos turísticos: %d - %d\n", pop1, pop2, pt1, pt2) :
        printf("Área: %.2f - %.2f\nPIB: %.2f - %.2f\n", area1, area2, pib1, pib2);
        break;
    case 8:
        (escolha1 || escolha2) == 2 ?
        printf("População: %d - %d\nDensidade demográfica: %.2f - %.2f\n", pop1, pop2, dd1, dd2) :
        printf("Área: %.2f - %.2f\nNúmero de pontos turísticos: %d - %d\n", area1, area2, pt1, pt2);
        break;
    case 9:
        (escolha1 || escolha2) == 3 ?
        printf("Área: %.2f - %.2f\nDensidade demográfica: %.2f - %.2f\n", area1, area2, dd1, dd2) :
        printf("PIB: %.2f - %.2f\nNúmero de pontos turísticos: %d - %d\n", pib1, pib2, pt1, pt2);
        break;
    case 10:
        printf("PIB: %.2f - %.2f\nDensidade demográfica: %.2f - %.2f\n", pib1, pib2, dd1, dd2);
        break;
    case 11:
        printf("Número de pontos turísticos: %d - %d\nDensidade demográfica: %.2f - %.2f\n", pt1, pt2, dd1, dd2);
        break;
    default:
        printf("Opção inválida");
        break;
    }

    printf("Soma das cartas\nCarta 1: %d\nCarta 2: %df\n\n", soma1, soma2);
        if (soma1 == 1)
        {
            printf("Empatou!");
        } else if (soma1 == 2)
        {
            printf ("Carta 1 Venceu!");
        } else {
            printf ("Carta 2 Venceu!");
        }

    return 0;
}
