#include <stdio.h>

#include "open_close.h"
#include "print_msg.h"

/*int open_file(char* filename, FILE* file, int mode){
    if (mode == FILE_READB) {
        file = fopen(filename, "rb");
        if (file == NULL) {
            open_error_msg();
            return -1
        }
    } else if (mode == FILE_WRITEB) {
        file = fopen(filename, "wb");
    }
    return 0;
}*/

void close_file(FILE* file){
    fclose(file);
}
