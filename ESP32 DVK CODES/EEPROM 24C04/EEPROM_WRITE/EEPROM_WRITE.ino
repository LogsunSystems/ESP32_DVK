#include <Wire.h>

#define EEPROM1_I2C_address 0x54

void setup()
{
  Serial.begin(115200);
  Wire.begin(13, 16); //13 SDA   16 SCL
  unsigned int address = 0;
  for (int i = 0; i <= 9; i++)
  {
    writeToEEPROM(EEPROM1_I2C_address, i, i*2);
  }
  Serial.println("EEPROM 1: ");
  delay(100);
}

void loop() {}

void writeToEEPROM(byte EEPROMAddress, byte dataAddress, byte dataValue)
{
  Wire.beginTransmission(EEPROMAddress);
  Wire.write(dataAddress);
  Wire.write(dataValue);
  Wire.endTransmission();
  delay(5);
}
