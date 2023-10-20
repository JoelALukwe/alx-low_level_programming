
section .data
    format db "Hello, Holberton",0xa,0   ; Format string with new line

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status 0
    syscall


