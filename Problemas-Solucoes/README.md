# Problemas / Soluções

Esta pasta contém códigos com erros que foram ou não compilados.
### 1 - Divisão de inteiros
#####  O PROBLEMA ![Sign delete Icon](http://icons.iconarchive.com/icons/paomedia/small-n-flat/24/sign-delete-icon.png)
Ao executar o programa da pasta *'1 - Divisão de inteiros'* e inserir estes valores
```
Insira o 1 valor: 2
Insira o 2 valor: 2
Insira o 3 valor: 3
```
obtemos o seguinte retorno:
```
A media e: 2.000000
```
O resultado está **errado**, pois a media entre 2 , 2 e 3 é 2,333333:

![Calculo da media](https://latex.codecogs.com/gif.latex?\frac{2&plus;2&plus;3}{3}&space;=&space;2,333333)

Isso acontece devido a ambos os operandos da operação aritmética serem do mesmo tipo, logo o resultado terá o mesmo tipo que no caso é **int**, ou seja, é um numero que não possui casas decimais.

Apesar da variável media ser do tipo **float**(real) e armazenar números fracionários, a operação passa para ela o resultado calculado como **int**(inteiro) e já **truncado**.

*OBS:* O valor apresentado **não é arredondado** e sim **truncado**. Isso quer dizer que o programa elimina toda a parte fracionaria do numero sem arredondar. 
- Ex: **2,89** 
  - Arredondado = **3**
  - Truncado = **2**
#####  A SOLUÇÃO ![Sign check Icon](http://icons.iconarchive.com/icons/paomedia/small-n-flat/24/sign-check-icon.png)
Existem varias maneiras, porém a **3ª maneira é a mais explicita**:
1. **Substitui o 3 por 3.0** - A diferença está que 3 é **int**(inteiro), mas 3.0 é **float**(real), assim a operação retorna um valor com a precisão do tipo mais preciso que no caso é **float**.
```c
    media = (a+b+c)/3;
    //Substituir por:
    media = (a+b+c)/3.0;
```

2. **Multiplicar um dos operandos por 1.0** - Aqui você força uma operação com um numero **float**(real) assim a resposta será **float**, como explicando na solução anterior.
```c
    media = (a+b+c)/3;
    //Substituir por:
    media = ((a+b+c)*1.0)/3;
    //Ou:
    media = (a+b+c)/(3*1.0);
```
3. **Usando o *cast* de tipo 'float'** - Com esse operador a expressão é obrigada a te retornar um valor com o mesmo tipo do operador cast. No nosso caso um **float**. Esta é a maneira mais explicita, pois fica claro que a expressão retornará um numero real (**float**).
```c
    media = (a+b+c)/3;
    //Substituir por:
    media = (float)(a+b+c)/3;
```
4. **Alterar todos os tipos das variáveis envolvidas no calculo para float**. - Esta maneira é uma solução, só que não atenderá ao objetivo do nosso programa que é obter a **media de 3 números inteiros.**
```c
    int a = 0;
    int b = 0;
    int c = 0;
    //Substituir por:
    float a = 0;
    float b = 0;
    float c = 0;
    //Nao esquecendo de modificar o 'scanf()'
    //De:
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    //Para:
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
```
- Com qualquer uma das sugestões acima, o programa irá funcionar corretamente e nos dará o seguinte retorno:
```
Insira o 1 valor: 2
Insira o 2 valor: 2
Insira o 3 valor: 3
A media e: 2.333333
```
#####  Referências
NICOLINI DELGADO, Armando Luiz. **21 Mais sobre tipos: conversão implícita e explícita**. [_S. l._], 21 out. 2013. Disponível em: http://www.inf.ufpr.br/cursos/ci067/Docs/NotasAula/notas-21_Mais_sobre_tipos_convers.html. Acesso em: 8 mar. 2019.

*Formatação:* https://stackedit.io/app#

---
