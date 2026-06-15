#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-37 - Soma ate zero");
 printf("\n*************************************************************\n");
 float n, soma = 0;
 printf("Digite numeros (0 para sair):\n");
 scanf("%f", &n);
 while (n != 0) { soma += n; scanf("%f", &n); }
 printf("Soma total: %.2f\n", soma);
 return 0;
}

