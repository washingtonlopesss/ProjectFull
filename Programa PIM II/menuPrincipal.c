#include "CloudHeader.h"

void jperfil()
{
    char email[500];
    strcpy(email,EmailAutenticado);
    char telefone[500];
    strcpy(telefone,TelefoneAutenticado);
    char usuario[500];
    strcpy(usuario,UsuarioAutenticado);
    system("cls");
    dadosCadastro();
    linhaMedia();
    printf("\t\n"YELLOW"\t[+]"RESET" Usuário: %s\t\n", UsuarioAutenticado);
    printf(YELLOW"\t[+]"RESET" E-mail: %s\n", EmailAutenticado);
    printf("\t"YELLOW"[+]"RESET" Telefone: %s\t", TelefoneAutenticado);

    linhaMedia();

    getch();

    menuPrincipalU();
}

void jamigos()
{
    //VARIAVEIS E LEITURA DO ARQUIVO:
    int jtamigos, jop=0;
    int amigoOP;
    int i = 1;
    int contadorAmigos;
    jtamigos=0;
    char amigosarmazenados[255], jusuarioEN[255], jusuarioEN2[255];
    FILE *amigos; FILE *jcadastro;
    amigos = fopen("amigos.txt", "r");

    //VERIFICA SE EXISTE O ARQUIVO:
    if (amigos == NULL){
        printf("Arquivo nao encontrado!\n");
        system("pause");
        exit(0);
    }
    // MOSTRANDO NA TELA OS DADOS:
    system("cls");

    amigosLOGO();

    jcadastro = fopen("amigosBD.txt", "r");
    fflush(stdin);

    linhaMedia();

    printf("\n");

    while(fgets(jusuarioEN,255,jcadastro) != NULL)
    {
        jtamigos++;
        printf(YELLOW"[%d]"RESET" - %s",jtamigos, jusuarioEN);
    }

    fclose(jcadastro);



    printf("\n\n\tTotal de amigos adicionados: %d", jtamigos);

    linhaMedia();


    while (jop < 1 || jop > 3){
        printf("\n\n"YELLOW"[1]"RESET" - Adicionar amigo");
        printf("\n"YELLOW"[2]"RESET" - Remover amigo");
        printf("\n"YELLOW"[3]"RESET" - Voltar ao menu principal\n");

        linhaMedia();

        printf("\n\nEscolha a sua opção: ");
        scanf("%d", &jop);

        switch(jop){


        case 1:
            printf("\nDigite o nome do usuário: ");
            scanf("%s", jusuarioEN);
            jcadastro = fopen("amigosBD.txt", "a");
            fflush(stdin);
            fprintf(jcadastro, "%s\n", jusuarioEN);
            printf("\nAmigo adicionado com sucesso!\n");
            fclose(jcadastro);
            getch();
            jamigos();

            break;

        case 2:
            printf("\nDigite o ID do amigo que deseja remover: ");
            scanf("%d", &amigoOP);

            jcadastro = fopen("amigosBD.txt", "r");

            FILE *jcadastroTEMP;
            jcadastroTEMP = fopen("amigosBDTEMP.txt", "a");

            i = 0;

            while(fgets(jusuarioEN, 2555, jcadastro) != NULL)
            {

                i++;
                fflush(stdin);

                if (i != amigoOP)
                {
                    fprintf(jcadastroTEMP, "%s", jusuarioEN);

                }
                else
                {
                    contadorAmigos++;

                }
              }
              fclose(jcadastro);
              fclose(jcadastroTEMP);


            if (contadorAmigos == 0)
            {
                printf(RED"\n\n[!] Amigo não encontrado!"RESET);
                fclose(jcadastro);
                fclose(jcadastroTEMP);

                remove("amigosBD.txt");
                rename("amigosBDTEMP.txt", "amigosBD.txt");

                getch();
                jamigos();
            }
            else
            {
                fclose(jcadastro);
                fclose(jcadastroTEMP);

                remove("amigosBD.txt");
                rename("amigosBDTEMP.txt", "amigosBD.txt");

                printf(GREEN"\n\nAmigo apagado com sucesso!"RESET);

                getch();
                jamigos();
            }
        break;

        case 3:
            menuPrincipalU();

        default:
        printf(RED "\nOpção inválida!\n" RESET);
        getch();
        fflush(stdin);
        jamigos();
        break;
        }

    }

}


void jjogos()
{
    //VARIAVEIS E LEITURA DO ARQUIVO:
    int jtjogos;
    jtjogos=0;
    char jogosarmazenados[255];
    FILE *jogos;
    jogos = fopen("jogos.txt", "r");

    //VERIFICA SE EXISTE O ARQUIVO:
    if (jogos == NULL){
        printf("Arquivo nao encontrado!\n");
        system("pause");
        exit(0);
    }
    // MOSTRANDO NA TELA OS DADOS:
    system("cls");
    printf("\n\tJogos possuidos:");
    linhaMedia();
    printf("\n");
    while(fgets(jogosarmazenados,255,jogos) != NULL){
        printf("\t%s", jogosarmazenados);
        jtjogos++;
    }
    linhaMedia();

    printf("\n\n\tTotal de jogos Possuidos: %d", jtjogos);


    getch();

    fclose(jogos);

    menuPrincipalU();

}

void jloja()
{
    //VARIAVEIS E LEITURA DO ARQUIVO:
    int jtloja;
    jtloja=0;
    char listaloja[255];
    FILE *loja;
    loja = fopen("loja.txt", "r");

    //VERIFICA SE EXISTE O ARQUIVO:
    if (loja == NULL){
        printf("Arquivo nao encontrado!\n");
        system("pause");
        exit(0);
    }
    // MOSTRANDO NA TELA OS DADOS:
    system("cls");
    lojaLogo();
    linhaMedia();
    printf("\n");
    while(fgets(listaloja,255,loja) != NULL){
        printf("\t%s", listaloja);
        jtloja++;
    }

    linhaMedia();
    printf("\n\n\tTotal de jogos Disponiveis: %d", jtloja);


    getch();

    fclose(loja);

    menuPrincipalU();

}

void menuPrincipalU()
{
    setlocale(LC_ALL, "Portuguese");

    // variaveis
    int jopcao = 0;

    // laço de repetição do menu
    while (jopcao <1 || jopcao > 5)
    {
        // menu principal
        fflush(stdin);
        system("cls");
        menuLogoU();
        linhaMedia();
        printf(YELLOW"\n[1]" RESET " - Perfil\n");
        printf(YELLOW"[2]" RESET " - Biblioteca de Jogos\n");
        printf(YELLOW"[3]" RESET " - Loja\n");
        printf(YELLOW"[4]" RESET " - Amigos\n");
        printf(YELLOW"[5]" RESET " - Sair");
        linhaMedia();
        printf("\n\nEscolha a sua opção: ");
        scanf("%d", &jopcao);

        // desvio condicional com switch case
        switch (jopcao)
        {
        case 1:
            jperfil();
            //printf("Perfil");
            break;

        case 2:
            jjogos();
            //printf("Biblioteca de jogos");
            break;

        case 3:
            jloja();
            //printf("Loja");
            break;

        case 4:
            jamigos();
            //printf("Loja");
            break;

        case 5:
            system("cls");
            printf("Saindo....\n\n");
            fflush(stdin);
            exit(0);
            break;

        default:
            printf(RED "\nOpção inválida!\n" RESET);
            getch();
            fflush(stdin);
            break;

        }
    }
    return 0;
}
