#include <stdio.h>

int main()
{
   float rendimento, rendimento_total, valor_dep, taxa, soma, soma_taxa;
   int mes;
   
   printf("\nDigite o valor do depósito\n");
   scanf("%f", &valor_dep);
   
   printf("\nDigite a quantidade de meses\n");
   scanf("%d", &mes);
    
    printf("\nDigite a taxa de juros\n");
    scanf("%f", &taxa);
    
    soma_taxa = taxa / 100;
    rendimento = valor_dep * mes * soma_taxa;
    rendimento_total = valor_dep + rendimento;
    
    printf("\nO rendimento é de R$%.2f reais e o rendimento total é de R$%.2f reais.", rendimento, rendimento_total);
    
    return 0;
}