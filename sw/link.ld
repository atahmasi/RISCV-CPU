ENTRY(_start)

MEMORY
{
    IMEM (rx) : ORIGIN = 0x00000000, LENGTH = 1024
    DMEM (rw) : ORIGIN = 0x00000400, LENGTH = 1024
}

SECTIONS
{
    .text : {
        *(.text)
    } > IMEM

    .data : {
        *(.data)
    } > DMEM

    .bss : {
        *(.bss)
    } > DMEM
}