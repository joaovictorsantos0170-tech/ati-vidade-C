#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-39 - Numero Positivo");
 printf("\n*************************************************************\n");
 float n;
 printf("Digite um numero positivo: ");
 scanf("%f", &n);
 while (n <= 0) {
 printf("Invalido! Digite um numero positivo: ");
 scanf("%f", &n);
 }
 printf("Numero valido: %.2f\n", n);
 return 0;
}
