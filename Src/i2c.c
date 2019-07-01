#include "i2c.h"

void Display_Write(int* data) {
    Display_Write_Address_Byte();
    Display_Write_Data_Byte(data[0]);
    Display_Write_Data_Byte(data[1]);
}

void Display_Write_Address_Byte() {
}

void Display_Write_Data_Byte() {
}
