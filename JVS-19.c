#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-19 - Ordem Crescente");
 printf("\n*************************************************************\n");
 float a, b, c, tmp;
 printf("Digite tres numeros: ");
 scanf("%f %f %f", &a, &b, &c);
 if (a > b) { tmp=a; a=b; b=tmp; }
 if (b > c) { tmp=b; b=c; c=tmp; }
 if (a > b) { tmp=a; a=b; b=tmp; }
 printf("Ordem crescente: %.2f %.2f %.2f\n", a, b, c);
 return 0;
}
