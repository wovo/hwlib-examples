
.globl _start
_start:
    lui x2,0x20001
    jal main
    j .

.globl dummy
dummy:
    ret

.globl PUT32
PUT32:
    sw x11,(x10)
    ret

.globl GET32
GET32:
    lw x10,(x10)
    ret
