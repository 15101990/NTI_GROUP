/*
 * LCD.h
 *
 * Created: 05/01/2022 01:22:10 م
 *  Author: dell
 */ 


#ifndef LCD_H_
#define LCD_H_

#include "STD_TYPES.h"

void LCD_INIT(void);
void LCD_WRITE_CHR(u8);
void LCD_WRITE_CMD(u8);
void LCD_WRITE_STR(u8*);
void LCD_WRITE_INT(u32);
void LCD_CLR(void);
void LCD_GO_TO(u8,u8);



#endif /* LCD_H_ */