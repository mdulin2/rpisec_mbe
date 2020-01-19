#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 

int main(void) {

    int* var1 = malloc(0x34); 

    int time_seed_1; 
    int time_seed_2; 
    
    time_seed_1 = *var1; 
    time_seed_2 = time((time_t *)0x0); 

    printf("Seed 1 %d\n",time_seed_1);

    // Unix timestamp
    printf("Seed 2 %d\n", time_seed_2);

}
