 0:	3c010000 	lui	R1,0x0		//main entry
 4:	24210020 	addiu	R1,R1,32
 8:	40811800 	mtc0	R1, R3
 c:	00001020 	add	R2,R0,R0
10:	00001820 	add	R3,R0,R0
14:	20420001 	addi	R2,R2,1		//loop
18:	08000005 	j	14
1c:	00000000 	nop
20:	40041000 	mfc0	R4,R2		//handler
24:	20630001 	addi	R3,R3,1
28:	42000018 	eret
2c:	00000000 	nop
