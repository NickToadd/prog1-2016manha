#include <stdio.h>

int main()
{
    float nota;
    
    printf("\nDigite sua nota:");
    scanf("%f", &nota);
    
    if(nota>=6)
    {
    printf("\nAprovado");
    }
    else
    {
        printf("\nReprovado");
    }
    
    return 0;
}