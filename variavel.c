#include <stdio.h>

int main()
{
    
 int i, qtdMaior=0;
 float numeros[10];
 float soma=0, media=0;
 float maior=-999;
 
 
 for(i=0;i<=9;i++)
 {
     printf("\nEntre com a nota do aluno %d\n", i+1);
     scanf("%f", &numeros[i]);
     soma = soma + numeros[i];
     
     if(numeros[i] > maior)
     {
         maior = numeros[i];
     }
 }
    
    media = soma / i;
    printf("\nnumeros = %.2f", media);
    
    for(i=0;i<=9;i++)
    {
       if(numeros[i]>=media)
    {
        printf("\nMaior media %.2f\n", numeros[i]);
    }
    if(numeros[i] == maior)
    {
        qtdMaior++;
    }
    
    }
    
    
    printf("\n%d alunos tiraram a maior nota = %.2f", qtdMaior, maior);
    
    
    
    return 0;
}