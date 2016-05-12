#include <stdio.h>

int main()
{
    float media, soma=0;
    int i,j;
    float notas[4][3]; //coluna =, 1 e 2 = av1, av3 e av3
    
    
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("\nEntre com a av%d do aluno %d: ", j+1, i+1);
            scanf("%f", &notas[i][j]);
            }
            
            
            
    }

    printf("\n");
    
    printf("\nNome do aluno\tAV1\tAV2\tAV3)");
    printf("\n------------------------------------");
    for(i=0; i<=3; i++)
    {
        printf("\nAluno %d\t", i+1);
        for(j=0; j<=2; j++)
        {
          printf("\t%.2f", notas[i][j]);   
        }
    }
    printf("\nNome do aluno\tAV1");
    printf("\n------------------------------------");
    for(i=0; i<=3; i++)
    {
        printf("\nAluno %d\t", i+1);
        
        printf("\t%.2f", notas[i][0]);
        soma = soma + notas[i][0];
        }
        
        media = soma / i;
        
        printf("\n------------------------------------");
        printf("\nMédia\t\t%.2f", media);
        printf("\n------------------------------------");
        
    return 0;
}