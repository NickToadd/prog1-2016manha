#include <stdio.h>

int main()
{
    int cont = 1;
    float soma, media, nota;
    
    while(cont<=10)
    {
     printf("\nDigite a nota do %dº aluno.\n", cont);
     scanf("%f", &nota);
     soma = soma + nota;
     cont++;
    }
    media = soma / 10;
    
    printf("\nA média da turma é %.2f\n", media);
 
 return 0;

    
}