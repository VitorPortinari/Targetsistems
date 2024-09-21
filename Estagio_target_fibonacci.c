#include <stdio.h>

int main() {
    int x = 0, z = 1, prox_num_fibo = 0, valor_digitado = 0;

    printf("Digite um valor: ");
    scanf("%d", &valor_digitado);

    if (valor_digitado == x || valor_digitado == z) {
        printf("O numero pertence a sequencia\n");
        return 0;
    }

    // Verifica se o valor digitado pertence à sequência
    while (prox_num_fibo < valor_digitado) {
        prox_num_fibo = x + z;
        x = z;
        z = prox_num_fibo;

        if (prox_num_fibo == valor_digitado) {
            printf("O numero pertence a sequencia\n");
            return 0;
        }
    }

    printf("O numero não pertence a sequencia\n");
    return 0;
}
