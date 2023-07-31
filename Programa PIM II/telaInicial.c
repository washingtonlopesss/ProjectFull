#include "CloudHeader.h"

void menuInicial()
{
    system("cls");
    int tempo,tempo2;

    printf(CYAN "\n\n\n\n\n\n\t\tBem vindos ao Sistema de Jogos em Nuvem\n\n\n" RESET);

    cloudPass();

    sleep(2);
    printf("\n\n\n\t\t" YELLOW "[!]" RESET " Digite qualquer tecla para prosseguir . . . ");
    getch();
    printf("\n\n\n\t\t\t\t  Carregando...\n");
    printf(BLUE);
    sleep(1);
    printf("\t\t\t\t#");
    sleep(1);
    printf("#");

    for(tempo = 1; tempo <= 7; tempo++){;
        printf("#");
    }
    for(tempo2 = 1; tempo2 <= 2; tempo2++){
        sleep(1);
        printf("#");
    }

    sleep(1);
    printf(RESET);
}

