section .data
    hello db "Hello, Holberton",0
    format db "%s", 10, 0  ; Format string with newline

section .text
    global main
    extern printf

main:
    push hello
    push format
    call printf

    add rsp, 16  ; Restore the stack

    ; Exit the program
    mov rax, 60         ; syscall number for exit (60)
    xor rdi, rdi        ; status = 0
    syscall

