#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-43 - Soma pares 1 a 100");
 printf("\n*************************************************************\n");
 int i = 2, soma = 0;
 while (i <= 100) { soma += i; i += 2; }
 printf("Soma dos pares: %d\n", soma);
 return 0;

}
