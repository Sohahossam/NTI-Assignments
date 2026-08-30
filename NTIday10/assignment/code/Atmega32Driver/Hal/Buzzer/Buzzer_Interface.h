#ifndef HAL_BUZZER_BUZZER_INTERFACE_H
#define HAL_BUZZER_BUZZER_INTERFACE_H

#include <stdint.h>

void Buzzer_Init(uint8_t BuzzerGroup, uint8_t BuzzerPin );
void Buzzer_On(uint8_t BuzzerGroup, uint8_t BuzzerPin , uint8_t ConnectionType);
void Buzzer_Off(uint8_t BuzzerGroup, uint8_t BuzzerPin ,uint8_t ConnectionType);
void Buzzer_Tone(uint8_t BuzzerGroup, uint8_t BuzzerPin );

#endif
