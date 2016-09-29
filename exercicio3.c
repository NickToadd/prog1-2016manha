//Elabore um algoritmo que calcule e imprima a média de um aluno em uma disciplina com as
//seguintes características: Duas provas (P1 e P2), um trabalho (T) e 5 listas de exercícios
//(L1..L5). A média será dada por: média = 0,3xP1 + 0,4xP2 + 0,2x(média das listas) + 0,1xT. 

#include <stdio.h>

int main()
{
    char aluno;
    float media, nota1, nota2, trab, list1, list2, list3, list4, list5, somalist;
    
    printf("\nDiga a primeira nota:");
    scanf("%f", &nota1);
    
    printf("\nDiga a segunda nota:");
    scanf("%f", &nota2);
    
    printf("\nDigite a nota do seu trabalho:");
    scanf("%f", &trab);
    
    printf("\nDigite a nota da lista 1");
    scanf("%f", &list1);
    
    printf("\nDigite a nota da lista 2");
    scanf("%f", &list2);
    
    printf("\nDigite a nota da lista 3");
    scanf("%f", &list3);
    
    printf("\nDigite a nota da lista 4");
    scanf("%f", &list4);
    
    printf("\nDigite a nota da lista 5");
    scanf("%f", &list5);
    
    somalist = list1 + list2 + list3 + list4 + list5 / 5;
    
    media = 0.3 * nota1 + 0.4 * nota2 + 0.2 * somalist + 0.1 * trab;
    
    printf("\nSua média é %2.f", media);
    
    return 0;
}