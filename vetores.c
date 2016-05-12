#include <stdio.h>

int main()
{
    
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
    return 0;
}