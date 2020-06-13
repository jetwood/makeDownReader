//
// Created by jetwood on 2020/6/13.
//
#include <stdlib.h>
#include <stdio.h>
#include <markDown.h>

int main(int argc, char *argv[]){
    int ch;
    FILE *fp;
    if (argc !=2) {
        printf("%s Missing argument: filename", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL){
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp) != EOF)){
        putc(ch, stdout);
    }
    fclose(fp);
    return 0;
}
