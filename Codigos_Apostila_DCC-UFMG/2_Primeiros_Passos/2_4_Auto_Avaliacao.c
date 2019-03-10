#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y)
{
    return (x+y);
}

int main()
{
    int a=0;
    int b=0;
    int res = 0;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d",&a,&b);

    res = soma(a,b);

    printf("A soma e: %d \n",res);

    return 0;
}
