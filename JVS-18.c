#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-18 - Login Simples");
 printf("\n*************************************************************\n");
 char usuario[50], senha[50];
 printf("Usuario: "); scanf("%s", usuario);
 printf("Senha: "); scanf("%s", senha);
 if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0)
 printf("Acesso permitido!\n");
 else
 printf("Acesso negado!\n");
 return 0;
}

