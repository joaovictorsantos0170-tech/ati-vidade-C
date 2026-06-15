#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-20 - Ano Bissexto");
 printf("\n*************************************************************\n");
 int ano;
 printf("Digite o ano: ");
 scanf("%d", &ano);
 if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
 printf("%d e bissexto.\n", ano);
 else
 printf("%d nao e bissexto.\n", ano);
 return 0;
}

