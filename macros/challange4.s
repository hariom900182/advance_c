	.file	"challange4.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter a character: "
.LC1:
	.string	"%c"
.LC2:
	.string	"true"
.LC3:
	.string	"false"
.LC4:
	.string	"IS_UPPER  = %s \n"
.LC5:
	.string	"IS_LOWER  = %s \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-9(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-9(%rbp), %eax
	cmpb	$64, %al
	jle	.L2
	movzbl	-9(%rbp), %eax
	cmpb	$90, %al
	jle	.L3
.L2:
	movzbl	-9(%rbp), %eax
	cmpb	$96, %al
	jle	.L4
	movzbl	-9(%rbp), %eax
	cmpb	$122, %al
	jg	.L4
.L3:
	movl	$1, %eax
	jmp	.L5
.L4:
	movl	$0, %eax
.L5:
	cmpl	$1, %eax
	jne	.L6
	movzbl	-9(%rbp), %eax
	cmpb	$64, %al
	jle	.L6
	movzbl	-9(%rbp), %eax
	cmpb	$90, %al
	jg	.L6
	leaq	.LC2(%rip), %rax
	jmp	.L7
.L6:
	leaq	.LC3(%rip), %rax
.L7:
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movzbl	-9(%rbp), %eax
	cmpb	$64, %al
	jle	.L8
	movzbl	-9(%rbp), %eax
	cmpb	$90, %al
	jle	.L9
.L8:
	movzbl	-9(%rbp), %eax
	cmpb	$96, %al
	jle	.L10
	movzbl	-9(%rbp), %eax
	cmpb	$122, %al
	jg	.L10
.L9:
	movl	$1, %eax
	jmp	.L11
.L10:
	movl	$0, %eax
.L11:
	cmpl	$1, %eax
	jne	.L12
	movzbl	-9(%rbp), %eax
	cmpb	$96, %al
	jle	.L12
	movzbl	-9(%rbp), %eax
	cmpb	$122, %al
	jg	.L12
	leaq	.LC2(%rip), %rax
	jmp	.L13
.L12:
	leaq	.LC3(%rip), %rax
.L13:
	movq	%rax, %rsi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L14
	call	__stack_chk_fail@PLT
.L14:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
