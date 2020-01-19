#include <stdio.h> 
#include <malloc.h> 


int main(){
    
    int index = 0;
    while(1){
        
        // Size of the amount of memory to allocate
        int size; 
        printf("Enter how many bytes you want to allocate :)\n");
        scanf("%d", &size); 
        char* buf = malloc(size); 
        
        // Put the string onto the heap
        printf("Enter the string\n");
        scanf("%s",buf);

        // Add this to the pointer array :) 

        printf("Location of the string is at %p\n", &buf);
    }
}
