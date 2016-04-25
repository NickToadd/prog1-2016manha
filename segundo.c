#include <stdio.h>

int main()
{
    int num1, num2, soma;
    
    printf("\nDiga o primeiro número");
    scanf("%d", &num1);
    
    printf("\nDiga o segundo número");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    printf("\n%d", soma);

    
    return 0;
}