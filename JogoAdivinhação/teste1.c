#include <stdio.h>

int main() {
    int chute = 0;
    int numerosecreto = 42;
    int acertou = chute == numerosecreto;
    if(acertou) {
        printf("Parabéns! Você acertou!\n");
    } else {
        int maior = chute > numerosecreto;
        if(maior) {
            printf("Seu chute foi maior do que o número secreto!\n");
        } 
        else {
            printf("Seu chute foi menor do que o número secreto!\n");
        }
    }
}