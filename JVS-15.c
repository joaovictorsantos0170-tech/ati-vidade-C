#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-15 - Quantas caixas cabem no caminhao");
 printf("\n*************************************************************\n");
 float ah, al, ac, ch, cl, cc;
 printf("Dimensoes do caminhao (altura largura comprimento): ");
 scanf("%f %f %f", &ah, &al, &ac);
 printf("Dimensoes da caixa (altura largura comprimento): ");
 scanf("%f %f %f", &ch, &cl, &cc);
 int vol_caminhao = (int)(ah * al * ac);
 int vol_caixa = (int)(ch * cl * cc);
 printf("Cabem %d caixas no caminhao.\n", vol_caminhao / vol_caixa);
 return 0;
}

