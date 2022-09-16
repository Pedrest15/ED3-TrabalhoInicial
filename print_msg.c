#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Firstname[60];
    char Lastname[60];
    char Email[90];
    char Nationality[60];
    int Age;
} Person;

void open_error_msg(){
    printf("Falha no processamento do arquivo\n");
}

void rrn_error_msg(){
    printf("Não foi possível ler o arquivo\n");
}

void print_fileds(FILE* file){

    Person *person = malloc(sizeof(Person));

    fread(person->Firstname, sizeof(char), 51, file);
    printf("Firstname: %s\n",person->Firstname);

    fread(person->Lastname, sizeof(char), 51, file);
    printf("Lastname: %s\n", person->Lastname);
    
    fread(person->Email, sizeof(char), 81, file);
    printf("Email: %s\n", person->Email);
    
    fread(person->Nationality, sizeof(char), 51, file);
    printf("Nationality: %s\n", person->Nationality);
    
    fread(&(person->Age), sizeof(int), 1, file);
    printf("Age: %d\n\n", person->Age);

    free(person);
}