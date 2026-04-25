.section .text
.global _start

_start:
    li sp, 0x1000    # top of 4KB dmem
    call main
halt:
    j halt
