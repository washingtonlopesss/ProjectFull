#ifndef CLOUDHEADER_H_INCLUDED
#define CLOUDHEADER_H_INCLUDED

//bibliotecas
#include "stdio.h"
#include "stdlib.h"
#include "locale.h"
#include "windows.h"
#include "conio.h"
#include "string.h"
#include "ctype.h"

//teclas
#define ENTER 13    // CÓDIGO ASCII DA TECLA ENTER
#define BACKSPACE 8 // CÓDIGO ASCII DA TECLA BACKSPACE
#define SPACE 32    // CÓDIGO ASCII DA TECLA BARRA DE ESPACO
#define TAB 9       // CÓDIGO ASCII DA TECLA TAB
#define ESC 27      // CÓDIGO ASCII DA TECLA ESC

#define BUFFER 2555

//cores
#define RED2        "\x1b[31m"
#define RESET       "\x1b[0m"
#define RED         "\e[0;31m"
#define GRAY        "\e[0;37m"
#define DARK_GRAY 	"\e[1;30m"
#define GREEN	    "\e[0;32m"
#define BLACK       "\e[0;30m"
#define YELLOW      "\e[0;33m"
#define BLUE        "\e[0;34m"
#define PURPLE      "\e[0;35m"
#define CYAN        "\e[0;36m"
#define WHITE       "\e[0;37m"
#define BG_GREEN    "\e[42m"
#define BG_BLUE     "\e[44m"
#define HWHITE      "\e[0;97m"
#define HRED        "\e[0;91m"

//criptografia simples para senhas
#define ALFABETO "abcdefghijklmnopqrstuvwxyz1234567890 "
#define CONVERTE "0123456789!@#$%&*()_+-.;/,?afylxpgtzc"

//variaveis globais
char UsuarioAutenticado[255];
char TelefoneAutenticado[255];
char EmailAutenticado[255];
char NomeAutenticado[255];



#endif // CLOUDHEADER_H_INCLUDED
