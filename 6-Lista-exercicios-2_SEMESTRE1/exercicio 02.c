//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//27/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*2- ALGORITMO QUE MOSTRE TODOS OS NUMEROS IMPARES ENTRE 1 E -1 MILHAO*/

#include <stdio.h>

    void main(){
        //DECLARACAO DE VARIAVEL
        int numero;
        int result;

        //ESCREVENDO NA TELA O ENUNCIADO
    	printf("Numero IMPARES de 1 ate -1.000.000\n");

        //LACO DE REPETICAO QUE VAI DETERMINAR O LIMITE
        for(numero = -1000000; numero <= 1; numero++){
            //CALCULANDO A DIVISAO E ARMAZENANDO NA VARIAVEL RESULT
            result = numero % 2;
            //SE RETORNAR -1 NA DIVISAO É IMPAR E NEGATIVO ENTAO ESCREVERA NA TELA    
            if(result == -1){
                printf("%d \n" , numero);
            }
        }
    }