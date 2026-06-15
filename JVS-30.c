#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-30 - Fatorial");
 printf("\n*************************************************************\n");
 int n, i;
 long long fat = 1;
 printf("Digite um numero: ");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) fat *= i;
 printf("%d! = %lld\n", n, fat);
 return 0;
}

