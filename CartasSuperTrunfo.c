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

   int populacao;
   printf("INSIRA O TOTAL DE PESSSOAS (POPULACAO), DA CIDADE ESCOLHIDA: ");
   scanf("%d", &populacao);

   float area;
   printf("INDIQUE A AREA DA CIDADE:  ");
   scanf(" %f", &area);

   float PIB;
   printf("INDIQUE O VALOR DO PIB DA SUA CIDADE: ");
   scanf("%f", &PIB);

   int pontos_turisticos;
   printf("INDIQUE A QUANTIDADE DE PONTOS TURISTICOS EM SUA CIDADE: ");
   scanf("%d", &pontos_turisticos);



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

   int populacao2;
   printf("INSIRA O TOTAL DE PESSSOAS (POPULACAO), DA CIDADE ESCOLHIDA: ");
   scanf("%d", &populacao2);

   float area2;
   printf("INDIQUE A AREA DA CIDADE:  ");
   scanf(" %f", &area2);

   float PIB2;
   printf("INDIQUE O VALOR DO PIB DA SUA CIDADE: ");
   scanf("%f", &PIB2);

   int pontos_turisticos2;
   printf("INDIQUE A QUANTIDADE DE PONTOS TURISTICOS EM SUA CIDADE: ");
   scanf("%d", &pontos_turisticos2);





   printf("\n\n\n\n!!!!!!!!!!!!!!!!!!!CARTAS CRIADAS COM SUCESSO!!!!!!!!!!!!!!!!!!\n\n\n");
   printf("ESSES SAO OS VALORES DAS CARTAS..........\n\n\n\n");


   printf("PRIMEIRA CARTA.!\nCIDADE : %s\nLETRA: %c\nCODIGO: %s\nPOPULACAO: %d\nAREA DA CIDADE: %f Km^2\nPIB: %f BILHOES DE REAIS\nPONTOS TURISTICOS: %d\n\n\n\n",  cidade, letra, codigo, populacao, area, PIB, pontos_turisticos);

   printf("SEGUNDA CARTA.!\nCIDADE : %s\nLETRA: %s\nCODIGO: %s\nPOPULACAO: %d\nAREA DA CIDADE: %f Km^2\nPIB: %f BILHOES DE REAIS\nPONTOS TURISTICOS: %d\n\n\n\n",  cidade2, letra2, codigo2, populacao2, area2, PIB2, pontos_turisticos2);

return 0 ;
}
