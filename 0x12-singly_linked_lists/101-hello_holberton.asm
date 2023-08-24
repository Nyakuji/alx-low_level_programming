section .data
    msg db "Hello, Holberton", 0  ; Null-terminated string
    fmt db "%s", 10, 0           ; Format string: "%s" followed by newline and null terminator

section .text
    extern printf
    global main

main:
    mov esi, msg    ; Load the address of the message into ESI
    mov edi, fmt    ; Load the address of the format string into EDI
    xor eax, eax    ; Clear EAX register (set it to 0)
    call printf     ; Call the printf function

    xor eax, eax    ; Clear EAX register again (optional)
    ret             ; Return from the main function

