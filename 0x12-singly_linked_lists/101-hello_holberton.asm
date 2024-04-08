section .data
	hello db "Hello, Holberton", 0

section .text
	global main

main:
	; Print the hello message
	mov rax, 1
	mov rdi, 1
	mov rsi, hello
	mov rdx, 16
	syscall

	; Exit the program
	mov rax, 60
	xor rdi, rdi
	syscall
