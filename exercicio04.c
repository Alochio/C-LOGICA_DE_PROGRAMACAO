/*
    EXERCICIO REALIZADO SOMENTE PARA UTILIZAR UM COMANDO DE REPETIÇÃO
    DE MANEIRA ENCAIXADA, NESSE CASO, USAMOS UM WHILE DENTRO DE UM WHILE.
    ONDE PUDEMOS TAMBÉM TRABALHAR COM OPERAÇÕES, INCREMENTAÇÃO EM UM CONTADOR,
    ALÉM DE TRABALHAR COM UM CONDICIONAL DE PARADA, QUE FOI REALIZADO PELO 
    COMANDO IF.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    int contador, limite;
    contador = 0;
    limite = 10;

    while(contador <= limite){
        printf("\n");
        printf("Estamos no primeiro loop!\n");
        printf("contador = %d, limite = %d\n", contador, limite);
        limite = limite - 3;
        contador++;
        if(contador > 10)
            break;
        while(contador > limite){
            printf("\n");
            printf("Estamos no segundo loop!\n");
            printf("contador = %d, limite = %d\n", contador, limite);
            limite = limite + 2;
            contador++;
            if (contador > 10)
                break;
        }
    }

    return 0;
}