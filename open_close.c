#include <stdio.h>

#include "open_close.h"
#include "print_msg.h"

FILE* open_file(char* filename, int mode){
    FILE* file;
    if (mode == FILE_READB) {
        file = fopen(filename, "rb");
        if (file == NULL) {
            open_error_msg();
            return NULL;
        }
    } else if (mode == FILE_WRITEB) {
        file = fopen(filename, "wb");
    }
    return file;
}

void close_file(FILE* file){
    fclose(file);
}
