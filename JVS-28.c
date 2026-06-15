#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-28 - Soma 1 a 100");
 printf("\n*************************************************************\n");
 int i, soma = 0;
 for (i = 1; i <= 100; i++) soma += i;
 printf("Soma: %d\n", soma);
 return 0;
}

