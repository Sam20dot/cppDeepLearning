	.file	"main.cpp"
	.intel_syntax noprefix
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.globl	main
	.type	main, @function
main:
.LFB2178:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 64
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	mov	DWORD PTR -52[rbp], 89
	mov	DWORD PTR -48[rbp], 89
	movsd	xmm0, QWORD PTR .LC0[rip]
	movsd	QWORD PTR -40[rbp], xmm0
	movsd	xmm0, QWORD PTR .LC1[rip]
	movsd	QWORD PTR -32[rbp], xmm0
	mov	eax, DWORD PTR -52[rbp]
	mov	edx, DWORD PTR -48[rbp]
	mov	esi, edx
	mov	edi, eax
	call	_Z3addIiET_S0_S0_
	mov	DWORD PTR -44[rbp], eax
	movsd	xmm0, QWORD PTR -32[rbp]
	mov	rax, QWORD PTR -40[rbp]
	movapd	xmm1, xmm0
	movq	xmm0, rax
	call	_Z3addIdET_S0_S0_
	movq	rax, xmm0
	mov	QWORD PTR -24[rbp], rax
	lea	rax, -52[rbp]
	mov	QWORD PTR -16[rbp], rax
	mov	eax, 0
	mov	rdx, QWORD PTR -8[rbp]
	sub	rdx, QWORD PTR fs:40
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2178:
	.size	main, .-main
	.section	.text._Z3addIiET_S0_S0_,"axG",@progbits,_Z3addIiET_S0_S0_,comdat
	.weak	_Z3addIiET_S0_S0_
	.type	_Z3addIiET_S0_S0_, @function
_Z3addIiET_S0_S0_:
.LFB2433:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	mov	DWORD PTR -20[rbp], edi
	mov	DWORD PTR -24[rbp], esi
	mov	edx, DWORD PTR -20[rbp]
	mov	eax, DWORD PTR -24[rbp]
	add	eax, edx
	mov	DWORD PTR -4[rbp], eax
	mov	eax, DWORD PTR -4[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2433:
	.size	_Z3addIiET_S0_S0_, .-_Z3addIiET_S0_S0_
	.section	.text._Z3addIdET_S0_S0_,"axG",@progbits,_Z3addIdET_S0_S0_,comdat
	.weak	_Z3addIdET_S0_S0_
	.type	_Z3addIdET_S0_S0_, @function
_Z3addIdET_S0_S0_:
.LFB2434:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	movsd	QWORD PTR -24[rbp], xmm0
	movsd	QWORD PTR -32[rbp], xmm1
	movsd	xmm0, QWORD PTR -24[rbp]
	addsd	xmm0, QWORD PTR -32[rbp]
	movsd	QWORD PTR -8[rbp], xmm0
	movsd	xmm0, QWORD PTR -8[rbp]
	pop	rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2434:
	.size	_Z3addIdET_S0_S0_, .-_Z3addIdET_S0_S0_
	.section	.rodata
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.align 8
.LC0:
	.long	-584115552
	.long	1081253924
	.align 8
.LC1:
	.long	0
	.long	1082904576
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
