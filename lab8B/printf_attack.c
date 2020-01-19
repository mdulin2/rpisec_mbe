#include<stdio.h>
#include<stdlib.h>
#include<string.h>


    struct vector {
        void (*printFunc)(struct vector*);
            char a;
                short b;
                    unsigned short c;
                        int d;
                            unsigned int e;
                                long f;
                                    unsigned long g;
                                        long long h;
                                            unsigned long long i;
}; 

struct vector v1;

void enterData()
{
    struct vector* v = &v1; 
                                    printf("Data entry time!\n");
                                        printf("char a: ");
                                            while((v->a = getchar()) == '\n'); // Still love C.
                                                printf("short b: ");
                                                    scanf("%hd", &(v->b));
                                                        printf("unsigned short c: ");
                                                            scanf("%hu", &(v->c));
                                                                printf("int d: ");
                                                                    scanf("%d", &(v->d));
                                                                        printf("unsigned int e: ");
                                                                            scanf("%u", &(v->e));
                                                                                printf("long f: ");
                                                                                    scanf("%ld", &(v->f));
                                                                                        printf("unsigned long g: ");
                                                                                            scanf("%lu", &(v->g));
                                                                                                printf("long long h: ");
                                                                                                    scanf("%lld", &(v->h));
                                                                                                        printf("unsigned long long i: ");
                                                                                                            scanf("%llu", &(v->i));
                                                                                                                v->printFunc = printf;
                                                                                                                }


int main(){

    int x = 0; 
    int* y = &x;
    printf("Pointer to v1...%p\n",&v1); 
    // Try to change this value...
    printf("Pointer to x: %p\n",y);
    
    // Get the vector stuff...
    enterData(); 
    v1.b = v1.b + 65535;
    printf("Pointer to x:%p\n",y);
    v1.printFunc(&v1); 
    
}
