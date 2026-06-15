#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-59 - GPS Sem Mapa");
 printf("\n*************************************************************\n");
 char dir;
 printf("Digite a direcao (N/S/L/O): ");
 scanf(" %c", &dir);
 switch (dir) {
 case 'N': printf("Seguir para o Norte.\n"); break;
 case 'S': printf("Seguir para o Sul.\n"); break;
 case 'L': printf("Virar a Leste (Direita).\n"); break;
 case 'O': printf("Virar a Oeste (Esquerda).\n"); break;
 default: printf("Comando invalido! Pare o robo.\n");
 }
 return 0;
}

