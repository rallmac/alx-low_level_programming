section .data
    format db 'Hello, Holberton', 10, 0  ; Define the format string with newline character

section .text
    global main
    extern printf

main:
    mov edi, format        ; Move the address of the format string into the EDI register
    xor eax, eax           ; Clear the EAX register
    call printf            ; Call the printf function
    mov eax, 0             ; Set the return value to 0
    ret                    ; Return from the main function


