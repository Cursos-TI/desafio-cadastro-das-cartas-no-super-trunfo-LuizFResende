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

  float populacao;
   printf("INSIRA O TOTAL DE PESSSOAS (POPULACAO), DA CIDADE ESCOLHIDA: ");
   scanf(" %f", &populacao);

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
   printf("SUPER PODER: %f - power\n\n\n", SuperPoderC1);




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

   float populacao2;
   printf("INSIRA O TOTAL DE PESSSOAS (POPULACAO), DA CIDADE ESCOLHIDA: ");
   scanf(" %f", &populacao2);

   float area2;
   printf("INDIQUE A AREA DA CIDADE: ");
   scanf(" %f", &area2);

   float PIB2;
   printf("INDIQUE O VALOR DO PIB DA SUA CIDADE: ");
   scanf("  %f ", &PIB2);

   int pontos_turisticos2;
   printf("INDIQUE A QUANTIDADE DE PONTOS TURISTICOS EM SUA CIDADE: ");
   scanf(" %d ", &pontos_turisticos2);

    float dens_populacional2;
    dens_populacional2 = populacao2 / area2;


    float PIB2_per_capta;
    PIB2_per_capta = (PIB2 / populacao2);

      //SUPER PODER
   float SuperPoderC2;

   SuperPoderC2 = (float)(populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB2_per_capta) - (dens_populacional2);
   printf(" SUPER PODER: %f power\n\n\n", SuperPoderC2);



   ///INVERSAO DAS DENSIDADES POPULACIONAIS

   float inversao1, inversao2;
   inversao1 = dens_populacional1 * -1;
   inversao2 = dens_populacional2 * -1;



   ///GAME


   printf("\n\n\n\n!!!!!!!!!!!!!!!!!!!CARTAS CRIADAS COM SUCESSO!!!!!!!!!!!!!!!!!!\n\n\n");
   printf("ESSES SAO OS VALORES DAS CARTAS..........\n\n\n\n");


   printf("PRIMEIRA CARTA.!\nCIDADE : %s\nLETRA: %c\nCODIGO: %s\nPOPULACAO: %.4f\nAREA DA CIDADE: %.3f Km^2\nPIB: %.4f BILHOES DE REAIS\nPONTOS TURISTICOS: %d\n",  cidade, letra, codigo, populacao, area, PIB, pontos_turisticos);
   printf("DENSIDADE POPULACIONAL: %.2f - POR M^2\n", dens_populacional1);
   printf("PIB PER-CAPTA: %lu REAIS\n\n\n", PIB_per_capta);
   printf("SEGUNDA CARTA.!\nCIDADE : %s\nLETRA: %s\nCODIGO: %s\nPOPULACAO: %.4f\nAREA DA CIDADE: %.3f Km^2\nPIB: %.4f BILHOES DE REAIS\nPONTOS TURISTICOS: %d\n",  cidade2, letra2, codigo2, populacao2, area2, PIB2, pontos_turisticos2);
   printf("DENSIDADE POPULACINAL: %.2f - POR M^2\n", dens_populacional2);
   printf("PIB PER-CAPTA: %lu REAIS\n\n\n", PIB2_per_capta);

   //COMPARACAO ENTRE AS CARTAS COM APRESENTACAO DOS VALORES


printf("\n\n!!!JOGO!!!!\n\n");

      printf("Carta 1 %s - POPULACAO:  %.4f \n", cidade, populacao);
      printf("Carta 2 %s - POPULACAO:  %.4f \n", cidade2, populacao2);
   if(populacao > populacao2){
      printf("Carta 1 (%s) venceu! :\n\n", cidade);
   }else {
         printf("Carta 2 (%s) venceu!\n\n", cidade2);
   }


      printf("Carta 1 %s - AREA:  %.3f \n",cidade , area);
      printf("Carta 2 %s - AREA:  %.3f \n",cidade2 , area2);
   if(area > area2){
      printf("Carta 1 (%s) venceu!\n\n", cidade);
   }else {
         printf("Carta 2 (%s) venceu!\n\n", cidade2);
   }


      printf("Carta 1 %s - PIB:  %.4f \n", cidade, PIB);
      printf("Carta 2 %s - PIB:  %.4f \n", cidade2, PIB2);
   if(PIB > PIB2){
      printf("Carta 1 (%s) venceu!\n\n", cidade);
   }else {
         printf("Carta 2 (%s) venceu!\n\n", cidade2);

   }


      printf("Carta 1 %s - PONTOS TURISTICOS:  %d \n", cidade, pontos_turisticos);
      printf("Carta 2 %s - PONTOS TURISTICOS:  %d \n", cidade2, pontos_turisticos2);
   if(pontos_turisticos > pontos_turisticos2){
      printf("Carta 1 (%s) venceu!\n\n", cidade);

   }else {
         printf("Carta 2 (%s) venceu!\n\n", cidade2);

   }

      printf("Carta 1 %s - DENSIDADE POPULACIONAL: %.2f \n", cidade, inversao1);
      printf("Carta 2  %s - DENSIDADE POPULACIONAL: %.2f \n", cidade2, inversao2);
   if (inversao1 < inversao2){
      printf("Carta 1 (%s) venceu!\n\n", cidade);

   }else{
       printf("Carta 2 (%s) venceu!\n\n", cidade2);
   }


     printf("Carta 1 %s - PIB PER-CAPTA:  %.3f \n", cidade, PIB_per_capta);
     printf("Carta 2 %s - PIB PER-CAPTA:  %.3f \n", cidade2, PIB2_per_capta);
  if (PIB_per_capta > PIB2_per_capta){
         printf("Carta 1 (%s) venceu!\n\n", cidade);

  }else{
         printf("Carta 2 (%s) venceu!\n\n", cidade2);

  }

      printf("Carta 1 %s - SUPER PODER:  %d \n",cidade , SuperPoderC1);
      printf("Carta 2 %s - SUPER PODER:  %d \n",cidade2 , SuperPoderC2);
   if (SuperPoderC1 > SuperPoderC2){
               printf("Carta 1 (%s) venceu!\n\n", cidade);


  }else{
         printf("Carta 2 (%s) venceu!\n\n", cidade2);


  }



   return 0 ;
}
