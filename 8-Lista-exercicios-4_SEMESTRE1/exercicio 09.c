//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*9- ALGORITMO QUE CALCULE O RENDIMENTO DE UM INVESTIMENTO FEITO POR UM TEMPO X, SABENDO QUANTO A APLICACAO RENDE E SABENDO A INFLACAO DO PERIODO*/

#include <stdio.h>

void main(){
    //DECLARACAO DAS VARIAVEIS
    float investimento;
    int tempo;
    float inflacao;
    float rendimento;
    float rentabilidade;
    float valor_final;
    float lucro;

    //ENTRADA DOS VALORES PELO USUARIO
    printf("Entre com os valores a seguir para o calculo: \n");
    printf("Entre com o valor do investimento: ");
        scanf("%f" , &investimento);
    printf("Entre com o tempo em meses: ");
        scanf("%d" , &tempo);
    printf("Entre com a inflacao: %% ");
        scanf("%f" , &inflacao);
    printf("Entre com o rendimento: %% ");
        scanf("%f" , &rendimento);

    //CONVERSAO DE PORCENTAGEM PARA DECIMAL
    if(inflacao > 1){
        inflacao = inflacao / 100;
    }
        if(rendimento > 1){
        rendimento = rendimento / 100;
    }

    //CALCULO DA RENTABILIDADE PARA USO NO OUTRO CALCULO E APRESENTACAO NA TELA DO RESULTADO
    rentabilidade = (1 + rendimento) / (1 + inflacao) - 1 ;
    rentabilidade = rentabilidade * 100;
    printf("A Rentabilidade do Ano foi: %% %.1f \n" , rentabilidade );

    //CALCULO DO RENDIMENTO DO VALOR E APRESENTACAO NA TELA DO RESULTADO
    valor_final = investimento * ((1 + rentabilidade) * tempo);
    printf("O valor final e de: R$ %.f \n" , valor_final);
    //CALCULO PARA DEMONSTRAR O LUCRO E APRESENTACAO NA TELA DO RESULTADO
    lucro = valor_final - investimento;
    printf("O lucro e de: R$ %.f \n" , lucro);
    //CALCULO PARA MOSTRAR O LUCRO POR MES E APRESENTACAO NA TELA DO RESULTADO
    lucro = lucro / tempo;
    printf("O lucro por mes foi de: R$ %.2f" , lucro);

}