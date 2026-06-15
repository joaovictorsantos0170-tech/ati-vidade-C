#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-14 - Tipo de Triangulo");
 printf("\n*************************************************************\n");
 float a, b, c;
 printf("Digite os tres lados: ");
 scanf("%f %f %f", &a, &b, &c);
 if (a == b && b == c)
 printf("Triangulo Equilatero\n");
 else if (a == b || b == c || a == c)
 printf("Triangulo Isosceles\n");
 else
 printf("Triangulo Escaleno\n");
 return 0;
}

