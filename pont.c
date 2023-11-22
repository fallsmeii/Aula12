#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Garante que caracteres como ?�? e acentua��o sejam exibidos normalmente em nosso programa


int main (){
    setlocale(LC_ALL,"Portuguese_Brazil");

    system("clear");//limpar a tela
    int valor = 32;
    int novo = valor; //indicando que a variavel 'NOVO' guarda o mesmo conteudo da variavel 'VALOR' = 32 / NOVO = VALOR = 32

     
    /*Criamos uma variavel normal, 'NUM', que equivale a 2 
    Criamos desta vez uma variavel de ponteiro, 'PNUM', esta obtem o mesmo  ENDERE�O de MEM�RIA que a variavel num 
    Mais uma vez, outra variavel. 'XNUM', tem o mesmo endere�o de mem�ria que pnum 
    NUM = PNUM = XNUM = mesmo endere�o de mem�ria 
    Valor de XNUM = NUM = 2*/
    int num = 2;
    int* pnum = &num; // o & aponta para o endere�o do ponteiro na memoria 
    // o pnum � a variavel dada ao ponteiro 
    int xnum = *pnum; //o * aponta o conteudo do valor do ponrteiro = 2, o xnum e o pnum est�o na mesma posi��o de mem�ria do num logo tem os mesmo valores

    printf("o valor � %d\n",valor); // %d indica que printf() deve colocar um inteiro na tela
    printf("a posi��o de memoria de valor � %p\n\n",&valor); //& apontando para a posi��o da memoria // %p � dizer ao printf() para interpretar o valor recebido pela fun��o como um endere�o - ponteiro

    printf("o valor de novo � %d\n",novo);
    printf("a posi��o de memoria de novo � %p\n\n",&novo);

    printf("o valor de num � %d\n",num);
    printf("a posi��o de memoria de num � %p\n\n",pnum);

    printf("o valor de xnum � %d\n",xnum);

    return 0;
}