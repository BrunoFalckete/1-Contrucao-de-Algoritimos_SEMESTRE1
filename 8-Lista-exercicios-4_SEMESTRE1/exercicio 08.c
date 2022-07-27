//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//04/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*8- ALGORITMO QUE LEIA 3 VALORES E IMPRIMA NA ORDEM DECRESCENTE*/

#include <stdio.h>

void main (){
    //DECLARACAO DAS VARIAVEIS
    float numero1;
    float numero2;
    float numero3;
    float terceiro;
    float primeiro;
    float segundo;
    float temporario;

    //ENTRADA DOS VALORES 
    printf("Digite o Valor 1 para verificar: ");
        scanf("%f",&numero1);
    printf("Digite o Valor 2 para verificar: ");
        scanf("%f",&numero2);
    printf("Digite o Valor 3 para verificar: ");
        scanf("%f",&numero3);

    //VERIFICACAO SE OS VALORES SAO IGUAIS E APRESENTACAO DA MENSAGEM
    if(numero1 == numero2 == numero3){
        printf("Os numeros digitados sao iguais\n");
        return 0;
    //CASO NAO FOREM IGUAIS
    }else{
            //ARMAZENAMENTO DOS VALORES INICIAIS DE FORMA DESORDENADA
            terceiro=numero1;
            segundo=numero2;
            primeiro=numero3;

        //COMPARATIVO DOS VALORES PARA DEFINIR O MENOR O MAIOR E O INTERMEDIARIO
        if(primeiro>segundo){
            temporario=primeiro;
            primeiro=segundo;
            segundo=temporario;
        }
        if(primeiro>terceiro){
            temporario=primeiro;
            primeiro=terceiro;
            terceiro=temporario;
        }
        if(segundo>terceiro){
            temporario=segundo;
            segundo=terceiro;
            terceiro=temporario;
        }
    }
    //APRESENTACAO DOS VALORES PARA O USUARIO
    printf("Do MAIOR para o MENOR \n %f \n %f \n %f", terceiro, segundo , primeiro);
}