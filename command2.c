#include <stdio.h>

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
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        open_error_msg();
        return;
    }
    
    //cria variaveis para cada campo de um registro
    char Firstname[60];
    char Lastname[60];
    char Email[90];
    char Nationality[60];
    int Age;

    //obtem o numero de registros do arquivo aberto
    int num_rec = qnt_records(file);

    //le todos registros do arquivo e imprime os campos de cada um
    for(int i = 0; i < num_rec; i++){
        print_fileds(file, Firstname, Lastname, Email, Nationality, Age);
    }

    close_file(file);  //fecha o arquivo usado
}