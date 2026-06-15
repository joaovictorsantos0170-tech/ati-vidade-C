#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-32 - Quadrado 1 a 10");
 printf("\n*************************************************************\n");
 int i;
 for (i = 1; i <= 10; i++)
 printf("%d^2 = %d\n", i, i*i);
 return 0;
}
