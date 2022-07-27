//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//04/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*3- ALGORITMO QUE LEIA UM NUMERO POSITIVO E CALCULE O QUADRADO DESTE NUMERO SE O NUMERO FOR NEGATIVO FINALIZA O PROGRAMA*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEIS
    int numero;
    int resultado;
    //ENTRADA DE VALORES
    printf("Entre com o Numero positivo para o calculo do quadrado: ");
        scanf("%d" , &numero);
    //CONDICAO PARA VERIFICAR SE E POSITIVO OU NAO
    if(numero < 0){
        //SE NAO FOR FINALIZA O CODIGO
        printf("ENTRADA INVALIDA");
    //CONDICAO CONTRARIA
    }else{
        //CALCULO MATEMATICO
        resultado = numero * numero;
        //APRESENTACAO DO RESULTADO
        printf("O quadrado de %d e: %d", numero , resultado);
    }
}