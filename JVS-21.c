#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-21 - Positivo ou Negativo");
 printf("\n*************************************************************\n");
 float n;
 printf("Digite um numero: ");
 scanf("%f", &n);
 if (n > 0) printf("Positivo (Lucro)\n");
 else if (n < 0) printf("Negativo (Prejuizo)\n");
 else printf("Zero\n");
 return 0;
}
