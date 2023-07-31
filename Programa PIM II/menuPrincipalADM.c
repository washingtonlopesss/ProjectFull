#include "CloudHeader.h"

void deletarCliente()
{
    int opcao, i = 0;
    int linha = 0;
    char arquivoBD[2555];
    char colaboradorSA[2555];
    char senhaSA[2555];
    char emailSA[2555];
    char telefoneSA[2555];
    char tipoUsuario[2555];
    char nomeSA[2555];
    strcpy(arquivoBD, "loginBD.txt");
    char qntdUsuarios[2555];
    int colaboradorDelOP = 0;
    int contadorUsuarios = 0;
    int idSA;
    int opDelColab;

    system("cls");
    clientesLogo();
    printf("\n");

    //conex�o com TXT
    FILE *colaboradorBD;
    colaboradorBD = fopen(arquivoBD, "r");
    fflush(stdin);

    linhaGrande();
    printf(GREEN"\nId\t Usu�rio  \t E-mail  \t\t\t Telefone"RESET);
    linhaGrande();

    // verificar quantos colaboradores existem

    while (fgets(qntdUsuarios, 255, colaboradorBD) != NULL)
    {
        fscanf(colaboradorBD, "%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, &idSA);

        //verificando se o usuario � supervisor
        if (strcmp(tipoUsuario, "U") == 0)
        {
            i++;
           printf("\n"YELLOW"[%i]"RESET"-\t %s  \t %s  \t %s",idSA,colaboradorSA,emailSA,telefoneSA);

        }
    }

    // critica n�o exista colaboradores
    if (i == 0)
    {
        system("cls");
        colaboradorLogo();
        printf(RED "\n[!]" RESET " - N�o existe clientes cadastrado no sistema!");
        fclose(colaboradorBD);
        getch();
        clientes();
    }

    fclose(colaboradorBD);
    linhaGrande();
    printf("\n\nQuantidade de clientes: %d", i);
    linhaGrande();
    fflush(stdin);
    printf("\n\nDigite o ID do cliente que deseja deletar: ");
    opDelColab = scanf("%d", &colaboradorDelOP);

    //verificando se o digito � v�lido

    if (opDelColab != 1)
    {
        printf(RED"\nDigite um ID v�lido!"RESET);
        getch();
        clientes();
    }

    //banco de dados colaborador
    colaboradorBD = fopen(arquivoBD, "r");

    //banco de dados temporario colaborador
    FILE *colaboradorBDTemp;
    colaboradorBDTemp = fopen("arquivoBDTemp.txt", "a");


    i = 0;
    fflush(stdin);
    while(fgets(qntdUsuarios, 255, colaboradorBD) != NULL)
    {
        fscanf(colaboradorBD, "%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, &idSA);

        if (idSA != colaboradorDelOP)
        {

            fprintf(colaboradorBDTemp, "\n%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, idSA);
        }
        else
        {
            if(strcmp(tipoUsuario, "U") == 0)
            {
                contadorUsuarios++;
            }
            else
            {
                fprintf(colaboradorBDTemp, "\n%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, idSA);
            }

        }

    }

    if (contadorUsuarios == 0)
    {
        printf(RED"\nCliente n�o identificado"RESET);
        fclose(colaboradorBD);
        fclose(colaboradorBDTemp);

        remove(arquivoBD);
        rename("arquivoBDTemp.txt", arquivoBD);

        getch();
        clientes();
    }
    else
    {
        fclose(colaboradorBD);
        fclose(colaboradorBDTemp);

        remove(arquivoBD);
        rename("arquivoBDTemp.txt", arquivoBD);

        printf(GREEN"\nCliente deletado com sucesso!"RESET);
        getch();
        clientes();
    }


    //percorrendo todos os colaboradores at� o

    fclose(colaboradorBD);
    fclose(colaboradorBDTemp);

}



void clientes()
{
    // menu de colaboradores
        int opcao, i = 0;
        char arquivoBD[2555];
        char colaboradorSA[2555];
        char senhaSA[2555];
        char emailSA[2555];
        char telefoneSA[2555];
        char tipoUsuario[2555];
        strcpy(arquivoBD, "loginBD.txt");
        char qntdUsuarios[2555];
        int idSA;
        fflush(stdin);

        while (opcao <1 || opcao > 3)
        {
            system("cls");
            clientesLogo();
            linhaMedia();
            printf(YELLOW "\n[1] " RESET "- Listar todos os Clientes\n");
            printf(YELLOW "[2] " RESET "- Deletar um Cliente\n");
            printf(YELLOW "[3] " RESET "- Voltar");
            linhaMedia();
            printf("\n\nEscolha a sua op��o: ");
            scanf("%d", &opcao);

              // switch case colaboradores
            switch (opcao)
            {
            case 1:
                system("cls");
                exibirClientes();
                break;

            case 2:
                system("cls");
                deletarCliente();
                break;

            case 3:
                system("cls");
                menuPrincipal();
                break;

            default:
                printf(RED "\nOp��o inv�lida!\n");
                getch(); system("cls");
                printf(RESET);
                fflush(stdin);
                break;
            }
        }
}

void exibirColaboradores()
{
    int opcao, i = 0;
    char arquivoBD[2555];
    char colaboradorSA[2555];
    char senhaSA[2555];
    char emailSA[2555];
    char telefoneSA[2555];
    char tipoUsuario[2555];
    strcpy(arquivoBD, "loginBD.txt");
    char qntdUsuarios[2555];
    int idSA = 0;
    system("cls");
    colaboradorLogo();
    printf("\n");

    //conex�o com TXT
    FILE *clientesBD;
    clientesBD = fopen(arquivoBD, "r");
    fflush(stdin);

    linhaGrande();
    printf("\nId\t Usu�rio  \t E-mail  \t\t\t Telefone");
    linhaGrande();

    // verificar quantos colaboradores existem

    while (fgets(qntdUsuarios, 255, clientesBD) != NULL)
    {
        fscanf(clientesBD, "%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, &idSA);

        //verificando se o usuario � usuario
        if (strcmp(tipoUsuario, "S") == 0)
        {
            i++;
           printf("\n"YELLOW"[%i]"RESET"-\t %s  \t %s  \t %s",idSA,colaboradorSA,emailSA,telefoneSA);

        }
    }

    // critica n�o exista colaboradores
    if (i == 0)
    {
        system("cls");
        colaboradorLogo();
        printf(RED "\n[!]" RESET " - N�o existe colaboradores cadastrado no sistema!");
        fclose(clientesBD);
        getch();
        colaboradores();
    }

    fclose(clientesBD);
    linhaGrande();
    printf("\n\nQuantidade de colaboradores: %d", i);
    getch();
    colaboradores();
}

void exibirClientes()
{
    int opcao, i = 0;
    char arquivoBD[2555];
    char colaboradorSA[2555];
    char senhaSA[2555];
    char emailSA[2555];
    char telefoneSA[2555];
    char tipoUsuario[2555];
    strcpy(arquivoBD, "loginBD.txt");
    char qntdUsuarios[2555];
    int idSA = 0;
    system("cls");
    clientesLogo();
    printf("\n");

    //conex�o com TXT
    FILE *clientesBD;
    clientesBD = fopen(arquivoBD, "r");
    fflush(stdin);

    linhaGrande();
    printf("\nId\t Usu�rio  \t E-mail  \t\t\t Telefone");
    linhaGrande();

    // verificar quantos colaboradores existem

    while (fgets(qntdUsuarios, 255, clientesBD) != NULL)
    {
        fscanf(clientesBD, "%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, &idSA);

        //verificando se o usuario � usuario
        if (strcmp(tipoUsuario, "U") == 0)
        {
            i++;
           printf("\n"YELLOW"[%i]"RESET"-\t %s  \t %s  \t %s",idSA,colaboradorSA,emailSA,telefoneSA);

        }
    }

    // critica n�o exista colaboradores
    if (i == 0)
    {
        system("cls");
        colaboradorLogo();
        printf(RED "\n[!]" RESET " - N�o existe clientes cadastrado no sistema!");
        fclose(clientesBD);
        getch();
        clientes();
    }

    fclose(clientesBD);
    linhaGrande();
    printf("\n\nQuantidade de clientes: %d", i);
    getch();
    clientes();
}

void deletarColaborador()
{
    int opcao, i = 0;
    int linha = 0;
    char arquivoBD[2555];
    char colaboradorSA[2555];
    char senhaSA[2555];
    char emailSA[2555];
    char telefoneSA[2555];
    char tipoUsuario[2555];
    char nomeSA[2555];
    strcpy(arquivoBD, "loginBD.txt");
    char qntdUsuarios[2555];
    int colaboradorDelOP = 0;
    int contadorUsuarios = 0;
    int idSA;
    int opDelColab;

    system("cls");
    colaboradorLogo();
    printf("\n");

    //conex�o com TXT
    FILE *colaboradorBD;
    colaboradorBD = fopen(arquivoBD, "r");
    fflush(stdin);

    linhaGrande();
    printf(GREEN"\nId\t Usu�rio  \t E-mail  \t\t\t Telefone"RESET);
    linhaGrande();

    // verificar quantos colaboradores existem

    while (fgets(qntdUsuarios, 255, colaboradorBD) != NULL)
    {
        fscanf(colaboradorBD, "%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, &idSA);

        //verificando se o usuario � supervisor
        if (strcmp(tipoUsuario, "S") == 0)
        {
            i++;
           printf("\n"YELLOW"[%i]"RESET"-\t %s  \t %s  \t %s",idSA,colaboradorSA,emailSA,telefoneSA);

        }
    }

    // critica n�o exista colaboradores
    if (i == 0)
    {
        system("cls");
        colaboradorLogo();
        printf(RED "\n[!]" RESET " - N�o existe colaboradores cadastrado no sistema!");
        fclose(colaboradorBD);
        getch();
        colaboradores();
    }

    fclose(colaboradorBD);
    linhaGrande();
    printf("\n\nQuantidade de colaboradores: %d", i);
    linhaGrande();
    fflush(stdin);
    printf("\n\nDigite o ID do colaborador que deseja deletar: ");
    opDelColab = scanf("%d", &colaboradorDelOP);

    //verificando se o digito � v�lido

    if (opDelColab != 1)
    {
        printf(RED"\nDigite um ID v�lido!"RESET);
        getch();
        colaboradores();
    }

    //banco de dados colaborador
    colaboradorBD = fopen(arquivoBD, "r");

    //banco de dados temporario colaborador
    FILE *colaboradorBDTemp;
    colaboradorBDTemp = fopen("arquivoBDTemp.txt", "a");


    i = 0;
    fflush(stdin);
    while(fgets(qntdUsuarios, 255, colaboradorBD) != NULL)
    {
        fscanf(colaboradorBD, "%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, &idSA);

        if (idSA != colaboradorDelOP)
        {

            fprintf(colaboradorBDTemp, "\n%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, idSA);

        }
        else
        {
            if(strcmp(tipoUsuario, "S") == 0)
            {
                contadorUsuarios++;
            }
            else
            {
                fprintf(colaboradorBDTemp, "\n%s %s %s %s %s %i", colaboradorSA, senhaSA, tipoUsuario, emailSA, telefoneSA, idSA);
            }

        }

    }

    if (contadorUsuarios == 0)
    {
        printf(RED"\nColaborador n�o identificado"RESET);
        fclose(colaboradorBD);
        fclose(colaboradorBDTemp);

        remove(arquivoBD);
        rename("arquivoBDTemp.txt", arquivoBD);

        getch();
        colaboradores();
    }
    else
    {
        fclose(colaboradorBD);
        fclose(colaboradorBDTemp);

        remove(arquivoBD);
        rename("arquivoBDTemp.txt", arquivoBD);

        printf(GREEN"\nColaborador deletado com sucesso!"RESET);
        getch();
        colaboradores();
    }


    //percorrendo todos os colaboradores at� o

    fclose(colaboradorBD);
    fclose(colaboradorBDTemp);

}


void colaboradores()
{
    // menu de colaboradores
        int opcao, i = 0;
        char arquivoBD[2555];
        char colaboradorSA[2555];
        char senhaSA[2555];
        char emailSA[2555];
        char telefoneSA[2555];
        char tipoUsuario[2555];
        strcpy(arquivoBD, "loginBD.txt");
        char qntdUsuarios[2555];
        int idSA;
        fflush(stdin);

        while (opcao <1 || opcao > 3)
        {
            system("cls");
            colaboradorLogo();
            linhaMedia();
            printf(YELLOW "\n[1] " RESET "- Adicionar um novo Colaborador\n");
            printf(YELLOW "[2] " RESET "- Listar Colaboradores\n");
            printf(YELLOW "[3] " RESET "- Deletar um Colaborador\n");
            printf(YELLOW "[4] " RESET "- Voltar");
            linhaMedia();
            printf("\n\nEscolha a sua op��o: ");
            scanf("%d", &opcao);

              // switch case colaboradores
            switch (opcao)
            {
            case 1:
                system("cls");
                colaboradorLogo();
                cadastrarColabFunction();
                break;

            case 2:
                system("cls");
                colaboradorLogo();
                exibirColaboradores();
                break;

            case 3:
                deletarColaborador();
                break;

            case 4:
                menuPrincipal();
                break;

            default:
                printf(RED "\nOp��o inv�lida!\n");
                getch(); system("cls");
                printf(RESET);
                fflush(stdin);
                break;
            }
        }
}

void adicionarJogo()
{
    system("cls");
    char nomeJogo[BUFFER];


    lojaLogo();

    linhaMedia();

    printf("\n\nDigite o nome do jogo que deseja adicionar: ");
    fflush(stdin);
    scanf("%[^\n]", nomeJogo);

    FILE *ListaJogos;
    ListaJogos = fopen("loja.txt", "a");

    fprintf(ListaJogos, "%s\n", nomeJogo);

    fclose(ListaJogos);

    printf("\nJogo adicionado com sucesso!");
    getch();
    menuLojaS();

}

void deletarJogo()
{
    int i = 1;
    char games[BUFFER];
    int gameOP;
    int contadorJogos = 0;
    int teste;


    system("cls");

    lojaLogo();

    linhaMedia();

    printf("\n\tLista de jogos");

    linhaMedia();
    printf("\n\n");

    FILE *ListaJogos;
    ListaJogos = fopen("loja.txt", "r");

    while(fgets(games, 2555, ListaJogos) != NULL)
    {
        printf(YELLOW"[%i]"RESET" - %s",i, games);
        i++;
    }
    fclose(ListaJogos);

    linhaMedia();

    fflush(stdin);

    printf("\n\nDigite o ID do jogo que deseja deletar: ");
    scanf("%d", &gameOP);

    //banco de dados loja
    ListaJogos = fopen("loja.txt", "r");

    //banco de dados temporario loja
    FILE *ListaJogosTEMP;
    ListaJogosTEMP = fopen("ListaJogosTEMP.txt", "a");


    fflush(stdin);
    i = 0;
    while(fgets(games, 2555, ListaJogos) != NULL)
    {

        i++;
        fflush(stdin);
        if (i != gameOP)
        {
            fprintf(ListaJogosTEMP, "%s", games);
        }
        else
        {
            contadorJogos++;
        }


    }



    if (contadorJogos == 0)
    {
        printf(RED"\n\n[!] Jogo n�o encontrado!"RESET);
        fclose(ListaJogos);
        fclose(ListaJogosTEMP);

        remove("loja.txt");
        rename("ListaJogosTEMP.txt", "loja.txt");

        getch();
        menuLojaS();
    }
    else
    {
        fclose(ListaJogos);
        fclose(ListaJogosTEMP);

        remove("loja.txt");
        rename("ListaJogosTEMP.txt", "loja.txt");

        printf(GREEN"\n\nJogo deletado com sucesso!"RESET);

        getch();
        menuLojaS();
    }


    //percorrendo todos os colaboradores at� o

    fclose(ListaJogos);
    fclose(ListaJogosTEMP);


}

void listarJogos()
{
    system("cls");
    int i = 1;
    char games[BUFFER];

    lojaLogo();

    linhaMedia();
    printf("\n\n");

    FILE *ListaJogos;
    ListaJogos = fopen("loja.txt", "r");

    while(fgets(games, 2555, ListaJogos) != NULL)
    {
        printf(YELLOW"[%i]"RESET" - %s",i, games);
        i++;
    }
    fclose(ListaJogos);

    linhaMedia();
    printf("\n\nTotal de jogos na loja: %d", i - 1);
    getch();
    menuLojaS();


}

void menuLojaS()
{
    fflush(stdin);
    int opcao = 0;


    // la�o de repeti��o do menu
    while (opcao <1 || opcao > 4)
    {
        // menu principal
        system("cls");
        lojaLogo();
        linhaMedia();
        printf(YELLOW "\n[1] " RESET "- Adicionar um novo Jogo na loja\n");
        printf(YELLOW "[2] " RESET "- Listar todos os Jogos da loja\n");
        printf(YELLOW "[3] " RESET "- Deletar um jogo espec�fico\n");
        printf(YELLOW "[4] " RESET "- Voltar");
        linhaMedia(); printf(RESET);
        printf("\n\nEscolha a sua op��o: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            adicionarJogo();
            break;

        case 2:
            listarJogos();
            break;

        case 3:
            deletarJogo();
            break;

        case 4:
            system("cls");
            menuPrincipal();
            break;

        default:
            printf(RED "\nOp��o inv�lida!\n");
            getch(); system("cls");
            printf(RESET);
            fflush(stdin);
            break;
        }

    }
}

void lucroEmpresarial()
{
    double quantidadeClientes = 0;
    char qntdClientes[BUFFER];
    int quantidadeClientess;

    char usuario[BUFFER];
    char senha[BUFFER];
    char tipoUsuario[BUFFER];
    char emailUsuario[BUFFER];
    char telefoneUsuario[BUFFER];
    char idUsuario[BUFFER];


    system("cls");
    fflush(stdin);

    financeiroLogo();

    linhaMedia();

    FILE *Clientes;
    Clientes = fopen("loginBD.txt", "r");

    while(fgets(qntdClientes,BUFFER,Clientes) != NULL)
    {
       fscanf(Clientes, "%s %s %s %s %s %s", usuario, senha, tipoUsuario, emailUsuario, telefoneUsuario, idUsuario);



       if(strcmp(tipoUsuario,"S") == 0)
       {
           quantidadeClientes++;
           quantidadeClientess++;
       }

    }
    fclose(Clientes);

    printf("\n\nTotal de clientes cadastrado no sistema: %d", quantidadeClientess);
    printf("\n\Lucros referentes ao custo de assinaturas por cliente: R$%.2f", quantidadeClientes * 59.90);
    printf("\n\n\nAtual valor do plano: R$59,90");

    linhaMedia();

    printf("\n\n\n"YELLOW"[!]"RESET" Pressione qualquer tecla para voltar ao menu principal");
    getch();

    menuPrincipal();

}

void menuFinanceiro()
{

    system("cls");
    fflush(stdin);
    int opcao = 0;

    while (opcao <1 || opcao > 2)
    {
        // menu principal
        system("cls");
        financeiroLogo();
        linhaMedia();
        printf(YELLOW "\n[1] " RESET "- Lucro Empresarial\n");
        printf(YELLOW "[2] " RESET "- Voltar");
        linhaMedia(); printf(RESET);
        printf("\n\nEscolha a sua op��o: ");
        scanf("%d", &opcao);

        // desvio condicional com switch case
        switch (opcao)
        {
        case 1:
            lucroEmpresarial();
            break;

        case 2:
            menuPrincipal();
            break;

        default:
            printf(RED "\nOp��o inv�lida!\n");
            getch(); system("cls");
            printf(RESET);
            fflush(stdin);
            break;

        }



    }

}

void menuPrincipal()
{

    int opcao = 0;

    // la�o de repeti��o do menu
    while (opcao <1 || opcao > 5)
    {
        // menu principal
        system("cls");
        menuLogo();
        linhaMedia();
        printf(YELLOW "\n[1] " RESET "- Informa��es do Cliente\n");
        printf(YELLOW "[2] " RESET "- Biblioteca de Jogos\n");
        printf(YELLOW "[3] " RESET "- Colaboradores\n");
        printf(YELLOW "[4] " RESET "- Gest�o Financeira\n");
        printf(YELLOW "[5] " RESET "- Sair");
        linhaMedia(); printf(RESET);
        printf("\n\nEscolha a sua op��o: ");
        scanf("%d", &opcao);

        // desvio condicional com switch case
        switch (opcao)
        {
        case 1:
            clientes();
            break;

        case 2:
            menuLojaS();
            break;

        case 3:
            colaboradores();
            break;

        case 4:
            menuFinanceiro();
            break;

        case 5:
            printf("Sair");
            exit(0);
            break;

        default:
            printf(RED "\nOp��o inv�lida!\n");
            getch(); system("cls");
            printf(RESET);
            fflush(stdin);
            break;

        }



    }


}