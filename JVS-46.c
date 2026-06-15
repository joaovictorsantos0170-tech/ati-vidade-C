#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-46 - Contar 1 a 10 do-while");
 printf("\n*************************************************************\n");
 int i = 1;
 do { printf("%d\n", i); i++; } while (i <= 10);
 return 0;
}

