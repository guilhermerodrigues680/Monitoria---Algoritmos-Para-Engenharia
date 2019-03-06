/*
    Adaptado de:
    CRISTOVAO, Henrique Monteiro. Programacao - Licenciatura em Matematica - CEUNES/UFES.
    [S. l.], 1 jun. 2011. Disponivel em: http://programacao1.wikidot.com/exemplos1. Acesso em: 5 mar. 2019.

    De acordo com a idade verifica se o
    cidadao pode ou nao votar.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
      int idade;

      printf("Qual a sua idade? ");
      scanf("%d", &idade);

      if(idade >= 18 && idade <=70)
            printf("Voce deve votar!");
      else if(idade <= 15)
            printf("Nao pode votar.");
      else
            printf("Voto facultativo.");

      printf("\n\n");
      system("pause");
      return 0;
}
