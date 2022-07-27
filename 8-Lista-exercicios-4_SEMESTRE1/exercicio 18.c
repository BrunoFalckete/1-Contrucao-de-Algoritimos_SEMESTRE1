//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//13/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*18- ALGORITMO QUE ESCREVA TODOS NUMEROS DECIMAIS FINITOS DE DUAS CASAS DE 0 A 100*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEL
    float numero = 0;
    float resultado;

    //LACO DE REPETICAO QUE DEFINE A CONDICAO
    while (numero <= 100){
        //INCREMETACAO DE 0.01 EM 0.01
        numero += 0.01;
        //APRESENTANDO O RESULTADO NA TELA
        printf("Numeros finitos de 0 a 100 com duas casas: %.2f \n" , numero);
    }
    
}