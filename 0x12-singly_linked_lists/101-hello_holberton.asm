;Hello, Holberton program followed by a new line

section .data
    message db "Hello, Holberton!\n",0

section .text
    global main

main:
    ; Syscall number for write (1)
    mov rax, 1

    ; File descriptor for stdout (1)
    mov rdi, 1

    ; Address of the message
    lea rsi, [rel message]

    ; Length of the message
    mov rdx, 15

    ; Make the syscall (write)
    syscall

    ; Exit the program
    mov rax, 60         ; Syscall number for exit (60)
    xor rdi, rdi        ; Status code 0
    syscall

