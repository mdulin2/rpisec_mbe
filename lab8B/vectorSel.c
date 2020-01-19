

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Struct stuff
struct vector v1;
struct vector v2;
struct vector v3;
struct vector* faves[10];

// Struct to test
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


struct vector* vectorSel()
{
    printf("Which vector? ");
        char sel;
            while((sel = getchar()) == '\n'); // I love C.
                switch(sel)
                    {
                            case '1':
                                        return &v1;
                                                case '2':
                                                            return &v2;
                                                                    case '3':
                                                                                return &v3;
                                                                                        default:
                                                                                                    printf("\nBAD VECTOR SELECTION\n");
                                                                                                                exit(EXIT_FAILURE);
                                                                                                                    }
                                                                                                                    }


int main(int argc, char** argv){
   
    struct vector* v = vectorSel();
    printf("Size of 1... %i", sizeof(v));
    printf("Size of struct... %i", sizeof(struct vector));
    // Initialize the structs



}
