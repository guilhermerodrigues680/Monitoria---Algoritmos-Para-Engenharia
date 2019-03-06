/*
    Adaptado de:
    CRISTOVAO, Henrique Monteiro. Programacao - Licenciatura em Matematica - CEUNES/UFES.
    [S. l.], 1 jun. 2011. Disponivel em: http://programacao1.wikidot.com/exemplos1. Acesso em: 5 mar. 2019.

    Calcula media de duas notas e verifica aprovacao
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
   float nota1, nota2, media;

   printf("Digite a primeira nota: ");
   scanf("%f",&nota1);
   printf("\nDigite a segunda nota: ");
   scanf("%f",&nota2);

   media = (nota1 + nota2)/2;
   printf("\nMedia = %.2f", media);

   if(media >= 6.0)
       printf(" - Aprovado");
   else // se a media e menor a 6.0
       printf(" - Prova final");

   printf("\n\n"); // salta 2 linhas em branco
   system("pause"); // nao permite que a janela do prompt feche
   return 0;
}
