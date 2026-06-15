#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-58 - Calculadora de Bolso");
 printf("\n*************************************************************\n");
 float a, b;
 char op;
 printf("Digite: numero operador numero (ex: 10 + 5): ");
 scanf("%f %c %f", &a, &op, &b);
 switch (op) {
 case '+': printf("Resultado: %.2f\n", a + b); break;
 case '-': printf("Resultado: %.2f\n", a - b); break;
 case '*': printf("Resultado: %.2f\n", a * b); break;
 case '/':
 if (b != 0) printf("Resultado: %.2f\n", a / b);
 else printf("Divisao por zero!\n");
 break;
 default: printf("Operacao matematica nao reconhecida\n");
 }
 return 0;
}
