section .data
    hello_message db "Hello, Holberton",0
    format db "%s", 10, 0  ; "%s" format with newline (10) and null terminator (0)

section .text
    global main

extern printf

main:
    push rdi             ; Preserve registers
    push rsi
    push rax

    lea rdi, [hello_message] ; Load address of the hello_message string
    lea rsi, [format]        ; Load address of the format string
    call printf             ; Call printf with the strings as arguments

    pop rax              ; Restore registers
    pop rsi
    pop rdi

    xor rax, rax         ; Return 0
    ret
