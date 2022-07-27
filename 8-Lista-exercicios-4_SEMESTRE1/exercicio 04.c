//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//04/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*4- ALGORITMO QUE O USUARIO CALCULE O VALOR FUTURO CONSIDERANDO O VALOR PRESENTE, TAXA E PRAZO*/

#include <stdio.h>

void main(){
    //DECLARACAO DE VARIAVEL
    float valor_futuro;
    float valor_presente;
    float taxa_porcentagem;
    float taxa_decimal;
    float maturacao;

    //ENTRADA DE VALORES
    printf("Entre com os DADOS para o CALCULO VALOR FUTURO\n");
    printf("Entre com o VALOR PRESENTE: ");
        scanf("%f" , &valor_presente);

    printf("Entre com a TAXA em PORCENTAGEM ou EM DECIMAL: ");
        scanf("%f" , &taxa_porcentagem);
        //CONDICAO SE O USUARIO DIGITAR A PORCENTAGEM EM DECIMAL
        if (taxa_porcentagem < 1){
            //O ACRESCIMO DE UM A TAXA FAZ PARTE DA FORMULA
            taxa_decimal = 1 + taxa_porcentagem;
        //CONTRA CONDICAO SE O USUARIO DIGITAR EM PORCENTAGEM IRA CONVERTER
        }else{
            //O ACRESCIMO DE UM A TAXA FAZ PARTE DA FORMULA
            taxa_decimal = 1 + (taxa_porcentagem / 100);
        }
    
    printf("Entre com o prazo de MATURACAO: ");
        scanf("%f" , &maturacao);
    //CALCULO DA FORMA DE VALOR FUTURO (FUNCAO POW UTILIZADA PARA CALCULO DE UM NUMERO ELEVADO AO OUTRO)
    valor_futuro = valor_presente * (pow(taxa_decimal,maturacao));
    //APRESENTACAO DO VALOR FINAL
    printf("O VALOR FUTURO e: %f" , valor_futuro);
}