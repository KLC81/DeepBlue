# LCD Control Header

#ifndef LCD_H
#define LCD_H

// Function declarations for LCD control
void lcd_init();
void lcd_clear();
void lcd_write_char(char ch);
void lcd_write_string(const char* str);
void lcd_set_cursor(int row, int col);

#endif // LCD_H