//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//20/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*5-ALGORITMO QUE LEIA TRES VALORES E ARMAZENEOS EM TRES VARIAVEIS COM O SEGUINTE NOME MAIOR, MENOR E INTER*/

#include<stdio.h>

void main (){
    //DECLARACAO DAS VARIAVEIS
    float num1;
    float num2;
    float num3;
    float maior;
    float menor;
    float inter;
    float temp;

    //ENTRADA DOS VALORES 
    printf("Digite o Valor 1 para verificar: \n");
        scanf("%f",&num1);
    printf("Digite o Valor 2 para verificar: \n");
        scanf("%f",&num2);
    printf("Digite o Valor 3 para verificar: \n");
        scanf("%f",&num3);

    //VERIFICACAO SE OS VALORES SAO IGUAIS E APRESENTACAO DA MENSAGEM
    if(num1 == num2 == num3){
        printf("Os numeros digitados sao iguais\n");
        return 0;
    //CASO NAO FOREM IGUAIS
    }else{
            //ARMAZENAMENTO DOS VALORES INICIAIS DE FORMA DESORDENADA
            maior=num1;
            inter=num2;
            menor=num3;

        //COMPARATIVO DOS VALORES PARA DEFINIR O MENOR O MAIOR E O INTERMEDIARIO
        if(menor>inter){
            temp=menor;
            menor=inter;
            inter=temp;
        }
        if(menor>maior){
            temp=menor;
            menor=maior;
            maior=temp;
        }
        if(inter>maior){
            temp=inter;
            inter=maior;
            maior=temp;
        }
    }
    //APRESENTACAO DOS VALORES PARA O USUARIO
    printf("O numero MAIOR e: %.f \nO MENOR: %.f \nE o INTERMEDIARIO: %.f \n\n", maior, menor, inter);
}