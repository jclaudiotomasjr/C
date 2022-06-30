#include <stdio.h>

int main() {

    int x;
    int y;
    int multi;

    printf("**************************************************************************\n");
    printf("Digite dois números int e o prog. retorna o resultdo da * dos dois números\n");
    printf("**************************************************************************\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("Digite o segundo número: ");
    scanf("%d", &y);
    multi = x * y;
    printf("O Resultado da multiplicação dos dois números é %d \n", multi);

    int palpite = 0;
    int secreto = 10;
    int acertou = palpite == secreto;
    printf("O Resultado de acertou é %d \n", acertou);


}