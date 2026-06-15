#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-31 - Contagem Regressiva");
 printf("\n*************************************************************\n");
 int i;
 for (i = 10; i >= 1; i--)
 printf("%d\n", i);
 return 0;
}

