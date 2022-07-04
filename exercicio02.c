/*
    EXERCICIO SOMENTE PARA ANALIZAR COMO SÃO CRIADAS AS
    VARIAVEIS, COMO QUE SÃO SETADO OS VALORES E COMO IMPRIMIR
    O RESULTADO DE UMA OPERAÇÃO SIMPLES.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int anoNascimento, anoAtual, idade;
    anoNascimento = 1999;
    anoAtual = 2022;
    idade = anoAtual - anoNascimento;
    printf("A idade da pessoa e %d anos.", idade);

    return 0;
}