#include <stdio.h>
#include <stdlib.h>

#include "command3.h"
#include "open_close.h"
#include "print_msg.h"

//verifica se o rrn lido do teclado indica uma posicao valida no arquivo
int record_position(FILE* file, int pos){
    fseek(file, 0, SEEK_END);
    if (pos > ftell(file)) {
        rrn_error_msg();
        return -1; //erro, rrn invalido
    }
    fseek(file, pos, SEEK_SET);
    
    return 0; //sucesso
}


void command_3(char* filename) {
    FILE* file = open_file(filename, FILE_READB);
    if (file == NULL) {
        return;
    }

    int RRN;
    scanf("%d", &RRN); //recebe um rrn do teclado
    int pos = RRN * TAM_REG; //formula para byte offset
    if (record_position(file, pos) == -1){
        return;
    }

    //imprime os campos do registro com o rrn lido
    print_fileds(file);

    close_file(file); //fecha o arquivo usado
}