#include <stdio.h>
int main ()
{
    int num;
    printf("digite um numero inteiro: ");
    scanf("%d",&num);
    if(num%2==0)//operador %
    {
        printf("\nPar");
    }
    else {
    printf("\nimpar");
         }
       return 0;
    
}