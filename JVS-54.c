#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-54 - Validar 1 a 5");
 printf("\n*************************************************************\n");
 int n;
 do {
 printf("Digite um nivel de 1 a 5: ");
 scanf("%d", &n);
 if (n < 1 || n > 5) printf("Invalido!\n");
 } while (n < 1 || n > 5);
 printf("Nivel escolhido: %d\n", n);
 return 0;
}
