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
    //ESCREVE O ENUNCIADO NA TELA
    printf("Entre com os numeros para armazenar: \n");
    
   //LACO DE REPETICAO PARA DEFINIR A POSICAO DE ENTRADA DENTRO DO VETOR
    for (posicao = 0; posicao < 11; posicao++){
        scanf("%d" , &numero[posicao]);
    }
    //LACO DE REPETICAO PARA IMPRIMIR AS ENTRADAS NAS POSICOES DO VETOR
    for (posicao = 1; posicao <= 11; posicao++){
        printf("Posicao: %d Numero %d \n", posicao , numero[posicao-1]);
    }
}