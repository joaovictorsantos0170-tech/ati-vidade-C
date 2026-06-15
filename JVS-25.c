#include<stdlib.h>
#include<locale.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 printf("\n*************************************************************");
 printf("\n* Aluno: JOAO VICTOR LIMA DOS SANTOS - RA: 0026840");
 printf("\n* Programa JPA-25 - Notas e Aprovacao");
 printf("\n*************************************************************\n");
 float media;
 printf("Digite a media final: ");
 scanf("%f", &media);
 if (media >= 7.0) printf("Aprovado\n");
 else if (media >= 5.0) printf("Recuperacao\n");
 else printf("Reprovado\n");
 return 0;
}
