/*
    Este programa recebe 3 valores INTEIROS(int)) do
    usuario e calcula media entre eles.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    float media = 0;

    printf("Insira o 1 valor: ");
    scanf("%d",&a);
    printf("Insira o 2 valor: ");
    scanf("%d",&b);
    printf("Insira o 3 valor: ");
    scanf("%d",&c);

    //media = (a+b+c)/3; //Problema
    media = (float)(a+b+c)/3; //Solucao Explicita

    printf("A media e: %f \n",media);

    return 0;
}
