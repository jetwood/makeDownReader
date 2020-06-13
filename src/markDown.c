//
// Created by jetwood on 2020/6/13.
//
#include "markDown.h"
int headline_detective(char ch){
    if (ch == '#') {
        int level = 1;
        while(ch = getc(file))
    }
}
int headline(FILE *file){
    int level = 1;
    int length = 0;
    char ch;
    if ((ch = getc(file)) == '#'){
        ++count;
        headline(file);
    }else  return 0;
}
