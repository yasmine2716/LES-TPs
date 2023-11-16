.data
entier1: .word 5
entier2: .word 7
.text
.globl main
main:
lw $t0, entier1
lw $t1, entier2
beq $t0, $t1, egal # Si égaux
bgt $t0, $t1, plus_grand
blt $t0, $t1, plus_petit
plus_grand:
la $a0, plus_grand_msg
j fin
plus_petit:
la $a0, plus_petit_msg
j fin
egal:
la $a0, egal_msg
fin:
li $v0, 4
syscall
li $v0, 10
syscall
.data
plus_grand_msg: .asciiz "Plus grand\n"
plus_petit_msg: .asciiz "Plus petit\n"
egal_msg: .asciiz "Égaux\n"
