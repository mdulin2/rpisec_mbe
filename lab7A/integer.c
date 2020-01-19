#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


#define MAX_BLOCKS 32 
#define BLOCK_SIZE 4 
int main() {

    // The essence of the bug for lab7A! :)
    unsigned int msg_len = 131;
    
    printf("unsigned %u/block size: %u\n",msg_len, msg_len / BLOCK_SIZE);

    if(msg_len /BLOCK_SIZE > MAX_BLOCKS){
        puts("Reset..."); 
    }else{
        puts("Bypassed the message length!");
    }
}
