#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char note[40]; 
    printf("%p\n",note);
    fgets(note,200, stdin); 
    //system("/bin/sh");
}
