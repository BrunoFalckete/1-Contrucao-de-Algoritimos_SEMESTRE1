//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//19/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*3 faça um algoritmo que datermine se um dado numero é par ou impar (utilize o operador resto: <dividendo>
resto:<divisor>, que retorna o resto da divisão inteir de <dividendo>/<divisor>)*/

#include <stdio.h>

void main(){
    //DECLARACAO DA VARIAVEL
    int numero;

    //ENTRADA DO VALOR DA VARIAVEL
    printf("Entre com o Numero para verificacao PAR ou IMPAR: ");
        scanf("%d" , &numero);
    //SE O VALOR DIVIDIDO 2 RESTANDO 0 = A PAR
    if(numero % 2 == 0){
        printf("Numero e PAR");
    //SE NAO RESTAR 0 = A IMPAR
    }else{
        printf("Numero e IMPAR");
    }
}