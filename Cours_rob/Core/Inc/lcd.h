#include "stm32f3xx_hal.h"
#include "cmsis_os.h"
void lcdInit();

void lcdSendCmd(char cmd);

void lcdSendData(char data);

void lcdSendString(char *str);

void lcdPutCur(int row, int col);

void lcdClear();
