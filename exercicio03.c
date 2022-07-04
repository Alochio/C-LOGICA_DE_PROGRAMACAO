/*
    EXERCICIO REALIZADO SOMENTE PARA UTILIZAR UM POUCO DA LÓGICA DE PROGRAMAÇÃO
    ANALIZANDO O HORÁRIO DE INICIO DE UM FILME COM O HORÁRIO EM QUE O ESPECTADOR
    CHEGOU AO CINEMA, DANDO A ELE UM TEMPO LIMITE DE 30 MINUTOS DE ATRASO, CASO
    CONTRÁRIO, O MEMSO NÃO PODERÁ ASSISTIR AO FILME, E TAMBÉM INFORMAR SE O FILME
    AINDA NÃO COMEÇOU A SER EXIBIDO.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int inicioFilmeHora, iniFilmeMin, horaAtualHora, horaAtualMin;

    inicioFilmeHora = 20;
    iniFilmeMin = 30;
    horaAtualHora = 20;
    horaAtualMin = 25;

    if(inicioFilmeHora <= horaAtualHora && iniFilmeMin <= horaAtualMin){
        if(horaAtualMin <= iniFilmeMin + 30)
            printf("E permitida a entrada para assistir o filme!");
        else
            printf("Nao e permitida a entrada para assistir o filme!");
    }
    else
        printf("O filme nao esta sendo exibido!");
    
    return 0;
}