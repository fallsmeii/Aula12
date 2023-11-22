#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Garante que caracteres como ?ç? e acentuação sejam exibidos normalmente em nosso programa


int main (){
    setlocale(LC_ALL,"Portuguese_Brazil");

    system("clear");//limpar a tela
    int valor = 32;
    int novo = valor; //indicando que a variavel 'NOVO' guarda o mesmo conteudo da variavel 'VALOR' = 32 / NOVO = VALOR = 32

     
    /*Criamos uma variavel normal, 'NUM', que equivale a 2 
    Criamos desta vez uma variavel de ponteiro, 'PNUM', esta obtem o mesmo  ENDEREÇO de MEMÓRIA que a variavel num 
    Mais uma vez, outra variavel. 'XNUM', tem o mesmo endereço de memória que pnum 
    NUM = PNUM = XNUM = mesmo endereço de memória 
    Valor de XNUM = NUM = 2*/
    int num = 2;
    int* pnum = &num; // o & aponta para o endereço do ponteiro na memoria 
    // o pnum é a variavel dada ao ponteiro 
    int xnum = *pnum; //o * aponta o conteudo do valor do ponrteiro = 2, o xnum e o pnum estão na mesma posição de memória do num logo tem os mesmo valores

    printf("o valor é %d\n",valor); // %d indica que printf() deve colocar um inteiro na tela
    printf("a posição de memoria de valor é %p\n\n",&valor); //& apontando para a posição da memoria // %p é dizer ao printf() para interpretar o valor recebido pela função como um endereço - ponteiro

    printf("o valor de novo é %d\n",novo);
    printf("a posição de memoria de novo é %p\n\n",&novo);

    printf("o valor de num é %d\n",num);
    printf("a posição de memoria de num é %p\n\n",pnum);

    printf("o valor de xnum é %d\n",xnum);

    return 0;
}