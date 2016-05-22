#include <stdio.h>

int main()
{
    
    printf("\nOlá, meu nome é Nícolas Serrano e este programa pode ser visto no seguinte endereço do github: https://github.com/seu_usuario/seu_repositorio/prog1_av2_1.c\n")
    
    float media, soma=0, av1, av2, av3;
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
        
        printf("\nEntre com a matricula[1-4]:");
        scanf("%d", &i);
        
        i--;
        
        printf("\n Nome do aluno\tAV1\tAV2\tAV3");
        printf("\n------------------------------------");
        printf("\nAluno %d\t", i+1);
        for(j=0; j<=2; j++)
        {
            printf("\t%.2f", notas[i][j]);
        }
        
        av1 = notas[i][0];
        av2 = notas[i][1];
        av3 = notas[i][2];
        
        if(  (av1 + av2) /2 >=6 ||
             (av1 + av3) /2 >=6 ||
             (av1 + av3) /2 >=6  )
             
        {
            printf("\t\nAPROVADO\n");
        }     
        else
        {
            printf("\t\nREPROVADO\n");
        }
    return 0;
}