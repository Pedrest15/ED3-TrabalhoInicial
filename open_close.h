#ifndef __OPEN_CLOSE_H__
#define __OPEN_CLOSE_H__

#define FILE_READB 0
#define FILE_WRITEB 1


FILE* open_file(char* filename, int mode);
void close_file(FILE* file);

#endif