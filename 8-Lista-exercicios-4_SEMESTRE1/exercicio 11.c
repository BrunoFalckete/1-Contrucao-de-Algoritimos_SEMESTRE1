//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*11- ALGORITMO QUE ESCREVA TODOS NUMEROS IMPARES DE 0 A 300 MENOS OS DIVISIVEIS POR 3*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEL
    int numero;
    int impares;
    int resultado;

    //LACO DE REPETICAO QUE DEFINE O INICIO E O FIM DA CONDICAO
    for(numero = 0; numero <= 300; numero++){
        //CALCULO PARA VERIFICAR SE E IMPAR
        impares = numero % 2;
        //SE FOR IMPARA ENTRARA NA OUTRA CONDICAO
        if(impares == 1){  
            //CONDICAO PARA IMPRIMIR NA TELA, NUMERO IMPAR NAO PODE SER DIVISIVEL POR 3
            if(resultado != 0){
                printf("Numeror impar NAO divisivel por 3: %d \n" , numero);
            }
        }
    }
}