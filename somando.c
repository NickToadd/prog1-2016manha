#include <stdio.h>

int main()
{
    int num1, num2, num3, soma;
    
    printf("\nEntre com o número 1\n", num1);
    scanf("%d", &num1);
    
    printf("\nEntre com o num2\n", num2);
    scanf("%d", &num2);
    
    printf("\nEntre com o último número\n", num3);
    scanf("%d", &num3);
    
    soma = num1 + num2 - num3;
    
    printf("\nA soma é =%d\n", soma);
    
    return 0;
}