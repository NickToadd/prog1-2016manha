/*. Faça um programa que calcule a quantia total dada uma porção de moedas. O
programador deve dialogar com o usuário segundo o formato do exemplo abaixo:
Número de moedas de 1 Real: 3
Número de moedas de 50 centavos: 3
Número de moedas de 25 centavos: 1
Número de moedas de 10 centavos: 7
Número de moedas de 5 centavos: 100 */

#include <stdio.h>

int main()
{
float moeda1real=100;
float moeda50cent=50;
float moeda25cent=25;
float moeda10cent=10;
float moeda5cent=5;
float soma;

printf("\nDigite a quantidade de moedas de R$01,00:");
scanf("%f", &moeda1real);

printf("\nDigite a quantidade de moedas de R$00,50:");
scanf("%f", &moeda50cent);

printf("\nDigite a quantidade de moedas de R$00,25:");
scanf("%f", &moeda25cent);

printf("\nDigite a quantidade de moedas de R$00,10:");
scanf("%f", &moeda10cent);

printf("\nDigite a quantidade de moedas de R$00,05:");
scanf("%f", &moeda5cent);

soma = moeda1real + moeda50cent + moeda25cent + moeda10cent + moeda5cent;

printf("\nA quantidade total de dinheiro é de: R$%f", soma);

return 0;
}