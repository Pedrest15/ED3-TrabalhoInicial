#include <stdio.h>

#include "command1.h"
#include "open_close.h"
#include "funcoesFornecidas.h"

//coloca o caracter de lixo no fim do campo se necessario
void insert_garbage(char* input, int max_position) { 
    int i = 0;
    while(input[i] != '\0'){
        i++;
    }

    if (i < max_position) {
        
        i++;
        while (i < max_position) {
            input[i++] = '$';
        }

    } else if (i == max_position) { 
        //campo ja preenche seu tamanho limite, nao precisa de lixo
    } else {
        //caso o tamanho da string seja maior que o do campo, corta a string
        input[max_position] = '\0';
    }
}

void write_string_file(FILE* file, char* input, int len){
    readline(input);
    insert_garbage(input, len);
    fwrite(input, sizeof(char), len, file);
}

void command_1(char* filename) {
    FILE* file = open_file(filename, FILE_WRITEB);
    
    int num;
    scanf("%d", &num); //le do teclado quantos registros serao digitados

    char input[90];
    int Age;
    for(int i = 0; i < num; i++) {
        //le e grava o campo Firsname
        write_string_file(file, input, 51);

        //le e grava o campo Lastname
        write_string_file(file, input, 51);
        
        //le e grava o campo Email
        write_string_file(file, input, 81);
    
        //le e grava o campo Nacionalidade
        write_string_file(file, input, 51);
    
        //le e grava o campo Age
        scanf("%d", &Age);
        fwrite(&Age, sizeof(int), 1, file);
    }

    close_file(file); //fecha o arquivo usado
}