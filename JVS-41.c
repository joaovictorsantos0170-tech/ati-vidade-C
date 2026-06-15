#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-41 - Primo com while");
 printf("\n*************************************************************\n");
 int n, i = 2, primo = 1;
 printf("Digite um numero: ");
 scanf("%d", &n);
 if (n < 2) primo = 0;
 while (i < n && primo) {
 if (n % i == 0) primo = 0;
 i++;
 }
 printf("%d %s primo.\n", n, primo ? "e" : "nao e");
 return 0;
}

