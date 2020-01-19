  
  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>

int *global_addr;
int *global_addr_check;

int main(){

    char buf[24]; 
    fgets(buf, 30, stdin);
    global_addr = (&buf+1);
    global_addr_check = global_addr-0x2;
    // Prints the variable locations!
    printf("Actual %p, First%x, Second %x\n", buf, global_addr, global_addr_check); 

    printf("?:%p, %p \n", *(global_addr), *(global_addr_check));

}
