#include <stdio.h>
float soma(float a,int b)
{
float result;

result =a+b;
return result;
}
int main()
{
    int a;
    float b, res;
    a = 10;
    b = 12.3;
    
    res = soma(b,a);
    
    printf("\nA soma de %d com %6.3f é %6.3f\n", a,b,res);
    
    return 0;
}

