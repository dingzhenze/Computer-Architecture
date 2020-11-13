00000824 main:	and $1, $0, $0		# address of data[0]
34240050        ori $4, $1, 80		# address of data[0]
20050004 call:	addi $5, $0, 4		# counter
0c00000a		jal sum			# call function
ac820000 return:sw $2, 0($4)		# store result
8c890000		lw $9, 0($4)		# check sw
ac890004		sw $9, 4($4)		# store result again
01244022	    sub $8, $9, $4		# sub: $8 <- $9 - $4
08000008 finish:	j finish			# dead loop
00000000 nop			# done
00004020 sum:	add $8, $0, $0		# sum function entry
8c890000 loop:	lw $9, 0($4)		# load data
01094020	    add $8, $8, $9		# sum
20a5ffff		addi $5, $5, -1		# counter - 1
20840004	    addi $4, $4, 4		# address + 4
0005182a	    slt $3, $0, $5		# finish?
1460fffa		bne $3, $0, loop		# finish?
01001025	    or $2, $8, $0		# move result to $v0
03e00008	    jr $ra			# return
00000000 nop			# done
