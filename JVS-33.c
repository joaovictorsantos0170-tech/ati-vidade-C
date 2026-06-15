#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-33 - Multiplos de 3");
 printf("\n*************************************************************\n");
 int i;
 for (i = 1; i <= 30; i++)
 if (i % 3 == 0) printf("%d\n", i);
 return 0;
}
