 0:	3c010000 	lui	    R1,0x0		//main entry
 4:	24210040 	addiu	R1,R1,64
 8:	40811800 	mtc0	R1, R3
 c:	00001020 	add	    R2,R0,R0
10:	00001820 	add	    R3,R0,R0
14:	40044800 	mfc0	R4,R9
18:	00002820 	add	    R5,R0,$0
1c: 20420001 	addi	R2,R2,1		//loop
20:	28412710 	slti	R1,R2,10000
24:	1420fffd 	bne	    $1,R0,-2	//jump to loop
28:	00000000 	nop
2c:	40054800 	mfc0 	R5, R9
30:	00a42822 	sub	    R5, R5, R4
34:	20420001 	addi	R2,R2,1		//loop
38:	0800000d 	j	34
3c:	00000000 	nop
40:	20630001 	addi	R3,R3,1		//handler
44:	42000018 	eret
48:	00000000 	nop
