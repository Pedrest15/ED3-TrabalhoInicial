#include <stdio.h>
#include <stdlib.h>

#include "command2.h"
#include "open_close.h"
#include "print_msg.h"

//calcula a quantidade de registros que ha no arquivo aberto
int qnt_records(FILE *file) {
    fseek(file, 0, SEEK_END);
    int x = ftell(file) / LEN_REC; 
    fseek(file, 0, SEEK_SET);

    return x;
}

void command_2(char* filename){
    FILE* file = open_file(filename, FILE_READB);
    if (file == NULL) {
        return;
    }

    //obtem o numero de registros do arquivo aberto
    int num_rec = qnt_records(file);
    
    //le todos registros do arquivo e imprime os campos de cada um
    for(int i = 0; i < num_rec; i++){
        
        print_fileds(file);
    }

    close_file(file);  //fecha o arquivo usado
}