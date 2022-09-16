#include <stdio.h>

void open_error_msg(){
    printf("Falha no processamento do arquivo\n");
}

void rrn_error_msg(){
    printf("Não foi possível ler o arquivo\n");
}

void print_fileds(FILE* file, char* Firstname, char* Lastname, char* Email, char* Nationality, int Age){
    fread(Firstname, sizeof(char), 51, file);
    printf("Firstname: %s\n",Firstname);

    fread(Lastname, sizeof(char), 51, file);
    printf("Lastname: %s\n", Lastname);
    
    fread(Email, sizeof(char), 81, file);
    printf("Email: %s\n", Email);
    
    fread(Nationality, sizeof(char), 51, file);
    printf("Nationality: %s\n", Nationality);
    
    fread(&Age, sizeof(int), 1, file);
    printf("Age: %d\n\n", Age);
}