.section .text
.global _start

_start:
    lui  sp, 0x1
    call main
halt:
    j halt
