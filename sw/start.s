 .section .text
.global _start

_start:
    # Set up stack pointer to top of DMEM
    lui  sp, 0x1        # sp = 0x00001000 (top of our memory)
    
    # Call main
    call main
    
    # If main returns, halt forever
halt:
    j halt