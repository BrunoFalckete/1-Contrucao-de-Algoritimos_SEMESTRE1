//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//19/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*2 faça um algoritmo que leia um numero inteiro e diga se este é positivo, negativo ou zero. utilize a 
sequencia de comandos se encadeados*/

#include <stdio.h>

void main(){

    //DECLARACAO DE VARIAVEL
    int numero;

    //ENTRADA DO VALOR DA VARIAVEL
    printf("Entre com um numero para verificacao (Positivo, Negativo ou Zero): ");
        scanf("%d" , &numero);
            //VERIFICACAO DO VALOR SE = A 0
            if(numero == 0){
                printf("O Numero e ZERO");
            //SE NAO FOR    
            }else{
                //VERIFICACAO SE POSITIVO
                if(numero > 0){
                    printf("O numero e POSITIVO");
                //VERIFICACAO SE NEGAVITO    
                }else{
                    printf("O numero e NEGATIVO");
                }
        }
}