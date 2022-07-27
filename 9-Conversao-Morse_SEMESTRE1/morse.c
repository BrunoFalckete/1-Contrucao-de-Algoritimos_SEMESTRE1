//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//12/10/2021
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

/*FAZER CONVERSAO DE MORSE PARA LETRA E LETRA PARA MORSE*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  char morse[5], caractere; 
  int opcao;

  //usuário digita a operação que deseja realizar
  printf("Digite 1 para codificar e 2 para decodificar: ");
    scanf("%i", &opcao);

    //Transforma a letra ou número em código morse
    if (opcao == 1){
    printf("Informe o caractere a ser codificado: ");
    scanf("%s", &caractere);

      if (caractere == 'a' || caractere == 'A'){
        printf("Código: .-");
      }
      if (caractere == 'b' || caractere == 'B'){
        printf("Código: -...");
      }
      if (caractere == 'c' || caractere == 'C'){
        printf("Código: -.-.");
      }
      if (caractere == 'd' || caractere == 'D'){
        printf("Código: -..");
      }
      if (caractere == 'e' || caractere == 'E'){
        printf("Código: .");
      }
      if (caractere == 'f' || caractere == 'F'){
        printf("Código: ..-.");
      }
      if (caractere == 'g' || caractere == 'G'){
        printf("Código: --.");
      }
      if (caractere == 'h' || caractere == 'H'){
        printf("Código: ....");
      }
      if (caractere == 'i' || caractere == 'I'){
        printf("Código: ..");
      }
      if (caractere == 'j' || caractere == 'J'){
        printf("Código: .---");
      }
      if (caractere == 'k' || caractere == 'K'){
        printf("Código: -.-");
      }
      if (caractere == 'l' || caractere == 'L'){
        printf("Código: .-..");
      }
      if (caractere == 'm' || caractere == 'M'){
        printf("Código: --");
      }
      if (caractere == 'n' || caractere == 'N'){
        printf("Código: -.");
      }
      if (caractere == 'o' || caractere == 'O'){
        printf("Código: ---");
      }
      if (caractere == 'p' || caractere == 'P'){
        printf("Código: .--.");
      }
      if (caractere == 'q' || caractere == 'Q'){
        printf("Código: --.-");
      }
      if (caractere == 'r' || caractere == 'R'){
        printf("Código: .-.");
      }
      if (caractere == 's' || caractere == 'S'){
        printf("Código: ...");
      }
      if (caractere == 't' || caractere == 'T'){
        printf("Código: -");
      }
      if (caractere == 'u' || caractere == 'U'){
        printf("Código: ..-");
      }
      if (caractere == 'v' || caractere == 'V'){
        printf("Código: ...-");
      }
      if (caractere == 'w' || caractere == 'W'){
        printf("Código: .--");
      }
      if (caractere == 'x' || caractere == 'X'){
        printf("Código: -..-");
      }
      if (caractere == 'y' || caractere == 'Y'){
        printf("Código: -.--");
      }
      if (caractere == 'z' || caractere == 'Z'){
        printf("Código: --..");
      } 
      if (caractere == '0'){
        printf("Código: -----");
      } 
      if (caractere == '1'){
        printf("Código: .----");
      } 
      if (caractere == '2'){
        printf("Código: ..---");
      } 
      if (caractere == '3'){
        printf("Código: ...--");
      } 
      if (caractere == '4'){
        printf("Código: ....-");
      } 
      if (caractere == '5'){
        printf("Código: .....");
      } 
      if (caractere == '6'){
        printf("Código: -....");
      } 
      if (caractere == '7'){
        printf("Código: --...");
      } 
      if (caractere == '8'){
        printf("Código: ---..");
      } 
      if (caractere == '9'){
        printf("Código: ----.");
      } 

    }
    
    //Transformar o Código Morse em letra ou número
    if (opcao == 2){
    printf("Informe o código a ser decodificado: ");
    scanf("%s", morse);
    
      if (morse[0] == '.' && morse[1] == '-' && morse[2] == 0 && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: A");
      }
      if (morse[0] == '-' && morse[1] == '.' && morse[2] == '.' && morse[3] == '.' && morse[4] == 0){ 
        printf("Letra: B");
      }
      if (morse[0] == '-' && morse[1] == '.' && morse[2] == '-' && morse[3] == '.' && morse[4] == 0){ 
        printf("Letra: C");
      }
      if (morse[0] == '-' && morse[1] == '.' && morse[2] == '.' && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: D");
      }
      if (morse[0] == '.' && morse[1] == 0 && morse[2] == 0 && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: E");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '-' && morse[3] == '.' && morse[4] == 0){ 
        printf("Letra: F");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == '.' && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: G");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '.' && morse[3] == '.' && morse[4] == 0){ 
        printf("Letra: H");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == 0 && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: I");
      }
      if (morse[0] == '.' && morse[1] == '-' && morse[2] == '-' && morse[3] == '-' && morse[4] == 0){ 
        printf("Letra: J");
      }
      if (morse[0] == '-' && morse[1] == '.' && morse[2] == '-' && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: K");
      }
      if (morse[0] == '.' && morse[1] == '-' && morse[2] == '.' && morse[3] == '.' && morse[4] == 0){ 
        printf("Letra: L");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == 0 && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: M");
      }
      if (morse[0] == '-' && morse[1] == '.' && morse[2] == 0 && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: N");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == '-' && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: O");
      }
      if (morse[0] == '.' && morse[1] == '-' && morse[2] == '-' && morse[3] == '.' && morse[4] == 0){ 
        printf("Letra: P");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == '.' && morse[3] == '-' && morse[4] == 0){ 
        printf("Letra: Q");
      }
      if (morse[0] == '.' && morse[1] == '-' && morse[2] == '.' && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: R");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '.' && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: S");
      }
      if (morse[0] == '-' && morse[1] == 0 && morse[2] == 0 && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: T");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '-' && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: U");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '.' && morse[3] == '-' && morse[4] == 0){ 
        printf("Letra: V");
      }
      if (morse[0] == '.' && morse[1] == '-' && morse[2] == '-' && morse[3] == 0 && morse[4] == 0){ 
        printf("Letra: W");
      }
      if (morse[0] == '-' && morse[1] == '.' && morse[2] == '.' && morse[3] == '-' && morse[4] == 0){ 
        printf("Letra: X");
      }
      if (morse[0] == '-' && morse[1] == '.' && morse[2] == '-' && morse[3] == '-' && morse[4] == 0){ 
        printf("Letra: Y");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == '.' && morse[3] == '.' && morse[4] == 0){ 
        printf("Letra: Z");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == '-' && morse[3] == '-' && morse[4] == '-'){ 
        printf("Número: 0");
      }
      if (morse[0] == '.' && morse[1] == '-' && morse[2] == '-' && morse[3] == '-' && morse[4] == '-'){ 
        printf("Número: 1");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '-' && morse[3] == '-' && morse[4] == '-'){ 
        printf("Número: 2");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '.' && morse[3] == '-' && morse[4] == '-'){ 
        printf("Número: 3");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '.' && morse[3] == '.' && morse[4] == '-'){ 
        printf("Número: 4");
      }
      if (morse[0] == '.' && morse[1] == '.' && morse[2] == '.' && morse[3] == '.' && morse[4] == '.'){ 
        printf("Número: 5");
      }
      if (morse[0] == '-' && morse[1] == '.' && morse[2] == '.' && morse[3] == '.' && morse[4] == '.'){ 
        printf("Número: 6");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == '.' && morse[3] == '.' && morse[4] == '.'){ 
        printf("Número: 7");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == '-' && morse[3] == '.' && morse[4] == '.'){ 
        printf("Número: 8");
      }
      if (morse[0] == '-' && morse[1] == '-' && morse[2] == '-' && morse[3] == '-' && morse[4] == '.'){ 
        printf("Número: 9");
      }
    }
}
