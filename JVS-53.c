#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-53 - Confirmar saida com s");
 printf("\n*************************************************************\n");
 char op;
 do {
 printf("\nMenu: [1] Opcao A [2] Opcao B. Deseja sair? (s): ");
 scanf(" %c", &op);
 } while (op != 's');
 printf("Sistema encerrado.\n");
 return 0;
}
