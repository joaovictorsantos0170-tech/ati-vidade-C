#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-22 - Par ou Impar");
 printf("\n*************************************************************\n");
 int n;
 printf("Digite um numero: ");
 scanf("%d", &n);
 printf("%d e %s\n", n, (n % 2 == 0) ? "Par" : "Impar");
 return 0;
}
