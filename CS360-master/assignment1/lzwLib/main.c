#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "include/bitStream.h"
#include "include/dict.h"
#include "include/sequence.h"
#include "include/lzw.h"

// cc -o main main.c -L/home/sarah.robison-mathes/Desktop/CS360-master/assignment1/lzwLib -llzw

int main(void){

     FILE *context;
     context = fopen("input.txt","r");
     char c;

     while ( !(feof(context)) ){
          readFunc(context);
     }

}
