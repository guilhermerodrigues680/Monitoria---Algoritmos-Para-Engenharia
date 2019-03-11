/*
    Este programa calcula a distancia entre
    dois pontos no plano cartesiano
    DICA: Para checar que os calculos estao
    corretos, ultilize a ferramenta:
    https://www.geogebra.org/classic
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    A seguinte funcao recebe 4 numeros reais
    que sao as coordenadas de dois pontos no plano cartesiano
    x1 e y1 = Coordenadas do primeiro ponto
    x2 e y2 = Coordenadas do segundo ponto
    A funcao devolve a distancia(comprimento) entre esses pontos
*/
float distancia(float x1, float y1, float x2, float y2)
{
    float distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return distancia;
}

/*
    A funcao principal pede que o usuario
    insira as coordenadas de dois pontos.
    Depois passa os valores para a funcao
    distancia e imprime na tela o resultado.
*/
int main()
{
    float xa = 0.0, ya=0.0, xb=0.0, yb=0.0;

    printf("\n==== Calculo da distancia entre dois pontos ====\n\n");

    printf("Digite a coordenada X do ponto \'A\': ");
    scanf("%f",&xa);
    printf("Digite a coordenada Y do ponto \'A\': ");
    scanf("%f",&ya);
    printf("Digite a coordenada X do ponto \'B\': ");
    scanf("%f",&xb);
    printf("Digite a coordenada Y do ponto \'B\': ");
    scanf("%f",&yb);

    printf("\nA distancia entre os pontos (%.2f,%.2f) e (%.2f,%.2f) e: %f \n",
           xa,ya,xb,yb,distancia(xa,ya,xb,yb));

    return 0;
}
