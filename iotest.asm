      include "MC14500.inc"

      org 0000H

      orc RR         ; set RR to '1'
      ien RR         ; enable inputs      
      oen RR         ; enable outputs                   
      ld 0           ; load input 0
      sto 0          ; store output 0
      ld 1           ; load input 1
      sto 1          ; store output 1
      ld 2           ; load input 2
      sto 2          ; store output 2
      ld 3           ; load input 3
      sto 3          ; store output 3
      ld 4           ; load input 4
      sto 4          ; store output 4
      ld 5           ; load input 5
      sto 5          ; store output 5
      ld 6           ; load input 6
      sto 6          ; store output 6
      ld 7           ; load input 7
      sto 7          ; store output 7        
      jmp            ; reset and jump back to start (JMP output is wired to RST input)
            
      end