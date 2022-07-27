//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//02/12/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*
1- algoritimo que leia em 3 vetores de entrada as notas do pdf com os alunos e nota,
e de o resultado da media em um vetor de saida

2- algoritimo que com o resultado da media de a situacao do aluno (media maior que 6)

3- associar a media e situacao com o nome do estudante
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    void main(){

        //DECLARACAO DE VARIAVEIS
        int contador;
        int contador2 = 2;//VARIAVEL QUE DEFINE O CONTADOR DOS LACOS DE REPETICAO
        char alunos[contador2][100];
        float notas1[contador2];
        float notas2[contador2];
        float notas3[contador2];
        float media[contador2];
        float nota_aux;

        //MENSAGEM INICIAL
        printf("ENTRE COM OS DADOS:\n");

        //LACO DE REPETICAO PARA RECEBER OS ALUNOS
        for (contador = 0; contador <= contador2; contador++){
            printf("ENTER COM OS ALUNOS: ");
                //ENTRADA ATRAVES DE FGETS PARA RECEBER ATE O ENTER NO TECLADO
                fgets(alunos[contador],1000,stdin);
        }

        //LACO DE REPETICAO PARA ENTRADAS DAS PRIMEIRAS NOTAS
        for (contador = 0; contador <= contador2; contador++){
            nota_aux = -1;  /*INICIALIZANDO A VARIAVEL AUXILIAR PARA ENTRADA DE DADOS DE FORMA
             //NEGATIVA PARA FORCAR ENTRADA NO LACO DE REPETICAO E VERIFICAO DE DADOS*/

            /*LACO DE REPETICAO COM CONDICIONAL QUE CONTEM OPERADOR LOGICO PARA
            DUAS SITUACOES DISTINTAS DE NOTAS ERRADAS, SE NOTA MENOR QUE 0 OU MAIOR
            QUE 10 PARAMETROS INCORRETOS*/
            while((nota_aux < 0) || (nota_aux > 10)){
            printf("ENTRE COM A PRIMEIRA NOTA: ");
                scanf("%f" , &nota_aux);//ENTRADA EM UMA VARIAVEL COMUM PARA ARMAZENAR NO VETOR DEPOIS
                if((nota_aux < 0) || (nota_aux > 10)){
                    printf("PARAMETROS INVALIDOS, ENTRE COM A NOTA NOVAMENTE !! \n");
                }
            }
        //ALOCANDO O VALOR DA VARIAVEL AUXILIAR NO VETOR DE NOTAS1
        notas1[contador] = nota_aux;
        }

        
        //LACO DE REPETICAO PARA ENTRADAS DAS PRIMEIRAS NOTAS
        for (contador = 0; contador <= contador2; contador++){
            nota_aux = -1;  /*INICIALIZANDO A VARIAVEL AUXILIAR PARA ENTRADA DE DADOS DE FORMA
             NEGATIVA PARA FORCAR ENTRADA NO LACO DE REPETICAO E VERIFICAO DE DADOS*/

            /*LACO DE REPETICAO COM CONDICIONAL QUE CONTEM OPERADOR LOGICO PARA
            DUAS SITUACOES DISTINTAS DE NOTAS ERRADAS, SE NOTA MENOR QUE 0 OU MAIOR
            QUE 10 PARAMETROS INCORRETOS*/
            while((nota_aux < 0) || (nota_aux > 10)){
            printf("ENTRE COM A SEGUNDA NOTA: ");
                scanf("%f" , &nota_aux);//ENTRADA EM UMA VARIAVEL COMUM PARA ARMAZENAR NO VETOR DEPOIS
                if((nota_aux < 0) || (nota_aux > 10)){
                    printf("PARAMETROS INVALIDOS, ENTRE COM A NOTA NOVAMENTE !! \n");
                }
            }
        //ALOCANDO O VALOR DA VARIAVEL AUXILIAR NO VETOR DE NOTAS2
        notas2[contador] = nota_aux;
        }

        //LACO DE REPETICAO PARA ENTRADAS DAS PRIMEIRAS NOTAS
        for (contador = 0; contador <= contador2; contador++){
            nota_aux = -1;  /*INICIALIZANDO A VARIAVEL AUXILIAR PARA ENTRADA DE DADOS DE FORMA
             NEGATIVA PARA FORCAR ENTRADA NO LACO DE REPETICAO E VERIFICAO DE DADOS*/

            /*LACO DE REPETICAO COM CONDICIONAL QUE CONTEM OPERADOR LOGICO PARA
            DUAS SITUACOES DISTINTAS DE NOTAS ERRADAS, SE NOTA MENOR QUE 0 OU MAIOR
            QUE 10 PARAMETROS INCORRETOS*/
            while((nota_aux < 0) || (nota_aux > 10)){
            printf("ENTRE COM A TERCEIRA NOTA: ");
                scanf("%f" , &nota_aux);//ENTRADA EM UMA VARIAVEL COMUM PARA ARMAZENAR NO VETOR DEPOIS
                if((nota_aux < 0) || (nota_aux > 10)){
                    printf("PARAMETROS INVALIDOS, ENTRE COM A NOTA NOVAMENTE !! \n");
                }
            }
        //ALOCANDO O VALOR DA VARIAVEL AUXILIAR NO VETOR DE NOTAS3
        notas3[contador] = nota_aux;

        }

        //LACO DE REPETICAO PARA CALCULAR, ARMAZENAR A MEDIA E VERIFICAR A SITUACAO DO 
        for (contador = 0; contador <= contador2; contador++){

            float calculo = 0; //INICIALIZANDO A VARIAVEL AUXILIAR DO CALCULO

            //VARIAVEL AUXILIAR RECEBENDO A SOMATORIA DAS NOTAS
            calculo =  (notas1[contador] + notas2[contador] + notas3[contador]);
            //VETOR RECEBENDO A SOMATORIA DIVIDINDO PELA QUANTIDADE DE NOTAS
            media[contador] = calculo / 3;

            //CONDICIONAL PARA VERIFICAR SE A MEDIA E SUFICIENTE PARA PASSAR
            if(media[contador] > 6){
                printf("MEDIA DO(A): %s" , alunos[contador]);//APRESENTANDO O ALUNO RESPECTIVO DAS NOTAS
                printf("%.2f - APROVADO \n" , media[contador]);//APRESENTANDO A MEDIA E A CONDICAO DO ALUNO
            }else{
                printf("MEDIA DO(A): %s" , alunos[contador]);//APRESENTANDO O ALUNO RESPECTIVO DAS NOTAS
                printf("%.2f - REPROVADO \n" , media[contador]);//APRESENTANDO A MEDIA E A CONDICAO DO ALUNO
            }
        }
    }