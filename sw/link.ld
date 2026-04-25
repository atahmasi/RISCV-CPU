ENTRY(_start)

MEMORY
{
    IMEM (rx) : ORIGIN = 0x00000000, LENGTH = 2048
    DMEM (rw) : ORIGIN = 0x00000800, LENGTH = 4096
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
