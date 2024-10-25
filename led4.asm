      include "MC14500.inc"

      org 0000H

      orc RR         ; set RR to '1'
      ien RR         ; enable inputs      
      oen RR         ; enable outputs       

      ld 7           ; input 7 is connected to RR (which is '1')      
      sto OUT0       ; turn on LED 0
      sto OUT7       ; turn on LED 7
      sto OUT1       ; turn on LED 1
      sto OUT6       ; turn on LED 6
      stoc OUT0      ; turn off LED 0
      stoc OUT7      ; turn off LED 7
      sto OUT2       ; turn on LED 2
      sto OUT5       ; turn on LED 5
      stoc OUT1      ; turn off LED 1
      stoc OUT6      ; turn off LED 6
      sto OUT3       ; turn on LED 3
      sto OUT4       ; turn on LED 4
      stoc OUT2      ; turn off LED 2
      stoc OUT5      ; turn off LED 5
      sto OUT2       ; turn on LED 2
      sto OUT5       ; turn on LED 5
      stoc OUT3      ; turn off LED 3
      stoc OUT4      ; turn off LED 4
      sto OUT1       ; turn on LED 1
      sto OUT6       ; turn on LED 6
      stoc OUT2      ; turn off LED 2
      stoc OUT5      ; turn off LED 5
      sto OUT0       ; turn on LED 0
      sto OUT7       ; turn on LED 7
      stoc OUT1      ; turn off LED 1
      stoc OUT6      ; turn off LED 6
      jmp            ; reset and jump back to start (JMP OUTput is wired to RST input)
            
      end