#include <stdio.h>

int main() {
    int numero = 0;
    printf("Digite um número de 1 até 10 para ver tabuada: ");
    scanf("%d", &numero);

    for(int i=1; i <= 10; i++) {
        int multiplica = numero * i;
        printf("%d x %d = %d\n", numero, i, multiplica);
    }

}