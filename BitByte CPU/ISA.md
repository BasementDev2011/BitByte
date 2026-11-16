Registers:
8 Byte width general registers -
R0 - R7
16 Byte Width general registers - 
SR0 - SR7
32 Byte width general registers -
TR0 - TR7
64 Byte width general registers -
BR0 - BR7

Basic instructions:

mov_l rx mm literals

mm - movement mode:
sbs - Set Byte Stream = sbs 0x03 0x01 0x02 0x03
sib - Set Initial Byte = sib 0x01
sw - 8 Standard Width = sw 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 