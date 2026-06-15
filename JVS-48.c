#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-48 - Menu com opcao de sair");
 printf("\n*************************************************************\n");
 int op;
 do {
 printf("\n1 - Mensagem | 2 - Sair\n> ");
 scanf("%d", &op);
 if (op == 1) printf("Voce escolheu a mensagem!\n");
 } while (op != 2);
 printf("Saindo...\n");
 return 0;
}

