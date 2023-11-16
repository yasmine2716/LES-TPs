.data
.text
.globl main
main:
li $t0, 1
# Initialise le compteur
loop:
beq $t0, 11, end # Si le compteur atteint 11, sortir de la boucle
# Affiche la valeur du compteur
move $a0, $t0
li $v0, 1
syscall
# Saute à la fin de la boucle
addi $t0, $t0, 1
j loop
end:
li $v0, 10
syscall
