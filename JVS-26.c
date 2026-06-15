#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-26 - Contar de 1 a 10 com for");
 printf("\n*************************************************************\n");
 int i;
 for (i = 1; i <= 10; i++)
 printf("%d\n", i);
 return 0;
}
