.section .text
.global _start

_start:
    li sp, 0x1400    # top of 4KB dmem
    call main
halt:
    j halt
