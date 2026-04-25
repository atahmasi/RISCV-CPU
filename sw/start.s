.section .text
.global _start

_start:
    li sp, 0x1800    # top of dmem (0x800 + 0x1000 = 0x1800)
    call main
halt:
    j halt