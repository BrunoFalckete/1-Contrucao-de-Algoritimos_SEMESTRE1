//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//19/09/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*5 faça um algoritmo que leia as respostas de três questões de multipla escolha (a, b, c, d). em seguida, 
leia o gabarito dessas respostas, ou seja, as respostas corretas. Depois, compare as respostas dadas com as 
do gabarito e indique quantas respostas estão corretas*/

#include <stdio.h>

void main(){
    //DECLARACAO DAS VARIAVEIS
    char resposta1;
    char resposta2;
    char resposta3;
    char gabarito1;
    char gabarito2;
    char gabarito3;
    int certas;
    int erradas;

    //ENTRADA DOS VALORES INICIAIS DAS VARIAVEIS
    certas = 0;
    erradas = 0;

    //ENTRADA DAS RESPOSTAS
    printf("Entre com as respostas: \n");
    printf("Pergunta 1: (a)(b)(c)(d): \n");
        scanf("%c" , &resposta1);
        //LIMPEZA DE CACHE DA VARIAVEL
        getchar();

    printf("Pergunta 2: (a)(b)(c)(d): \n");
        scanf("%c" , &resposta2);
        //LIMPEZA DE CACHE DA VARIAVEL
        getchar();

    printf("Pergunta 3: (a)(b)(c)(d): \n");
        scanf("%c" , &resposta3);
        //LIMPEZA DE CACHE DA VARIAVEL
        getchar();

    //ENTRADA DOS GABARITOS
    printf("Entre com o Gabarito: \n");
    printf("Gabarito Pergunta 1: (a)(b)(c)(d): \n");
        scanf("%c" , &gabarito1 );
        //LIMPEZA DE CACHE DA VARIAVEL
        getchar();

    printf("Gabarito Pergunta 2: (a)(b)(c)(d): \n");
        scanf("%c" , &gabarito2);
        //LIMPEZA DE CACHE DA VARIAVEL
        getchar();

    printf("Gabarito Pergunta 3: (a)(b)(c)(d): \n");
       scanf("%c" , &gabarito3);
       //LIMPEZA DE CACHE DA VARIAVEL
       getchar();

    //VERIFICACAO SE A RESPOSTA1 CONFERE COM O GABARITO1
    //SE FOR IGUAL
    if (resposta1 == gabarito1){
        printf("A resposta da Pergunta 1 esta correta !!\n");
            //INSERCAO DE UM NOVO VALOR NO CONTATOR DE RESPOSTAS
            certas = certas + 1;
    //SE NAO FOR
    }else{
        printf("A resposta da Pergunta 1 esta errada =[\n");
            //INSERCAO DE UM NOVO VALOR NO CONTATOR DE RESPOSTAS
            erradas = erradas + 1;
    }
    //SE FOR IGUAL
    if (resposta2 == gabarito2){    
        printf("A resposta da Pergunta 2 esta correta !!\n");
            //INSERCAO DE UM NOVO VALOR NO CONTATOR DE RESPOSTAS
            certas = certas + 1;
    //SE FOR IGUAL
    }else{
        printf("A resposta da Pergunta 2 esta errada =[\n");
            //INSERCAO DE UM NOVO VALOR NO CONTATOR DE RESPOSTAS
            erradas = erradas + 1;
    }
    //SE FOR IGUAL
    if (resposta3 == gabarito3){    
        printf("A resposta da Pergunta 3 esta correta !!\n");
            //INSERCAO DE UM NOVO VALOR NO CONTATOR DE RESPOSTAS
            certas = certas + 1;
    //SE FOR IGUAL
    }else{
        printf("A resposta da Pergunta 3 esta errada =[\n\n");
            //INSERCAO DE UM NOVO VALOR NO CONTATOR DE RESPOSTAS
            erradas = erradas + 1;
    }
    //APRESENTACAO DO CONTADOR DE RESPOSTAS
    printf("Total respostas CERTAS: %d \n" , certas);
    printf("Total respostas ERRADAS: %d \n" , erradas);
}