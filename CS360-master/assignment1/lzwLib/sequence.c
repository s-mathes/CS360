#include <stdlib.h>
#include <sequence.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

Sequence* newSequence(unsigned char firstByte, unsigned long long hashSize) {
    return NULL;
}

void deleteSequence(Sequence* sequence) {
}

Sequence* copySequenceAppend(Sequence* sequence, unsigned char addByte, unsigned int hashSize) {
    return NULL;
}

unsigned int outputSequence(Sequence* sequence,
                    void (*writeFunc)(unsigned char c, void* context), void* context) {
     return 0;
}

bool identicalSequences(Sequence* a, Sequence* b) {
    return true;
}

     // 'context' is the pointer to the file that is being read from.
int readFunc(void* context){

     char buffer[1];
     int theByte = 0;

     if ( feof(context) ){ // end of file is reached
          return(-1);
     }
     else {
          theByte = fread(buffer,sizeof(char),1,context);
          printf("%1s\n",buffer);
          return( (int)buffer );
     }

}

void writeFunc(unsigned char c, void* context){
     return;
}
