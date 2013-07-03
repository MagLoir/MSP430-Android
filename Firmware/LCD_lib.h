/******************************************************************************
 * Rutines d'inicialitzaci� i �s del lcd i2c
 *
 * P2.5 est�conectat al pin de reset del LCD
 *
 * La configuraci� de la alimentaci� del LCD �s a 3.3V mitjant�ant un circuit
 * de boost.
 *
 ******************************************************************************/

#include "I2C_LCD.h"

#define CLR 0x01 //Per fer clear a la pantalla
#define HOME 0x02 //Per fer un home
#define BIGCHARS 0x3C  //Per tenir caracters de dos columnes
#define CURSOR_ON 0x0E  //Per que es vegi el cursor (rectangle)
#define CURSORPOS_ON 0x0D   //cursor linea

//Rutina d'inicialitzaci� del lcd
void lcd_init(void);

//Escriu un caracter a la pantalla a la posici� marcada per AC
void lcd_write(char valor);

//Escriu una cadena de caracters a la pantalla a la posici� marcada per AC
void lcd_print(char *string, int tamany);

//Envia una sola comanda al lcd
void lcd_command(char valor);

//Envia una serie de comandes a la lcd
void lcd_commands(char *string, int tamany);

//Posa el cursor (seteja AC) a una lina (0 o 1) i columna donada.
void lcd_setCursor(char line, char x);
