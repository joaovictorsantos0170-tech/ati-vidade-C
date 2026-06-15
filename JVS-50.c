#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-50 - Numero positivo obrigatorio");
 printf("\n*************************************************************\n");
 float n;
 do {
 printf("Digite um numero positivo: ");
 scanf("%f", &n);
 if (n <= 0) printf("Invalido! Digite um valor positivo.\n");
 } while (n <= 0);
 printf("Valor aceito: %.2f\n", n);
 return 0;
}

