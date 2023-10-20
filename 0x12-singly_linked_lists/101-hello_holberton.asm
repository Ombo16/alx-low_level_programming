section .data
    hello db "Hello, Holberton,",10  ; The string to print with a newline character
    hello_len equ $ - hello           ; Length of the string

section .text
    global main

    extern printf

main:
    sub rsp, 8                        ; Align the stack to 16 bytes for calling printf
    mov rdi, hello                   ; The format string
    call printf                      ; Call the printf function
    add rsp, 8                        ; Restore the stack pointer

    mov rax, 60                      ; syscall number for exit (60 on x86_64)
    xor rdi, rdi                     ; status (0)
    syscall                          ; invoke syscall to exit

section .data
    format db "%s", 0                 ; Null-terminated format string

section .bss
    dummy resb 16                     ; Space for alignment


