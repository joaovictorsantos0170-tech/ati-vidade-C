#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-35 - Fibonacci");
 printf("\n*************************************************************\n");
 int n, i, a = 0, b = 1, tmp;
 printf("Quantos termos? ");
 scanf("%d", &n);
 for (i = 0; i < n; i++) {
 printf("%d\n", a);
 tmp = a + b; a = b; b = tmp;
 }
 return 0;
}
