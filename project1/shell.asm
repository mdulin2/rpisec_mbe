section .text 
global _start 

_start: 

    xor eax, eax
    xor ecx, ecx 
    xor edx, edx
    ;/bin/sh
    push eax
    push   0x68732f6e
    push   0x69622f2f
    
    mov ebx, esp
    mov al, 0xb
    int 0x80

section .data 
msg db '/bin/sh'

