#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-24 - Pode votar?");
 printf("\n*************************************************************\n");
 int idade;
 printf("Digite sua idade: ");
 scanf("%d", &idade);
 if (idade >= 16) printf("Pode votar!\n");
 else printf("Nao pode votar.\n");
 return 0;
}
