#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-45 - Menu ate sair");
 printf("\n*************************************************************\n");
 int op;
 do {
 printf("\n1 - Opcao A\n2 - Opcao B\n3 - Sair\n> ");
 scanf("%d", &op);
 if (op == 1) printf("Voce escolheu A.\n");
 else if (op == 2) printf("Voce escolheu B.\n");
 } while (op != 3);
 printf("Saindo...\n");
 return 0;
}

