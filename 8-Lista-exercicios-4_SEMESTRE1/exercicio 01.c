//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//29/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*1- ALGORITMO QUE LEIA UM NUMERI E FACA A TABUADA DO NUMERO*/

#include <stdio.h>

    void main(){
        //DELCARACAO DE VARIAVEIS 
        int numero;
        int multiplicador;
        int resultado;
        //ENTRADA DE VALORES COM O ENUNCIADO
        printf("Entre com um numero (POSITIVO) para realizar a TABUADA: ");
            scanf("%d" , &numero);
        //DEFININDO O VALOR INICIAL DO CONTADOR DA MULTIPLICACAO
        multiplicador = 1;
        //INFORMACAO PARA O USUARIO
        printf("Segue a TABUADA do %d \n", numero);
        //LACO DE REPETICAO DEFINIDO ATE 10
        while(multiplicador <= 10){
            //CALCULO MATEMARICO
            resultado = numero * multiplicador;
            //APRESENTACAO DA TABUADA
            printf("%d X %d = %d \n" , multiplicador , numero , resultado );
            //ATUALIZACAO DO PARAMETRO DA TABUADA
            multiplicador++;
        }
   }