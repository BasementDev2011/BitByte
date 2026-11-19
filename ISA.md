EXECUTABLE TYPES

Livewire - No compiled header, the CPU will run whatever code is inside regardless if it's an instruction or not. (0x16)
Raw - No compiled header, the CPU simply runs whatever code is inside. (0x32)
Compiled - Executable header, data entries, and the immediates table are available. (0xFF)

REGISTER DATA AND OPERATIONS

mov data:
immc - custom length (MAX 255)
imms - 1 byte of length
imm2 - 2 bytes of length
imm4 - 4 bytes of length
imm8 - 8 bytes of length
imm16 - 16 bytes of length
imm32 - 32 bytes of length
imm64 - 64 bytes of length
immlng - 255 bytes of length

if immX is higher than the register's size itself a segfault is returned

register widths:

general width registers - 8 bytes
double extended registers - 16 bytes
quad extended registers - 32 bytes
double quad extended registers - 64 bytes
long registers - 255

JMP_VALUES

je	Jump if Equal	                        ==
jne	Jump if Not Equal	                !=
jg	Jump if Greater (signed)	        >
jge	Jump if Greater or Equal (signed)	>=
jl	Jump if Less (signed)	                <
jle	Jump if Less or Equal (signed)	        <=
ja	Jump if Above (unsigned)	        >
jae	Jump if Above or Equal (unsigned)	>=
jb	Jump if Below (unsigned)	        <
jbe	Jump if Below or Equal (unsigned)	<=
z       Jump if Equal 0
jmp     Jump to code block

Translation jmp_JX rX crX
crX = Conditional Register X

BASIC INSTRUCTIONS

nop
mov_i rX immX
mov_r rX_1 rX_2
push rX
pop rX
store_r immX rX
store_i immX immX
block immX start > block end