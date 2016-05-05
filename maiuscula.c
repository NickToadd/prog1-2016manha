#include <stdio.h>
int main()
{
    
    //float é para poder usar numeros depois da vírgula. É essencial!
    //char é para uso de CONJUNTO DE LETRAS (NOME)
    
    float av1, av2, soma;
    char nome[10];
    
    //printf é usado para imprimir uma pergunta, por exemplo.
    //scanf é usado para dar acesso ao uso de teclado.
    
    printf("\ndiga seu nome:");
    scanf("%s", nome);
    
    printf("\nEntre com AV1:");
    scanf("%f", &av1);
    
    printf("\nEntre com AV2:");
    scanf("%f", &av2);
    
    //a soma (media) é a divisão da av1 + av2 por 2
    
    soma = (av1 + av2) / 2;
    
    //ultimo printf para imprimir o resultado, junto com as variáveis "nome" e "soma". É fundamental contê-las.
    
    printf("Ola %s, sua media eh %f", nome, soma);
    
    return 0;
    
}