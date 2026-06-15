#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-51 - Contagem regressiva");
 printf("\n*************************************************************\n");
 int i = 10;
 do { printf("%d\n", i); i--; } while (i >= 1);
 return 0;
}

