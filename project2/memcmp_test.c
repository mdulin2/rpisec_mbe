#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
#include <string.h>
int main(void) {
    /* Create two arrays to hold our data */
    char example1[50];
    char example2[50];

    /* Copy two strings into our data arrays
     (These can be any data and do not have to be strings) */
    strcpy(example1, "\x00C");
    strcpy(example2, "\x00 "); 

    int result = memcmp(example1, example2, 9);

    printf("%d\n", result); 



}
