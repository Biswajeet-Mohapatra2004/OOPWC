	.file	"prime.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.globl	_Z7isPrimei
	.type	_Z7isPrimei, @function
_Z7isPrimei:
.LFB2645:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	cmpl	$1, -20(%rbp)
	jg	.L2
	movl	$0, %eax
	jmp	.L3
.L2:
	movl	$2, -4(%rbp)
	jmp	.L4
.L6:
	movl	-20(%rbp), %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	testl	%eax, %eax
	jne	.L5
	movl	$0, %eax
	jmp	.L3
.L5:
	addl	$1, -4(%rbp)
.L4:
	pxor	%xmm1, %xmm1
	cvtsi2sdl	-4(%rbp), %xmm1
	movsd	%xmm1, -32(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	_ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_
	movq	%xmm0, %rax
	movq	%rax, %xmm2
	comisd	-32(%rbp), %xmm2
	setnb	%al
	testb	%al, %al
	jne	.L6
	movl	$1, %eax
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2645:
	.size	_Z7isPrimei, .-_Z7isPrimei
	.section	.rodata
.LC0:
	.string	"Enter a number: "
.LC1:
	.string	"Is "
.LC2:
	.string	" prime: "
.LC3:
	.string	"Yes"
.LC4:
	.string	"No"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2646:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	_ZSt3cin(%rip), %rax
	movq	%rax, %rdi
	call	_ZNSirsERi@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rbx
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	_Z7isPrimei
	testb	%al, %al
	je	.L8
	leaq	.LC3(%rip), %rax
	jmp	.L9
.L8:
	leaq	.LC4(%rip), %rax
.L9:
	movq	%rax, %rsi
	movq	%rbx, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2646:
	.size	main, .-main
	.section	.text._ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_,"axG",@progbits,_ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_,comdat
	.weak	_ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_
	.type	_ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_, @function
_ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_:
.LFB2971:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	pxor	%xmm1, %xmm1
	cvtsi2sdl	-4(%rbp), %xmm1
	movq	%xmm1, %rax
	movq	%rax, %xmm0
	call	sqrt@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2971:
	.size	_ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_, .-_ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_
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
	.ident	"GCC: (Debian 14.2.0-3) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
