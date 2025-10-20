#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int jogada, jogadaComputador;
    int jogarNovamente;
    srand(time(NULL));

    printf("Jo-Ken-Po!\n");

    do {

        printf("Jogue! (0 - Pedra, 1 - Papel, 2 - Tesoura): ");
        scanf("%i", &jogada);
        while((getchar() != '\n') && !(EOF));

        jogadaComputador = rand() % 3;

        if (jogada == 0 || jogada == 1 || jogada == 2) {

            printf("Você jogou: ");
            if (jogada == 0)
                printf("Pedra\n");
            else if (jogada == 1)
                printf("Papel\n");
            else if (jogada == 2)
                printf("Tesoura\n");

            printf("Computador jogou: ");
            if (jogadaComputador == 0)
                printf("Pedra\n");
            else if (jogadaComputador == 1)
                printf("Papel\n");
            else if (jogadaComputador == 2)
                printf("Tesoura\n");


             if (jogada == jogadaComputador) {
                printf("Empate!\n");
             } else if ((jogada == 0 && jogadaComputador == 2) || //Pedra ganha de tesoura!
                       (jogada == 1 && jogadaComputador == 0) ||  //Papel ganha de pedra!
                       (jogada == 2 && jogadaComputador == 1)) {  //Tesoura ganha de papel!
                printf("Você ganhou!\n");
             } else {
                printf("Computador ganhou!\n");
             }
        }
        else {
            printf("Valor informado incorreto! \n");
        }

        printf("Deseja jogar de novo? (0 - Sim, 1 - Não): ");
        scanf("%i", &jogarNovamente);
        while((getchar() != '\n') && !(EOF));

    } while (jogarNovamente == 0);

    printf("Obrigado por jogar! \n");

    return 0;
}
