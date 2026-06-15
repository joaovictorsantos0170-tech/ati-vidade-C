#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-57 - Central do Brinquedo Eletronico");
 printf("\n*************************************************************\n");
 char cor[20];
 printf("Digite a cor: ");
 scanf("%s", cor);
 if (strcmp(cor, "Verde") == 0)
 printf("Vamos brincar la fora!\n");
 else if (strcmp(cor, "Amarelo") == 0)
 printf("Estou ficando com soninho...\n");
 else if (strcmp(cor, "Vermelho") == 0)
 printf("Estou com fome, hora do lanche!\n");
 else
 printf("Cor desconhecida\n");
 return 0;
}

