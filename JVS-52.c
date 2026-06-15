#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-52 - Soma ate multiplo de 10");
 printf("\n*************************************************************\n");
 int n, soma = 0;
 do {
 printf("Digite um numero: ");
 scanf("%d", &n);
 soma += n;
 } while (n % 10 != 0);
 printf("Soma total: %d\n", soma);
 return 0;
}
