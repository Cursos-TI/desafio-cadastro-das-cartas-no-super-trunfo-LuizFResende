#include<stdio.h>


int main(){

printf("!!!!!!!!!!BEM VINDO AO SUPER TRUNFO!!!!!!!!!!!\n\n\n");
//TIPO DE CARTA A SER APRESENTADA//

   char letra ;
   printf("INSIRA A LETRA CODIGO DA PRIMEIRA CARTA ESCOLHA DE A a H: ");
   scanf(" %c", &letra);


   char codigo[5];
   printf("INSIRA O CODIGO DA CARTA EX...A01,B02,A03,B04:  ");
   scanf("%s", &codigo);

   char cidade[20];
   printf("INSIRA O NOME DA CIDADE DESEJADA (EX..SAO-PAULO)\nNAO USE ESPACOS PARA SEPARAR OS NOMES USE(-) :  ");
   scanf(" %s", &cidade);

   unsigned long int populacao;
   printf("INSIRA O TOTAL DE PESSSOAS (POPULACAO), DA CIDADE ESCOLHIDA: ");
   scanf(" %lu", &populacao);

   float area;
   printf("INDIQUE A AREA DA CIDADE:  ");
   scanf(" %f", &area);

   float PIB;
   printf("INDIQUE O VALOR DO PIB DA SUA CIDADE: ");
   scanf(" %f", &PIB);

   int pontos_turisticos;
   printf("INDIQUE A QUANTIDADE DE PONTOS TURISTICOS EM SUA CIDADE: ");
   scanf("%d", &pontos_turisticos);

   float dens_populacional1;
   dens_populacional1 = (populacao / area) ;


   float PIB_per_capta;
   PIB_per_capta = (float)(PIB / populacao);

   //SUPER PODER
   float SuperPoderC1;

   SuperPoderC1 = (float)(populacao + area + PIB + pontos_turisticos + PIB_per_capta) - (dens_populacional1);
   printf("SUPER PODER: %fpower\n\n\n", SuperPoderC1);




   ///APRESENTACAO
   printf("PRONTO!!!!\nTODOS OS SEUS DADOS FORAM CADASTRADOS COM SUCESSO\nCRIACAO DE CARTA EM PROCESSO...........\n\n\n\nSUCESSO!!!!!!!!!\n\n\n");

   /// SEGUNDA CARTA !//



  printf("POR FAVOR...INICIE A PRODUCAO DA SEGUNDA CARTA\n\n\n\n");


   char letra2[3] ;
   printf("INSIRA A LETRA CODIGO DA SEGUNDA CARTA ESCOLHA DE A a H: ");
   scanf(" %s", &letra2);

   char codigo2[10];
   printf("INSIRA O CODIGO DIFERENTE DA PRIMEIRA CARTA (EX..A01):  ");
   scanf("%s", &codigo2);

   char cidade2[20];
   printf("INSIRA O NOME DA CIDADE DESEJADA (EX..SAO-PAULO)\nNAO USE ESPACOS PARA SEPARAR OS NOMES USE(-) :  ");
   scanf(" %s", &cidade2);
   unsigned long int populacao2;
   printf("INSIRA O TOTAL DE PESSSOAS (POPULACAO), DA CIDADE ESCOLHIDA: ");
   scanf(" %lu", &populacao2);

   float area2;
   printf("INDIQUE A AREA DA CIDADE:  ");
   scanf(" %f", &area2);

   float PIB2;
   printf("INDIQUE O VALOR DO PIB DA SUA CIDADE: ");
   scanf(" %f", &PIB2);

   int pontos_turisticos2;
   printf("INDIQUE A QUANTIDADE DE PONTOS TURISTICOS EM SUA CIDADE: ");
   scanf("%d", &pontos_turisticos2);

    float dens_populacional2;
    dens_populacional2 = populacao2 / area2;


    float PIB2_per_capta;
    PIB2_per_capta = (PIB2 / populacao2);

      //SUPER PODER
   float SuperPoderC2;

   SuperPoderC2 = (float)(populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB2_per_capta) - (dens_populacional2);
   printf(" SUPER PODER: %fpower\n\n\n", SuperPoderC2);



   ///INVERSAO DAS DENSIDADES POPULACIONAIS

   float inversao1, inversao2;
   inversao1 = dens_populacional1 * -1;
   inversao2 = dens_populacional2 * -1;



   ///GAME

   int PopulacaoComp, AreaComp , PIBComp, PontosTuristicosComp , DensidadePPComp , PIBpercaptaComp, SuperPComp;

   PopulacaoComp =  populacao  >  populacao2;
   AreaComp =  area  >  area2 ;
   PIBComp =  PIB  >  PIB2 ;
   PontosTuristicosComp =   pontos_turisticos  >  pontos_turisticos2;
   DensidadePPComp =  inversao1  >  inversao2;
   PIBpercaptaComp =  PIB_per_capta  >  PIB2_per_capta;
   SuperPComp =  SuperPoderC1  >  SuperPoderC2 ;



   printf("\n\n\n\n!!!!!!!!!!!!!!!!!!!CARTAS CRIADAS COM SUCESSO!!!!!!!!!!!!!!!!!!\n\n\n");
   printf("ESSES SAO OS VALORES DAS CARTAS..........\n\n\n\n");


   printf("PRIMEIRA CARTA.!\nCIDADE : %s\nLETRA: %c\nCODIGO: %s\nPOPULACAO: %d\nAREA DA CIDADE: %.3f Km^2\nPIB: %.3f BILHOES DE REAIS\nPONTOS TURISTICOS: %d\n",  cidade, letra, codigo, populacao, area, PIB, pontos_turisticos);
   printf("DENSIDADE POPULACIONAL: %.2f - POR M^2\n", dens_populacional1);
   printf("PIB PER-CAPTA: %lu REAIS\n\n\n", PIB_per_capta);
   printf("SEGUNDA CARTA.!\nCIDADE : %s\nLETRA: %s\nCODIGO: %s\nPOPULACAO: %d\nAREA DA CIDADE: %.3f Km^2\nPIB: %.3f BILHOES DE REAIS\nPONTOS TURISTICOS: %d\n",  cidade2, letra2, codigo2, populacao2, area2, PIB2, pontos_turisticos2);
   printf("DENSIDADE POPULACINAL: %.2f - POR M^2\n", dens_populacional2);
   printf("PIB PER-CAPTA: %lu REAIS\n\n\n", PIB2_per_capta);


   printf("  ---- DESAFIO DAS CARTAS----- \n\n\n--INICIADO!\n\n " );

printf("-REGRAS DO JOGO--\n\nO VALOR (1) SERA ATRIBUIDO A VITORIA DA CARTA 1 E O NUMERO (0) SERA ATRIBUIDO A VITORIA DA CARTA 2----\n\n\n");
printf("POPULACAO: CARTA (%d) VENCEU!\n", PopulacaoComp);
printf("AREA: CARTA (%d) VENCEU!\n", AreaComp);
printf("PIB: CARTA (%d) VENCEU!\n", PIBComp);
printf("PONTOS TURISTICOS: CARTA (%d) VENCEU!\n", PontosTuristicosComp);
printf("DENSIDADE PUPOLACIONAL: CARTA (%d) VENCEU!\n", DensidadePPComp);
printf("PIB PER-CAPTA: CARTA (%d) VENCEU!\n", PIBpercaptaComp);
printf("SUPER PODER: CARTA (%d) VENCEU!\n", SuperPComp);





return 0 ;
}
