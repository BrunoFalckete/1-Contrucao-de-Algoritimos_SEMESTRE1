//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//19/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*7 dado um ano d.c, indique se este é um ano bissexto ou não. considere que para o ano ser bissexto basta que 
seja divisivel por 400. caso contrário este precisará ser divisivel por 4 e não ser divisivel por 100*/

#include <stdio.h>

void main(){
    //DECLARACAO DA VARIAVEL
    int ano;

    //ENTRADA DO VALOR DA VARIAVEL
    printf("Entre com o ano (depois de cristo) para verificacao: ");
        scanf("%d" , &ano);

    //SE O VALOR FOR MENOR QUE 0
    if(ano < 0){
        //MENSAGEM DE ERRO
        printf("Entre com um ano Depois de Cristo");
        //SOLICITACAO DE UM NOVO VALOR DA VARIAVEL
        printf("Entre com o ano (depois de cristo) para verificacao: ");
            scanf("%d" , &ano);
        //SE O RESULTADO DA VARIAVEL RESULTAR 0 O ANO E BISSEXTO
        if((ano%4==0) && ((ano%400==0)||(ano%100!=0))){
            printf("ANO BISSEXTO");
        //SE NAO FOR ANO NORMAL
        }else{
            printf("ANO NORMAL");
        }
    //SE O VALOR FOR MAIOR QUE ZERO VERIFICACAO DIRETA             
    }else{
        //SE O RESULTADO DA VARIAVEL RESULTAR 0 O ANO E BISSEXTO
        if((ano%4==0) && ((ano%400==0)||(ano%100!=0))){
            printf("ANO BISSEXTO");
        //SE NAO FOR ANO NORMAL
        }else{
            printf("ANO NORMAL");
        }
    }
}