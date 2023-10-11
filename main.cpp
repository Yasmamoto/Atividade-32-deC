// Atividade da linguagem C, questão 32.
#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int result;
    
    printf("Digite um numero para fazer a soma: ");
    scanf("%i", &num1);
    
    printf("Digite um numero para fazer a soma: ");
    scanf("%i", &num2);
    
    result = (num1 + num2);
    
    printf(" o resultado = %i", result);
    
    return 0;
}
