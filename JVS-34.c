#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-34 - Numero Primo");
 printf("\n*************************************************************\n");
 int n, i, primo = 1;
 printf("Digite um numero: ");
 scanf("%d", &n);
 if (n < 2) primo = 0;
 for (i = 2; i < n; i++)
 if (n % i == 0) { primo = 0; break; }
 printf("%d %s primo.\n", n, primo ? "e" : "nao e");
 return 0;
}

