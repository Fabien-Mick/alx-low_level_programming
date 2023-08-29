section .data
    hello db "Hello, Holberton", 0
    newline db 10 ; New line character
    format db "%s", 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; Print a new line
    mov rdi, newline
    xor rax, rax
    call printf

    pop rbp
    ret
