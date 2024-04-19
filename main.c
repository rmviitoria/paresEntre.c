/******************************************************************************

Crie um programa que pede para o usuário digitar 2 valores inteiros via teclado (val1 e val2).
Se nenhum dos valores for negativo, escreva os números pares entre o menor e o maior valor.


*******************************************************************************/
#include <stdio.h>


int main() {
    int val1, val2, menor, maior;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &val1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &val2);

    if (val1 < val2) {
        menor = val1;
        maior = val2;
    } else {
        menor = val2;
        maior = val1;
    }

    if (val1 >= 0 && val2 >= 0) {
        printf("Números pares entre %d e %d:\n", menor, maior);
        for (int i = menor; i <= maior; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        printf("Pelo menos um dos valores é negativo. Números pares não serão exibidos.\n");
    }

    return 0; 
}
