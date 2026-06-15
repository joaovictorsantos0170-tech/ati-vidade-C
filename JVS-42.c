#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-42 - Impares digitados");
 printf("\n*************************************************************\n");
 int i = 0, n, cont = 0;
 while (i < 10) {
 printf("Digite o %d. numero: ", i+1);
 scanf("%d", &n);
 if (n % 2 != 0) cont++;
 i++;
 }
 printf("Quantidade de impares: %d\n", cont);
 return 0;
}

