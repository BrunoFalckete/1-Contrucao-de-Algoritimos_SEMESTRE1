#include <stdio.h>

int main(void){
    float num1;
    float num2;
    float result;
         printf("Entre com o primeiro numero: ");
            scanf ("%f" , &num1);
        printf("Entre com o segundo numero: ");
             scanf ("%f" , &num2);
                result = num1 + num2;
         printf("A soma igual a: %0.f" , result);
}