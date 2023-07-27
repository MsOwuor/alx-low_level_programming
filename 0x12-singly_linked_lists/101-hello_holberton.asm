global    main
extern    printf

section .data
format db "Hello, Holberton", 0xA, 0

section .text
main:
    mov   edi, format
    xor   eax, eax
    call  printf
    xor   eax, eax    ; Clear EAX register for exit code 0
    ret

