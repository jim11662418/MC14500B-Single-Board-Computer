            PAGE 0                      ; suppress page headings in ASW listing file
            LISTING OFF
            ;MACEXP_DFT OFF
            
            cpu 8080       ; any CPU will do            

delay100ms  MACRO           ; delay 100 mSec
            nopo
            nopo
            nopo
            nopo
            nopo
            ENDM        
            
enable      MACRO          ; enable inputs and outputs
            orc RR         ; set RR
            ien RR         ; enable inputs
            oen RR         ; enable outputs
            ENDM
        
IN0         equ 0
IN1         equ 1
IN2         equ 2
IN3         equ 3
IN4         equ 4
IN5         equ 5
IN6         equ 6
IN7         equ 7
OUT0        equ 0
OUT1        equ 1
OUT2        equ 2
OUT3        equ 3
OUT4        equ 4
OUT5        equ 5
OUT6        equ 6
OUT7        equ 7

RR          equ IN7         ; RR output of MC14500B is connected back to input 7

NOPO        MACRO                         
            db 00H
            ENDM

LD          MACRO SELECTOR
            db (SELECTOR << 4) | 01H
            ENDM

LDC         MACRO SELECTOR
            db (SELECTOR << 4) | 02H
            ENDM

AND         MACRO SELECTOR
            db (SELECTOR << 4) | 03H
            ENDM

ANDC        MACRO SELECTOR
            db (SELECTOR << 4) | 04H
            ENDM

OR          MACRO SELECTOR
            db (SELECTOR << 4) | 05H
            ENDM

ORC         MACRO SELECTOR
            db (SELECTOR << 4) | 06H
            ENDM

XNOR        MACRO SELECTOR
            db (SELECTOR << 4) | 07H
            ENDM

STO         MACRO SELECTOR
            db (SELECTOR << 4) | 08H
            ENDM

STOC        MACRO SELECTOR
            db (SELECTOR << 4) | 09H
            ENDM

IEN         MACRO SELECTOR
            db (SELECTOR << 4) | 0AH
            ENDM

OEN         MACRO SELECTOR
            db (SELECTOR << 4) | 0BH
            ENDM

JMP         MACRO
            db 0CH
            ENDM

RTN         MACRO
            db 0DH
            ENDM

SKZ         MACRO
            db 0EH
            ENDM

NOPF        MACRO
            db 0FH
            ENDM

            MACEXP_DFT ON
            LISTING ON