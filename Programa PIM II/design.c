#include "CloudHeader.h"

void linhaMedia()
{
    printf(RESET);
    printf(BLUE "\n-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-"
            CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-"
            CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-"
            BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-");
    printf(RESET);
}

void linhaGrande()
{
    printf(RESET);
    printf(BLUE "\n-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-"
            CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-"
            CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-"
            BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-"
            BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-"
            BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-"
            BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-"
            BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-"
            BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-" BLUE "-" CYAN "-");
    printf(RESET);
}

void menuLogo()
{
    char caracteres[255];
    FILE * logo;
    logo = fopen("menuLogo.txt", "r");

    if (logo == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(caracteres,255,logo) != NULL)
    {
        printf("%s", caracteres);
    }
    printf(RESET);
    fclose(logo);
}

void menuLogoU()
{
    char caracteres[255];
    FILE * logo;
    logo = fopen("menuLogoU.txt", "r");

    if (logo == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(caracteres,255,logo) != NULL)
    {
        printf("%s", caracteres);
    }
    printf(RESET);
    fclose(logo);
}

void colaboradorLogo()
{
    char caracteres[255];
    FILE * logo;
    logo = fopen("colaboradoresLogo.txt", "r");

    if (logo == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(caracteres,255,logo) != NULL)
    {
        printf("%s", caracteres);
    }
    printf(RESET);
    fclose(logo);
}

void cloudPass()
{
    char logo[100];

    FILE *arq;
    arq = fopen("texto-logo.txt","r");

    if (arq == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(logo, 100, arq) != NULL){
        printf("\t%s",logo);
    }
    printf(RESET);

    fclose(arq);
}

void loginCadastro()
{
    char logo[100];

    FILE *arq;
    arq = fopen("cadastro-login.txt","r");

    if (arq == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(logo, 100, arq) != NULL){
        printf("\t%s",logo);
    }
    printf(RESET);

    fclose(arq);
}

void dadosCadastro()
{
    char logo[100];

    FILE *arq;
    arq = fopen("dados-cadastrais.txt","r");

    if (arq == NULL){
        printf("Arquivo nãoo encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(logo, 100, arq) != NULL){
        printf("\t%s",logo);
    }
    printf(RESET);

    fclose(arq);
}

void clientesLogo()
{
    char logo[100];

    FILE *arq;
    arq = fopen("clientes.txt","r");

    if (arq == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(logo, 100, arq) != NULL){
        printf("\t%s",logo);
    }
    printf(RESET);

    fclose(arq);
}

void lojaLogo()
{
    char logo[100];

    FILE *arq;
    arq = fopen("lojaMenuLogo.txt","r");

    if (arq == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(logo, 100, arq) != NULL){
        printf("\t%s",logo);
    }
    printf(RESET);

    fclose(arq);
}

void amigosLOGO()
{
    char logo[100];

    FILE *arq;
    arq = fopen("amigosLOGO.txt","r");

    if (arq == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(logo, 100, arq) != NULL){
        printf("%s",logo);
    }
    printf(RESET);

    fclose(arq);
}

void financeiroLogo()
{
    char logo[100];

    FILE *arq;
    arq = fopen("financeiroLogo.txt","r");

    if (arq == NULL){
        printf("Arquivo não encontrado!\n");
        system("pause");
    }

    printf(GREEN);
    while(fgets(logo, 100, arq) != NULL){
        printf("%s",logo);
    }
    printf(RESET);
    printf("\n");

    fclose(arq);
}


