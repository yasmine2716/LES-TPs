.text
.globl main
fib:
# Fonction récursive pour calculer Fibonacci
# $a0 : Entrée (n)
# $v0 : Sortie (F(n))
beqz $a0, base_case # Cas de base : si n == 0, retourne 0
beq $a0, 1, base_case # Cas de base : si n == 1, retourne 1
addi $sp, $sp, -8
sw $ra, 4($sp)
# Sauvegarde $ra
addi $a0, $a0, -1
jal fib
# Appel récursif pour F(n-1)
move $t0, $v0
addi $a0, $a0, -1
jal fib
# Appel récursif pour F(n-2)
add $v0, $t0, $v0
lw $ra, 4($sp)
# $v0 = F(n-1) + F(n-2)
# Restaure $
