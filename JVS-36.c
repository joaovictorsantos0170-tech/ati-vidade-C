#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-36 - Contar ate 10 com while");
 printf("\n*************************************************************\n");
 int i = 1;
 while (i <= 10) { printf("%d\n", i); i++; }
 return 0;
}
