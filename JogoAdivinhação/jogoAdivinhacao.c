#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

printf("\n\n");
printf("  ._,-,_.          _    ________    _       ______    __        \n");
printf("  ||| |||         / \\  |__    __|  / \\     |   _  \\  |  |       \n");
printf("  ||| |||        / . \\    |  |    / . \\    |  |_) /  |  |       \n");
printf("  ;|| ||:       / /_\\ \\   |  |   / /_\\ \\   |     (   |  |       \n");
printf("./ /| |\\ \\.    /  ___  \\  |  |  /  ___  \\  |  |\\  \\  |  |       \n");
printf("|./ :_: \\.|   /__/   \\__\\ |__| /__/   \\__\\ |__| \\__\\ |__|       \n");
printf("\n");
    printf("*****************************************\n");
    printf("*Bem-vindo ao nosso jogo de Adivinhação!*\n");
    printf("*****************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int nrSecreto = numerogrande % 100;

    int nrPalpite = 0;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;
    int nivel = 0;
    
    printf("Qual nível de dificuldade você deseja jogar?\n");
    printf("(1) Fácil (2) Médio (3) Difícil \n");
    printf("Escolha: ");
    scanf("%d", &nivel);
    
    int numerodetentativas = 0;
    switch(nivel) {
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 14;
            break;
        default:
            numerodetentativas = 6; 
            break;       
    }
    
    for(int i = 1; i <= numerodetentativas; i++ ) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu palpite?:");
        scanf("%d", &nrPalpite);
        printf("Seu palpite foi %d\n", nrPalpite);

        if(nrPalpite < 0) {
            printf("Seu palpite não pode ser um número negativo!\n");
            continue;
        }
        
        acertou = nrPalpite == nrSecreto;
        int maior = nrPalpite > nrSecreto;
        
        if(acertou) {
            //printf("Parabéns, você acertou\nJogue novamente você é um bom jogador!\n\n");
            break;
        } else if(maior) {
            printf("Seu palpite foi maior que o número secreto!\nTente novamente!\n\n");
        }else {
            printf("Seu palpite foi menor que o número secreto!\nTente novamente!\n\n");
        }

        tentativas++;

        double pontosperdidos = abs(nrPalpite - nrSecreto) / (double)2;
        pontos = pontos - pontosperdidos;  
    }

    printf("*****************************************\n\nFim de Jogo!\n");

    if(acertou) {

        printf("\n*****************************************\n");
        printf("                __ooooooooo__                               \n");
        printf("             oOOOOOOOOOOOOOOOOOOOOOo                        \n");
        printf("          oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo                   \n");
        printf("       oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo                \n");
        printf("     oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo              \n");
        printf("   oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo            \n");
        printf("  oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo           \n");
        printf(" oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo          \n");
        printf(" oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo          \n");
        printf("oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo         \n");
        printf("oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo         \n");
        printf("oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo         \n");
        printf(" *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO*          \n");
        printf(" *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*          \n");
        printf("  *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*           \n");
        printf("   *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO*            \n");
        printf("     *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO*              \n");
        printf("       *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*                \n");
        printf("          *OOOOOOOOo           oOOOOOOOO*                   \n");
        printf("              *OOOOOOOOOOOOOOOOOOOOO*                       \n");
        printf("                   ""ooooooooo""                            \n");
        printf("\n");
        printf("Você acertou o palpite com %d tentativas\n",tentativas);
        printf("Total de pontos %.2f\n\n\n", pontos);
    } else {
        
        printf("\n*****************************************\n");
        printf("                          oooo$$$$$$$$$$$$oooo                                  \n");
        printf("                      oo$$$$$$$$$$$$$$$$$$$$$$$$o                               \n");
        printf("                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$         \n");
        printf("   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$        \n");
        printf("oo $ $ '$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$         \n");
        printf("'$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$          \n");
        printf("  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$          \n");
        printf("  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  '''$$$            \n");
        printf("   '$$$''''$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     '$$$           \n");
        printf("    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     '$$$o         \n");
        printf("   o$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o        \n");
        printf("   $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" "$$$$$$ooooo$$$$o      \n");
        printf("  o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$     \n");
        printf("  $$$$$$$$'$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$           \n");
        printf(" ''''       $$$$    '$$$$$$$$$$$$$$$$$$$$$$$$$$$$$      o$$$                    \n");
        printf("            '$$$o     '''$$$$$$$$$$$$$$$$$$$$$$         $$$                     \n");
        printf("              $$$o          '$$''$$$$$$''''           o$$$                      \n");
        printf("               $$$$o                 oo             o$$$'                       \n");
        printf("                '$$$$o      o$$$$$$o'$$$$o        o$$$$                         \n");
        printf("                  '$$$$$oo     ''$$$$o$$$$$o   o$$$$''                          \n");
        printf("                     ""$$$$$oooo  '$$$o$$$$$$$$$'''                             \n");
        printf("                        ""$$$$$$$oo $$$$$$$$$$                                  \n");
        printf("                                """"$$$$$$$$$$$                                 \n");
        printf("                                    $$$$$$$$$$$$                                \n");
        printf("                                     $$$$$$$$$$$                                \n");
        printf("                                      $$$$$$$$                                  \n");
        printf("\n");
        
        
        
        printf("Você perdeu! Tente novamente!\n\n\n");
    }

}


