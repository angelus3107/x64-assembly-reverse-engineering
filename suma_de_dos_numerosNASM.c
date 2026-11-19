#include <stdio.h>


int prueba(){

    int x = 5;
    int y = 3;

    int suma = x + y;

    return 0;
    
}




//nasm:
	.file	"variables.c"
	.intel_syntax noprefix
	.text
	.globl	"prueba"
	.def	"prueba";	.scl	2;	.type	32;	.endef
	.seh_proc	"prueba"
"prueba":
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 16
	.seh_stackalloc	16
	.seh_endprologue
	mov	DWORD PTR -4[rbp], 5
	mov	DWORD PTR -8[rbp], 3
	mov	edx, DWORD PTR -4[rbp]
	mov	eax, DWORD PTR -8[rbp]
	add	eax, edx
	mov	DWORD PTR -12[rbp], eax
	mov	eax, 0
	add	rsp, 16
	pop	rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev5, Built by MSYS2 project) 16.1.0"
