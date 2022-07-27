//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//20/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*2-ALGORITMO QUE DETERMINE SE UM NUMERO INTEIRO É POSITIMO, NEGATIVO OU ZERO*/

#include <stdio.h>

void main(){
    //DECLARACAO DA VARIAVEL
    int numero;

    //ENTRADA DO VALOR
    printf("Entre com um numero para verificacao (Positivo, Negativo ou Zero): ");
    scanf("%d" , &numero);
        //VERIFICACAO DO VALOR, SE 0 APRESENTA A MENSAGEM DE ZERO
        if(numero == 0){
            printf("O Numero e ZERO");
        //SE NAO, FAZ A VERIFICACAO DO VALOR SE POSITIVO OU NAO
        }else{
            //SE POSITIVO APRESENTA NA TELA
            if(numero > 0){
                 printf("O numero e POSITIVO");
            //SE NEGATIVO APRESENTA NA TELA
            }else{
                printf("O numero e NEGATIVO");
            }
        }
}