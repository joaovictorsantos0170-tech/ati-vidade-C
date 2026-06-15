#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-60 - Validador de Dias Uteis");
 printf("\n*************************************************************\n");
 int dia;
 printf("Digite o dia (1=Dom, 2=Seg, ..., 7=Sab): ");
 scanf("%d", &dia);
 switch (dia) {
 case 2: case 3: case 4: case 5: case 6:
 printf("Dia Util. Acesso liberado para o trabalho.\n"); break;
 case 1: case 7:
 printf("Fim de Semana. Predio fechado.\n"); break;
 default:
 printf("Numero de dia invalido.\n");
 }
 return 0;
}
