#include <stdio.h>

int main()
{
    int x = 0, z = 1, prox_num_fibo = 0, valor_digitado = 0;
    
    printf("Digite um valor:\n");
    scanf("%d",&valor_digitado);
    
    if (valor_digitado == x || valor_digitado == z) {
        printf("O numero pertence a sequencia"); 
        return 0;
    }
    //Verifica se o valor digitado pertence a sequencia
    while (prox_num_fibo < valor_digitado) {
        prox_num_fibo = x + z;
        x = z;
        z = prox_num_fibo;

        if (prox_num_fibo == valor_digitado) {
            printf("O numero pertence a sequencia"); 
            return 0;
        }
        else{
            printf("O numero não pertence a sequencia");
            return 0;
        }
    }
    
    return 0;
}

