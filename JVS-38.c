#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-38 - Senha Correta");
 printf("\n*************************************************************\n");
 char senha[50];
 printf("Digite a senha: ");
 scanf("%s", senha);
 while (strcmp(senha, "1234") != 0) {
 printf("Senha incorreta! Tente novamente: ");
 scanf("%s", senha);
 }
 printf("Acesso liberado!\n");
 return 0;


}
