#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-23 - Maior de dois numeros");
 printf("\n*************************************************************\n");
 float a, b;
 printf("Digite dois numeros: ");
 scanf("%f %f", &a, &b);
 if (a > b) printf("%.2f e o maior.\n", a);
 else if (b > a) printf("%.2f e o maior.\n", b);
 else printf("Os numeros sao iguais.\n");
 return 0;
}

