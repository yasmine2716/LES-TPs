.text
.globl main
fact:
# Fonction pour calculer la factorielle
# $a0 : Entrée (n)
# $v0 : Sortie (n!)
addi $sp, $sp, -8
sw $ra, 4($sp)
# Sauvegarde $ra
sw $a0, 0($sp)
# Sauvegarde $a0
li $v0, 1
# $v0 = 1
beqz $a0, end
# Si n == 0, sortie
loop:
mul $v0, $v0, $a0 # $v0 = $v0 * $a0
addi $a0, $a0, -1 # $a0 = $a0 - 1
bnez $a0, loop
end:
lw $a0, 0($sp)
# Restaure $a0
lw $ra, 4($sp)
# Restaure $ra
addi $sp, $sp, 8
jr $ra# Retourne à l'appelant
main:
li $a0, 5
jal fact# Appel de la fonction
# Affiche le résultat
move $a0, $v0
li $v0, 1
syscall
li $v0, 10
syscall
