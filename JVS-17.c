#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-17 - Sensor do Parque Tematico");
 printf("\n*************************************************************\n");
 float altura;
 printf("Digite a altura em cm: ");
 scanf("%f", &altura);
 if (altura >= 140)
 printf("LUZ VERDE - Acesso liberado!\n");
 else
 printf("LUZ VERMELHA - Acesso barrado!\n");
 return 0;
}
