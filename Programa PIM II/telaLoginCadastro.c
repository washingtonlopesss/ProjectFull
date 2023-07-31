#include "CloudHeader.h"

void cadastrarFunction()
{

    char usuarioEN[255];
    char usuarioSA[25555];
    char senhaEN[255];
    char nomeEN[50];
    char emailEN[50];
    char telefoneEN[50];
    char qntdUsuarios[255];
    int contadorUsuarios = 0;
    char arquivoBD[255];
    char ch = '\0';
    int i = 0;
    int senhaSAUX = 1;
    int usuarioCadastrado = 0;
    int ctecla = 0;
    strcpy(arquivoBD, "loginBD.txt");

    fflush(stdin);

    //entrada de dados

    printf("\nDigite o seu nome: ");
    scanf("%[^\n]", nomeEN);

    printf("\nDigite o seu e-mail: ");
    scanf("%s", emailEN);

    printf("\nDigite o seu numero de telefone: ");
    scanf("%s", telefoneEN);

    printf("\nDigite o nome de usuário: ");
    scanf("%s", usuarioEN);


    printf("\nDigite a sua senha: ");

    //limpar array da senha de entrada
    for (i = 0; i < 255; i++)
    {
        senhaEN[i] = '\0';
    }
    fflush(stdin);

    //mascara da senha
    while (senhaSAUX == 1)
    {
        ch = getch();
        switch(ch)
        {
        case BACKSPACE:
            if (ctecla > 0)
            {
                fflush(stdin);
                putch(BACKSPACE);
                ch = '\0';
                senhaEN[ctecla] = ch;
                ctecla--;
                putch(SPACE);
                putch(BACKSPACE);
            }
            break;

        case TAB:
            putch(TAB);
            senhaSAUX = 0;
            break;

        case SPACE:
            break;

        case ENTER:
            putch(ENTER);
            senhaSAUX = 0;
            break;

        default:
            senhaEN[ctecla] = ch;
            putch('*');
            ctecla++;
            break;

        }
    }

     //criptografando a senha
    char * criptografar( char * senha_c)
    {
        char * temp = senha_c;
        char * senhaCriptografada = ( char * )malloc( sizeof(char) * strlen(senha_c));

        if (!senhaCriptografada)
        {
            printf("Erro de memória!\n");
            return NULL;
        }
        memset(senhaCriptografada, '\0', sizeof(char) * strlen(senha_c));

        for ( ; *temp; temp++)
        {
            char * str_pos = strchr( ALFABETO, *temp);
            int pos = str_pos - ALFABETO;
            char temp[2] = {CONVERTE[pos], '\0'};
            strncat(senhaCriptografada, temp, 1);
        }
        return senhaCriptografada;
    }

    //arquivo para armazenar usuário, telefone, tipo de usuário e email
    FILE *cadastro;
    cadastro = fopen(arquivoBD, "r");

    //arquivo para armazenar o nome completo
    FILE *NomeCompleto;

    //verificar se existe usuário
    int id = 0;
     while(fgets(qntdUsuarios,255,cadastro) != NULL)
    {
        fscanf(cadastro, "%s", usuarioSA);

        if (strcmp(usuarioEN,usuarioSA) == 0)
        {
         contadorUsuarios++;
        }

        id++;

    }
    fclose(cadastro);

    switch(id)
    {
    case 0:
        break;
    default:
        id--;
    }

    if (contadorUsuarios > 0)
    {
        printf(RED "\n\n[!] Este usuário já está cadastrado!\n" RESET);
        getch();
        telaCadastroeLogin();
    }
    else{
        cadastro = fopen("loginBD.txt", "a");
        fflush(stdin);
        usuarioCadastrado = 1;
        fprintf(cadastro, "\n%s %s U %s %s %d", usuarioEN, criptografar(senhaEN), emailEN, telefoneEN, id);
        fclose(cadastro);
        fflush(stdin);


    }

    if (usuarioCadastrado == 1)
    {
        NomeCompleto = fopen("NomeBD.txt", "a");
        fprintf(NomeCompleto, "\n%s", nomeEN);
        fclose(NomeCompleto);
        printf(GREEN"\n\n[+] Usuário cadastrado com sucesso!\n"RESET);
        getch();
        telaCadastroeLogin();
    }




}

void cadastrarColabFunction()
{

    char usuarioEN[255];
    char usuarioSA[25555];
    char senhaEN[255];
    char nomeEN[50];
    char emailEN[50];
    char telefoneEN[50];
    char qntdUsuarios[255];
    int contadorUsuarios = 0;
    char arquivoBD[255];
    char ch = '\0';
    int i = 0;
    int senhaSAUX = 1;
    int usuarioCadastrado = 0;
    int ctecla = 0;
    strcpy(arquivoBD, "loginBD.txt");

    fflush(stdin);

    //entrada de dados

    printf("\nDigite o seu nome: ");
    scanf("%[^\n]", nomeEN);

    printf("\nDigite o seu e-mail: ");
    scanf("%s", emailEN);

    printf("\nDigite o seu numero de telefone: ");
    scanf("%s", telefoneEN);

    printf("\nDigite o nome de usuário do colaborador: ");
    scanf("%s", usuarioEN);


    printf("\nDigite a sua senha: ");

    //limpar array da senha de entrada
    for (i = 0; i < 255; i++)
    {
        senhaEN[i] = '\0';
    }
    fflush(stdin);

    //mascara da senha
    while (senhaSAUX == 1)
    {
        ch = getch();
        switch(ch)
        {
        case BACKSPACE:
            if (ctecla > 0)
            {
                fflush(stdin);
                putch(BACKSPACE);
                ch = '\0';
                senhaEN[ctecla] = ch;
                ctecla--;
                putch(SPACE);
                putch(BACKSPACE);
            }
            break;

        case TAB:
            putch(TAB);
            senhaSAUX = 0;
            break;

        case SPACE:
            break;

        case ENTER:
            putch(ENTER);
            senhaSAUX = 0;
            break;

        default:
            senhaEN[ctecla] = ch;
            putch('*');
            ctecla++;
            break;

        }
    }

     //criptografando a senha
    char * criptografar( char * senha_c)
    {
        char * temp = senha_c;
        char * senhaCriptografada = ( char * )malloc( sizeof(char) * strlen(senha_c));

        if (!senhaCriptografada)
        {
            printf("Erro de memória!\n");
            return NULL;
        }
        memset(senhaCriptografada, '\0', sizeof(char) * strlen(senha_c));

        for ( ; *temp; temp++)
        {
            char * str_pos = strchr( ALFABETO, *temp);
            int pos = str_pos - ALFABETO;
            char temp[2] = {CONVERTE[pos], '\0'};
            strncat(senhaCriptografada, temp, 1);
        }
        return senhaCriptografada;
    }

    //arquivo para armazenar usuário, telefone, tipo de usuário e email
    FILE *cadastro;
    cadastro = fopen(arquivoBD, "r");

    //arquivo para armazenar o nome completo
    FILE *NomeCompleto;

    //verificar se existe usuário
    int id = 0;
     while(fgets(qntdUsuarios,255,cadastro) != NULL)
    {
        fscanf(cadastro, "%s", usuarioSA);

        if (strcmp(usuarioEN,usuarioSA) == 0)
        {
         contadorUsuarios++;
        }
        id++;
    }
    fclose(cadastro);

     switch(id)
    {
    case 0:
        break;
    default:
        id--;
    }

    if (contadorUsuarios > 0)
    {
        printf(RED "\n\n[!] Este colaborador já está cadastrado!\n" RESET);
        getch();
        colaboradores();
    }
    else{
        cadastro = fopen("loginBD.txt", "a");
        fflush(stdin);
        usuarioCadastrado = 1;
        fprintf(cadastro, "\n%s %s S %s %s %d", usuarioEN, criptografar(senhaEN), emailEN, telefoneEN, id);
        fclose(cadastro);
        fflush(stdin);


    }

    if (usuarioCadastrado == 1)
    {
        NomeCompleto = fopen("NomeBD.txt", "a");
        fprintf(NomeCompleto, "\n%s", nomeEN);
        fclose(NomeCompleto);
        printf(GREEN"\n\n[+] Colaborador cadastrado com sucesso!\n"RESET);
        getch();
        colaboradores();
    }




}

void loginFunction()
{
    char usuarioEN[255];
    char senhaEN[255];
    char tipoUsuario[255];
    int contadorUsuarios = 0;
    int usuarioAutenticado = 0;
    char arquivoBD[255];
    int i = 0;
    strcpy(arquivoBD, "loginBD.txt");

    // variaveis do BD
    char usuarioSA[2555];
    char senhaSA[2555];
    char emailSA[5055];
    char telefoneSA[5055];
    char nomeSA[20055];
    int senhaSAUX = 1;
    int ctecla = 0;
    char qntdUsuarios[25555];
    char ch = '\0';

    //entrada de dados
    printf("\nDigite o seu usuario: ");
    scanf("%s", usuarioEN);
    printf("\nDigite a sua senha: ");

    fflush(stdin);


    //limpar array da senha de entrada
    for (i = 0; i < 255; i++)
    {
        senhaEN[i] = '\0';
    }

    //mascara da senha
    while (senhaSAUX == 1)
    {
        ch = getch();
        switch(ch)
        {
        case BACKSPACE:
            if (ctecla > 0)
            {
                fflush(stdin);
                putch(BACKSPACE);
                ch = '\0';
                senhaEN[ctecla] = ch;
                ctecla--;
                putch(SPACE);
                putch(BACKSPACE);
            }
            break;

        case TAB:
            putch(TAB);
            senhaSAUX = 0;
            break;

        case ENTER:
            putch(ENTER);
            senhaSAUX = 0;
            break;

        case SPACE:
            break;

        default:
            senhaEN[ctecla] = ch;
            putch('*');
            ctecla++;
            break;

        }
    }

     // comunicação com o TXT
    FILE *login;
    login = fopen(arquivoBD, "r");

    //arquivo para armazenar o nome completo
    FILE *NomeCompleto;

    //char para descriptografar a senha
    char * descriptografar (char * senha_d)
    {
        char * temp = senha_d;
        char * senhaDescriptografada = ( char * )malloc( sizeof(char) * strlen(senha_d));

        if (!senhaDescriptografada)
        {
            printf("Erro de memória!\n");
            return NULL;
        }
        memset(senhaDescriptografada, '\0', sizeof(char) * strlen(senha_d));

        for ( ; *temp; temp++)
        {
            char * str_pos = strchr( CONVERTE, *temp);
            int pos = str_pos - CONVERTE;
            char temp[2] = {ALFABETO[pos], '\0'};
            strncat(senhaDescriptografada, temp, 1);
        }
        return senhaDescriptografada;
    }

    while(fgets(qntdUsuarios,255,login) != NULL){

        fscanf(login, "%s %s %s %s %s", usuarioSA, senhaSA, tipoUsuario, emailSA, telefoneSA);
        contadorUsuarios++;

        if (strcmp(usuarioEN,usuarioSA) == 0){

            char * senhaSAD = descriptografar(senhaSA);
            if (strcmp(senhaEN,senhaSAD) == 0){
                if (strcmp(tipoUsuario, "S") == 0)
                {
                    printf(GREEN "\n\n[!] - Sessão estabelecida!\n" RESET);
                    usuarioAutenticado = 1;
                    strcat(UsuarioAutenticado,usuarioSA);
                    getch();
                    fclose(login);
                    menuPrincipal();
                }
                else{
                    fclose(login);
                    printf(GREEN "\n\n[!] - Sessão estabelecida!\n" RESET);
                    usuarioAutenticado = 1;
                    strcat(UsuarioAutenticado,usuarioSA);
                    strcat(TelefoneAutenticado,telefoneSA);
                    strcat(EmailAutenticado,emailSA);
                }

            }
        }
    }

     //capturar o Nome completo do usuário/colaborador

    if (usuarioAutenticado == 0){
        printf(RED "\n\n[!] Usuário ou senha incorreta!\n" RESET);
        fclose(login);
        getch();
        telaCadastroeLogin();
    }
    else{
        NomeCompleto = fopen("NomeBD.txt", "r");
        i = 0;

        while(i < contadorUsuarios + 1)
        {
            fgets(nomeSA,200,NomeCompleto);
            i++;

        }

        fclose(NomeCompleto);
        strcat(NomeAutenticado,nomeSA);
        getch();
        menuPrincipalU();
    }

    fclose(login);
}

void telaCadastroeLogin()
{
    system("cls");
    fflush(stdin);
    int opcao = 0;

    while (opcao <1 || opcao > 2)
    {
        system("cls");

        // logo de cadastro
        loginCadastro();

        linhaMedia();

        printf(YELLOW "\n[1] " RESET "- Realizar o Login\n");
        printf(YELLOW "[2] " RESET "- Cadastrar um novo Usuário");

        linhaMedia();

        printf("\n\nEscolha a sua opção: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            loginFunction();
            break;

        case 2:
            cadastrarFunction();
            break;

        default:
            printf(RED "\nOpção inválida!\n");
            getch(); system("cls");
            printf(RESET);
            fflush(stdin);
            break;

        }

    }

}
