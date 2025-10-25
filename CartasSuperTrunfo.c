#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Área para definição das variáveis para armazenar as propriedades das cidades

        char est,est2;
        char carta [3],carta2[3];
        char cidade [50],cidade2[50];
        int pop,pop2;
        float area,area2;
        float pib,pib2;
        int ptur,ptur2;
        float denspop,pibcap;        
        float denspop2,pibcap2;
        float suppod1, suppord2;

        // Área para entrada de dados (carta 1)

        printf("Digite o estado? \n");
        scanf( "%c", &est);

        printf("Digite nome da carta? \n");
        scanf("%s" , &carta);

        printf("Digite a cidade? \n");
        scanf("%s" , &cidade);

        printf("Digite número de habitantes? \n");
        scanf("%i" , &pop);

        printf("Digite a área em Km2? \n");
        scanf("%f" , &area);

        printf("Digite o PIB da cidade? \n");
        scanf("%f" , &pib);

        printf("Digite a quantidade de pontos turísticos? \n");
        scanf("%i" , &ptur);

        // Área para exibição dos dados da cidade (Carta 1)

        printf("Seu estado é: %c\n", est);
        printf("O número da carta é: %s\n" , carta);
        printf("O nome da cidade é: %s\n" , cidade);
        printf("A população é de: %i\n" , pop);
        printf("A área total da cidade é: %f\n" , area);
        printf("O PIB da cidade é: %f\n" , pib);
        printf("A quantidade de pontos turisticos são: %i\n" , ptur);

         // Área para entrada de dados (carta 2)

        printf("Digite o estado 2 ? \n");
        scanf( "%c", &est2);

        printf("Digite nome da carta 2 ? \n");
        scanf("%s" , &carta2);

        printf("Digite a cidade 2 ? \n");
        scanf("%s" , &cidade2);

        printf("Digite número de habitantes 2? \n");
        scanf("%i" , &pop2);

        printf("Digite a área em Km2 2? \n");
        scanf("%f" , &area2);

        printf("Digite o PIB da cidade 2? \n");
        scanf("%f" , &pib2);

        printf("Digite a quantidade de pontos turísticos 2? \n");
        scanf("%i" , &ptur2);

        // Área para exibição dos dados da cidade (Carta 2)
        printf("Seu estado é: %c\n", est2);
        printf("O número da carta é: %s\n" , carta2);
        printf("O nome da cidade é: %s\n" , cidade2);
        printf("A população é de: %i\n" , pop2);
        printf("A área total da cidade é: %f\n" , area2);
        printf("O PIB da cidade é: %f\n" , pib2);
        printf("A quantidade de pontos turisticos são: %i\n" , ptur2);

        // Área para exibição do calculo das variáveis carta (1)
        denspop = pop / area;     
        printf("O calculo da carta 1 é: %f\n" , denspop);

        pibcap = pib / pop;
        printf("O calculo do pip é: %f\n" ,pibcap);

        // Área para exibição do calculo das variáveis carta (2)
        denspop2 = pop2 / area2;
        printf("O calculo da carta2 é: %f\n" , denspop2);

        pibcap2 = pib2 / pop2;
        printf("o Calculo do pib carta2 é: %f\n" , pibcap2);

        //Comparação simples 
        suppod1 = pib < pib2 ;
        printf ("A comparação é: %f\n " , suppod1);

        suppord2 = area > area2;
        printf("A comparação 2 é: %f\n" , suppord2)









 
return 0;
} 
