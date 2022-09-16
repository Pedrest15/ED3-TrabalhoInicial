#ifndef __PRINT_MSG_H__
#define __PRINT_MSG_H__

//mensagem de erro para erro ao tentar abrir um arquivo
void open_error_msg();

//mensagem de erro para RRN invalido
void rrn_error_msg();

//imprime todos os campos do registro
void print_fileds(FILE* file);

#endif