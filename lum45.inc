;*****************************************
;* Lumenier 45                           *
;* 2017-08-09                            *
;* Fuses should be ?					 *
;*****************************************

.equ	F_CPU		= 16000000
.equ	USE_INT0	= 1
.equ	USE_I2C		= 0
.equ	USE_UART	= 0
.equ	USE_ICP		= 0

.equ	DEAD_LOW_NS		= 1000
.equ	DEAD_HIGH_NS	= 1000
.equ	MOTOR_ADVANCE	= 15
.equ	CHECK_HARDWARE	= 1

;*********************
; PORT B definitions *
;*********************
.equ	CnFET		= 0	; C Low side

.equ	INIT_PB		= 0
.equ	DIR_PB		= (1<<CnFET)

;*********************
; PORT C definitions *
;*********************
.equ	mux_b		= 7	; tested
.equ	mux_a		= 6	; 
.equ	BpFET		= 5	; High B
.equ	BnFET		= 4	; Low B
.equ	CpFET		= 3	; High C
.equ	mux_voltage	= 2	; battery volt
.equ	mux_c		= 0	; tested

.equ	INIT_PC		= 0
.equ	DIR_PC		= (1<<BpFET)|(1<<BnFET)|(1<<CpFET)

;*********************
; PORT D definitions *
;*********************
;.equ	sense_star		= 7 ; (comparator AN1)
.equ	sense_star	= 6 ; (comparator AN0)
.equ	AnFET		= 5  ; Low A
.equ	ApFET		= 4  ; High A
.equ 	rcp_in 		= 2  ; (PPM input bridged to RXD)
.equ 	txd 		= 1
.equ 	rxd 		= 0  ; (PPM input bridged to RXD)

.equ	INIT_PD		= 0
.equ	DIR_PD		= (1<<AnFET)|(1<<ApFET)


.equ	ApFET_port	= PORTD
.equ	BpFET_port	= PORTC
.equ	CpFET_port	= PORTC

.equ	AnFET_port	= PORTD
.equ	BnFET_port	= PORTC
.equ	CnFET_port	= PORTB

.equ	O_POWER		= 251
.equ	O_GROUND	= 25
