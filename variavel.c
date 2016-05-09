#include <stdio.h>

int main()
{
    
 int i;
 float numeros[10];
 float soma=0, media=0;
 
 
 for(i=0;i<=9;i++)
 {
     printf("\nEntre com a nota do aluno %d\n", i+1);
     scanf("%f", &numeros[i]);
     soma = soma + numeros[i];
 }
    
    media = soma / i;
    printf("\nnumeros = %.2f", media);
    
    for(i=0;i<=9;i++)
    {
       if(numeros[i]>=media)
    {
        printf("\nMaior media %.2f", numeros[i]);
    }
    }
    
    return 0;
}