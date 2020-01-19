
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(){

    char numbuf[32];
    unsigned int i = 0;

    /* get message index to destroy */
    printf("-Input message index to edit: ");
    fgets(numbuf, sizeof(numbuf), stdin);
    i = strtoul(numbuf, NULL, 10);

    printf("i: %u\n", i); 
}
