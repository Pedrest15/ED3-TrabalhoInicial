#include <stdio.h>

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
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        open_error_msg();
        return;
    }

    int RRN;
    scanf("%d", &RRN); //recebe um rrn do teclado
    int pos = RRN * TAM_REG; //formula para byte offset
    if (record_position(file, pos) == -1){
        return;
    }

    //cria variaveis para cada campo de um registro
    char Firstname[60];
    char Lastname[60];
    char Email[90];
    char Nationality[60];
    int Age;

    //imprime os campos do registro com o rrn lido
    print_fileds(file, Firstname, Lastname, Email, Nationality, Age);

    close_file(file); //fecha o arquivo usado
}