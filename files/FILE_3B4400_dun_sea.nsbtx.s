	.include "asm/macros.inc"
	.text
	.incbin "baserom.nds", 0x3B4400, 0x578
	.balign 512, 255
