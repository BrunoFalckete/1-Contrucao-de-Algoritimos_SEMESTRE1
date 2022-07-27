//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//27/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*5- ALGORITMO QUE LEIA 11 NUMEROS DIGITADOS PELO USUARIO*/

#include <stdio.h>

void main(){
    //DECLARACAO DAS VARIAVEIS
    int numero[11];
    int posicao;
    //APRESENTA O ENUNCIADO NA TELA
    printf("Entre com os numeros para armazenar: \n");
    //DEFINE A POSICAO INCIAL DO LACO DE REPETICAO
    posicao = 0;
    //LACO DE REPETICAO COM LIMITE DEFINIDO, COM ENTRADA E ATUALIZACAO DA POSICAO
    while(posicao < 11){
        scanf("%d" , &numero[posicao]);
        posicao++;   
    }
    //DEFINE A POSICAO INCIAL DO LACO DE REPETICAO
    posicao = 1;
    //LACO DE REPETICAO COM LIMITE DEFINIDO, COM ENTRADA E ATUALIZACAO DA POSICAO
    while(posicao <= 11){
        printf("Posicao: %d Numero %d \n", posicao , numero[posicao-1]);
        posicao++;
    }
}