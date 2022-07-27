//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//13/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*17- ALGORITMO QUE TRANSFORME BINARIO PARA DECIMAL*/

#include <stdio.h>
#include <math.h>

void main(){
    //DECLARACAO DE VARIAVEL
    long long int numero ;
    long long int contador;
    long long int temporario;
    long long int convertido = 0;
    long long int numero_antigo;
    //ENTRADA DO VALOR PELO USUARIO
    printf("Entre com o numero em Binario: ");
	scanf("%lld", &numero);
    //ARMAZENAMENTO DO NUMERO PARA MOSTRAR DEPOIS
    numero_antigo = numero;

    //LACO DE REPETICAO PARA CORRER AS POSICOES
	for (contador = 0; contador < 15; contador++) {
        //CALCULO PARA CONVERTER DE BINARIO PARA DECIMAL
		temporario = numero - ((numero / 10)*10);
		numero = numero / 10;
		convertido = convertido + temporario * pow(2,contador);
	}
    //MOSTRAR O RESULTADO NA TELA
	printf("O numero BINARIO %lld corresponde ao numero %lld em DECIMAL\n", numero_antigo , convertido);
}