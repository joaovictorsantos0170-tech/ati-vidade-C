#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-27 - Tabuada com for");
 printf("\n*************************************************************\n");
 int n, i;
 printf("Digite um numero: ");
 scanf("%d", &n);
 for (i = 1; i <= 10; i++)
 printf("%d x %d = %d\n", n, i, n*i);
 return 0;
}

