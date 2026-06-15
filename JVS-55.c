#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-55 - Maior ate negativo");
 printf("\n*************************************************************\n");
 float n, maior = -1;
 do {
 printf("Digite um numero (negativo para sair): ");
 scanf("%f", &n);
 if (n >= 0 && n > maior) maior = n;
 } while (n >= 0);
 printf("Maior numero positivo: %.2f\n", maior);
 return 0;
}

