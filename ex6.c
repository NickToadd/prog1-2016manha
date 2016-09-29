#include <stdio.h>

int main()
{
  int tab=1, num, soma;
  
  printf("\nDigite um número:\n");
  scanf("%d", &num);
  
  while(tab<=10)
  {
    soma = tab * num;
    printf("\n%d x %d = %d ", tab, num, soma);
    tab++;
  }
  return 0;
}