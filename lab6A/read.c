#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv){

    char temp[8]; 
    read(0, temp, 8); 
    puts(temp);
    
    int i = 0; 
    while(i < 8){
        printf("%d: %d\n", i, temp[i]); 
        i++;
    }

}
