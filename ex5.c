/* Pedro tem 1.50m e cresce 2cm por ano, e Lucas tem 1,10m e cresce 3cm por ano.
Construa um programa que calcule e imprima quantos anos serão necessários para que:

a) Lucas e Pedro tenham o mesmo tamanho.
b) Lucas seja maior que Pedro.*/

#include <stdio.h>

int main()
{
    float pedro=1.50, lucas=1.10;
    int ano=1;
    
    while(lucas<=pedro)
    {
        pedro = pedro + 0.2;
        lucas = lucas + 0.3;
        ano++;
    }
       printf("\nDurará %d anos para Lucas alcaçar Pedro e passará daqui há %d anos.\n", ano, ano+1);
       
    return 0;
}