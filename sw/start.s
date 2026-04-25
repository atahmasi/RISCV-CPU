.section .text
.global _start

_start:
    li sp, 0x1000    # top of guard range 0x000-0xFFF
    call main
halt:
    j halt