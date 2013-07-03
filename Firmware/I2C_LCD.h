/******************************************************************************
 * Rutines d'inicialitzaci� i comunicaci� del bus i2c
 *
 * El port i2c que es fa servir �s:
 * SDA --> P3.1
 * SCL --> P3.2
 *
 * Es considera que tant MCLK com SMCLK van a 16Mhz
 *
 *****************************************************************************/

#define LCD_ADDRESS 0x3E

#define delay_1m5   24000

//Escriu al bus i2c el contingut del array buffer, especificant la adre�a de
//Slave i el nombre de dades a enviar
void i2c_write(unsigned char addr, char *buffer, int ndades); 

//Rutina de inicialitzaci� del bus i2c
void i2c_init();
