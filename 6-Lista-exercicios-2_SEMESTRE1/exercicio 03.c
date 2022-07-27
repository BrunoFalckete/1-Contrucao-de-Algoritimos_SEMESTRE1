//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//27/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*3- ALGORITMO QUE MOSTRE TODOS OS NUMEROS DIVISIVEIS POR 23 ENTRE 0 E 1000*/

#include <stdio.h>

    void main(){
        //DECLARACAO DE VARIAVEL
        int numero;
        int result;
        //ESCREVENDO NA TELA O ENUNCIADO
        printf("Numeros divisiveis por 23 ate 1000 sao: \n");
        //LACO QUE DEFINE O INICIO E FIM DA VARIAVEL
        for(numero = 23; numero <=1000; numero++){
            //CALCULAR OS NUMERO QUE SAO DIVISIVEIS
            result = numero % 23;
            //SE RESTAR 0 ESCREVERA NA TELA
            if (result == 0){
                printf("%d \n", numero);
            }            
        }        
    }