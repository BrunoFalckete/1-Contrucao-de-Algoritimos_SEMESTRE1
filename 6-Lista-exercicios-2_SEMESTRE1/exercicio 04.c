//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//27/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*4- ALGORITMO QUE MOSTRE TODOS OS NUMEROS PRIMOS ENTRE 0 E 100*/

#include <stdio.h>

void main(){
    //DECLARACAO DAS VARIAVEIS
    int numero;
    int divisor;
    int contador;

    //ESCREVENDO O ENUNCIADO 
    printf("Numeros PRIMOS de 0 a 100 \n");
            
        //LACO QUE DEFINI O INICIO E FIM DA REPETICAO
        for (numero = 1; numero <= 100; numero++){
            //DEFININDO O VALOR INICIAL DO CONTADOR
            contador = 0;
            //LACO QUE DEFINI O DIVISOR, QUE IRA FAZER A DIVISAO POR 1 ATE O NUMERO DEFINIDO ACIMA
            for(divisor = 1; divisor <= numero; divisor++){
                //SE O NUMERO FOR DIVISIVEL PELO DIVISOR RESTANTO 0 SOMARA 1 NA VARIAVEL CONTADOR
                if(numero % divisor == 0){
                    contador++;
                }
            }
            //SE O CONTADOR RETORNAR 2 DIVISOES RESTANDO 0, ESCREVERA QUE O NUMERO É PRIMO
            if(contador == 2){
                printf("%d \n" , numero);
            }
        }
}