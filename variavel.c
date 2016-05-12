#include <stdio.h>

int main()
{
    
 int i, qtdMaior=0;
 float numeros[10];
 float soma=0, media=0;
 float maior=-999;
 float percentMedia6;
 int qtdMaiorMedia6;
 
 
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
    
    if(av1[i] >=6)
    {
     qtdMaiorMedia6;
    }
    }
    
    percentMedia6 = (float)qtdMaiorMedia6 / i;
    
    printf("\n%d alunos tiraram a maior nota = %.2f", qtdMaior, maior);
    printf("\nPorcentagem de alunos com nota maior media 6 = %.2f%% \n", percentMedia6*100);
    
    
    
    return 0;
}