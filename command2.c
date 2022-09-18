#include <stdio.h>
#include <stdlib.h>

#include "command2.h"
#include "open_close.h"
#include "print_msg.h"

//calcula a quantidade de registros que ha no arquivo aberto

void command_2(char* filename){
    FILE* file = open_file(filename, FILE_READB);
    if (file == NULL) {
        return;
    }
    
    //le todos registros do arquivo e imprime os campos de cada um
    while (1){
        
        int flag = print_fileds(file);
        if (flag == -1){
            break;
        }
    }

    close_file(file);  //fecha o arquivo usado
}