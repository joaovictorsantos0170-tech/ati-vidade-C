#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-49 - Pedir senha ate acertar");
 printf("\n*************************************************************\n");
 int senha;
 do {
 printf("Digite a senha: ");
 scanf("%d", &senha);
 if (senha != 1111) printf("Senha incorreta!\n");
 } while (senha != 1111);
 printf("Acesso liberado!\n");
 return 0;
}

