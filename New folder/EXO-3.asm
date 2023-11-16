.data
tableau: .word 1, 2, 3, 4, 5
taille: .word 5
somme: .word 0
.text
.globl main
main:
lw $t0, taille
# Charge la taille du tableau
lw $t1, somme
# Initialise la somme à zéro
la $t2, tableau # Adresse du tableau
la $t3, fin
# Adresse de fin du tableau
loop:
beq $t2, $t3, end # Si on a atteint la fin du tableau, sortir de la boucle
lw $t4, 0($t2)
# Charge un élément du tableau
add $t1, $t1, $t4 # Ajoute l'élément à la somme
addi $t2, $t2, 4
j loop
# Passe à l'élément suivant
end:
sw $t1, somme
# Stocke la somme dans la mémoire
# Affiche le résultat
lw $a0, somme
li $v0, 1
syscall
li $v0, 10
syscall
