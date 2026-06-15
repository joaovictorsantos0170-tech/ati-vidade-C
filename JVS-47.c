#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-47 - Tabuada do-while");
 printf("\n*************************************************************\n");
 int n, i = 1;
 printf("Digite um numero: ");
 scanf("%d", &n);
 do { printf("%d x %d = %d\n", n, i, n*i); i++; } while (i <= 10);
 return 0;
}
