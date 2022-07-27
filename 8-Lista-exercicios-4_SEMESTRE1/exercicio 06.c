//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//04/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*6- ALGORITMO QUE LEIA O PRECO DA GASOLINA E O VALOR PAGO E EXIBA QUANTOS LITROS CONSEGUIRA ABASTECER*/

#include <stdio.h>

void main(){
    //DECLARACAO DAS VARIAVEIS
    float valor_gasolina;
    float valor_pago;
    float litros;

    //APRESENTACAO DO ENUNCIADO
    printf("Entre com os Valores para calcular a Litragem abastecida? \n");
    //ENTRADA DOS VALORES
    printf("Entre com o valor da GASOLINA R$: ");
        scanf("%f" , &valor_gasolina);
    printf("Entre com o valor PAGO R$: ");
        scanf("%f" , &valor_pago);
    //CALCULO MATEMATICO
    litros = valor_pago / valor_gasolina;
    //APRESENTACAO DO RESULTADO
    printf("PAGO R$: %f com a GASOLINA a R$: %f , Voce colocou: %f LITROS" , valor_pago , valor_gasolina , litros);
}