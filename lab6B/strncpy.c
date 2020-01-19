
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main(int argc, char* argv[]){
    
    char password[32];
    char username[32];
    char readbuff[128]; 

    printf("Enter your username: ");
    fgets(readbuff, sizeof(readbuff), stdin);

    /* use safe strncpy to copy username from the read buffer */
    strncpy(username, readbuff, sizeof(username));

    printf("Username: %s", username); 
}
