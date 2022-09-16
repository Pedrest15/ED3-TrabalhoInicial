#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "command1.h"
#include "command2.h"
#include "command3.h"
#include "funcoesFornecidas.h"

int main(void) {
    
    int command;
    char filename[16];
    scanf("%d ", &command); //recebe do teclado qual comando usar
    fgets(filename, 16, stdin); //recebe do teclado o nome do arquivo a usar

    switch (command)
    {
    case 1: // comando 1
        filename[strlen(filename)-1] = '\0'; //troca o \n por um \0
        command_1(filename); //executa o comando
        binarioNaTela(filename);
        break;
    
    case 2: // comando 2
        // filename[strlen(filename)-1] = '\0'; //troca o \n por um \0
        command_2(filename); //executa o comando
        break;

    case 3: // comando 3
        filename[strlen(filename)-1] = '\0'; //troca o \n por um \0
        command_3(filename); //executa o comando
        break;

    default:
        break;
    }
}