#include "../include/driver_framebuffer.h"
const uint8_t ocra20pt7bBitmaps[] = {
  0x00, 0x6D, 0xB6, 0xDB, 0x6C, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xCF,
  0x61, 0x98, 0x66, 0x18, 0x00, 0x00, 0x0C, 0xC3, 0x30, 0xCC, 0xFF, 0xFF,
  0xF3, 0x30, 0xCC, 0xFF, 0xFF, 0xF3, 0x30, 0xCC, 0x33, 0x0C, 0xC0, 0x0C,
  0x03, 0x00, 0xC0, 0x30, 0xFF, 0xFF, 0xFC, 0x03, 0xFF, 0xFF, 0xC0, 0x30,
  0x0F, 0xFF, 0xFF, 0xC3, 0x00, 0xC0, 0x30, 0x00, 0x00, 0xF0, 0x3C, 0x0F,
  0x0F, 0xC7, 0x03, 0x80, 0xC0, 0x60, 0x38, 0x1C, 0x06, 0x03, 0x01, 0xC0,
  0xE3, 0xF0, 0xF0, 0x3C, 0x0F, 0x7E, 0x3F, 0xCC, 0x33, 0x0C, 0xC3, 0x3B,
  0xC7, 0xE0, 0xE0, 0x7C, 0x3F, 0x3C, 0x7F, 0x1E, 0xC7, 0xBF, 0xF7, 0xCC,
  0xFF, 0xFE, 0xEE, 0xEC, 0xC0, 0x19, 0xCC, 0xCE, 0x63, 0x18, 0xC6, 0x31,
  0xC6, 0x18, 0xE3, 0xC7, 0x1C, 0x61, 0x8C, 0x63, 0x18, 0xC6, 0x73, 0x33,
  0x98, 0x0C, 0x03, 0x0C, 0xCF, 0xB7, 0x7F, 0x8F, 0xC1, 0xE0, 0xFC, 0x7F,
  0xBB, 0x7C, 0xCC, 0x30, 0x0C, 0x00, 0x00, 0x03, 0x00, 0xC0, 0x30, 0x0C,
  0x3F, 0xFF, 0xFC, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0xFF, 0xF0, 0xC3, 0x0C,
  0x30, 0xC0, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0x00, 0x60, 0x1C, 0x07,
  0x00, 0xC0, 0x38, 0x06, 0x01, 0xC0, 0x30, 0x0C, 0x03, 0x80, 0x60, 0x1C,
  0x03, 0x00, 0xE0, 0x38, 0x02, 0x00, 0x7F, 0xBF, 0xFC, 0x0F, 0x03, 0xC0,
  0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3F,
  0xFD, 0xFE, 0xFC, 0x3F, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30,
  0x0C, 0x03, 0x30, 0xCC, 0x33, 0x0C, 0xC3, 0x3F, 0xFF, 0xFF, 0xFF, 0xBF,
  0xF0, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0D, 0xFF, 0xFF, 0xB0, 0x0C, 0x03,
  0x00, 0xC0, 0x30, 0x0F, 0xFF, 0xFF, 0x7F, 0xCF, 0xFC, 0x01, 0x80, 0x30,
  0x06, 0x00, 0xC0, 0x18, 0xFF, 0x1F, 0xE0, 0x0C, 0x01, 0x80, 0x30, 0x06,
  0x00, 0xDF, 0xFB, 0xFE, 0xC0, 0x60, 0x30, 0xD8, 0x6C, 0x36, 0x1B, 0x0D,
  0x86, 0xC3, 0x7F, 0xFF, 0xE0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x3F, 0xCF,
  0xF3, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xFE, 0x3F, 0xC0, 0x30, 0x0C,
  0x03, 0x00, 0xF0, 0x3F, 0xFC, 0xFE, 0xE0, 0x38, 0x0C, 0x03, 0x00, 0xC0,
  0x30, 0x0C, 0x03, 0x00, 0xC0, 0x3F, 0xFF, 0xFF, 0x03, 0xC0, 0xF0, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x1C, 0x0E,
  0x07, 0x03, 0x80, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x3F, 0x0F,
  0xC3, 0x30, 0xCC, 0x33, 0x0C, 0xC3, 0x31, 0xFE, 0xFF, 0xF0, 0x3C, 0x0F,
  0x03, 0xC0, 0xF0, 0x3F, 0xFD, 0xFE, 0xFF, 0xFF, 0xFC, 0x0F, 0x03, 0xC0,
  0xFF, 0xFF, 0xFC, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30,
  0x1C, 0x07, 0xFF, 0xFF, 0x00, 0x0F, 0xFF, 0xF0, 0xF3, 0xCF, 0x3C, 0x00,
  0x00, 0x3F, 0xFC, 0x30, 0xC3, 0x0C, 0x30, 0x00, 0x40, 0x38, 0x1E, 0x0F,
  0x83, 0xC1, 0xE0, 0x38, 0x07, 0x80, 0x7C, 0x03, 0xC0, 0x1E, 0x00, 0xE0,
  0x0C, 0x7F, 0xEF, 0xFC, 0x00, 0x00, 0x07, 0xFE, 0xFF, 0xC0, 0x80, 0x38,
  0x07, 0x80, 0xF8, 0x0F, 0x00, 0xF0, 0x1C, 0x0F, 0x0F, 0x87, 0x87, 0x83,
  0x80, 0xC0, 0x00, 0x03, 0x01, 0xE1, 0xFC, 0xE3, 0x71, 0xF8, 0xEC, 0x70,
  0x38, 0x1C, 0x0E, 0x03, 0x00, 0xC0, 0x00, 0x00, 0x03, 0x00, 0xC0, 0x3F,
  0x1F, 0xEC, 0x0F, 0x03, 0x00, 0xC0, 0x37, 0xCF, 0xF3, 0xCC, 0xF3, 0x3C,
  0xCF, 0x33, 0xCC, 0xF3, 0x3F, 0xFD, 0xFE, 0x06, 0x01, 0xC0, 0x38, 0x07,
  0x00, 0xF0, 0x3E, 0x06, 0xC0, 0xDC, 0x39, 0x86, 0x30, 0xC6, 0x3F, 0xE7,
  0xFC, 0xC1, 0x98, 0x3F, 0x03, 0x40, 0x40, 0xFF, 0x3F, 0xEC, 0x1F, 0x03,
  0xC0, 0xF0, 0x3C, 0x1F, 0xFE, 0xFF, 0xB0, 0x7C, 0x0F, 0x03, 0xC0, 0xF0,
  0x7F, 0xFB, 0xFC, 0x0F, 0xC3, 0xF8, 0xE0, 0x18, 0x07, 0x00, 0xC0, 0x38,
  0x06, 0x00, 0xC0, 0x1C, 0x01, 0x80, 0x38, 0x03, 0x00, 0x70, 0x07, 0xF0,
  0x7E, 0xFE, 0x1F, 0xE0, 0xCC, 0x19, 0xC3, 0x18, 0x63, 0x8C, 0x31, 0x86,
  0x30, 0xC6, 0x18, 0xC7, 0x18, 0xC3, 0x38, 0x66, 0x3F, 0xC7, 0xF0, 0xFF,
  0xFF, 0xFC, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0xF0, 0xFC, 0x30, 0x0C,
  0x03, 0x00, 0xC0, 0x30, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x03, 0x00,
  0xC0, 0x3F, 0xCF, 0xF3, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30,
  0x0C, 0x03, 0x00, 0x0F, 0xC7, 0xF1, 0x80, 0xC0, 0x70, 0x38, 0x0C, 0x03,
  0x00, 0xC0, 0x31, 0xFC, 0x7F, 0x03, 0xC0, 0xF0, 0x3F, 0xFD, 0xFE, 0xC0,
  0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0xFF, 0xFF, 0xF0, 0x3C,
  0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xFF, 0xFF, 0xF0, 0xC0, 0x30,
  0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03,
  0x0F, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
  0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 0xC0, 0xF0, 0x7C, 0x3B, 0x1C,
  0xCE, 0x3F, 0x0F, 0x03, 0x80, 0xE0, 0x3C, 0x0F, 0x83, 0x70, 0xCF, 0x30,
  0xEC, 0x1F, 0x03, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03,
  0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0F, 0xFF, 0xFF, 0xE1,
  0xFC, 0xFF, 0x3F, 0xFF, 0xDE, 0xF3, 0x3C, 0xCF, 0x03, 0xC0, 0xF0, 0x3C,
  0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xE0, 0xF8, 0x3F, 0x0F, 0xC3,
  0xF8, 0xF6, 0x3D, 0x8F, 0x33, 0xCC, 0xF1, 0xBC, 0x6F, 0x1F, 0xC3, 0xF0,
  0xFC, 0x1F, 0x07, 0x0E, 0x03, 0xE0, 0xEC, 0x19, 0xC7, 0x18, 0xC3, 0xB8,
  0x36, 0x06, 0xC0, 0xD8, 0x19, 0x87, 0x30, 0xC3, 0x38, 0x66, 0x07, 0xC0,
  0xF0, 0x00, 0x00, 0xFF, 0xBF, 0xFC, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F,
  0x03, 0xFF, 0xFF, 0xEC, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0x03,
  0x81, 0xF1, 0xEC, 0xE3, 0x70, 0xD8, 0x3C, 0x0F, 0x03, 0xC0, 0xF3, 0x3C,
  0xDB, 0x1E, 0xCE, 0x37, 0xCF, 0xBD, 0xCF, 0xFF, 0xBF, 0xFC, 0x0F, 0x03,
  0xC0, 0xFF, 0xFF, 0xFB, 0x30, 0xCE, 0x31, 0x8C, 0x73, 0x0C, 0xC1, 0xB0,
  0x7C, 0x0F, 0x03, 0x7F, 0xCF, 0xFF, 0x81, 0xB0, 0x27, 0x00, 0x70, 0x07,
  0x00, 0x70, 0x06, 0x00, 0xE0, 0x0E, 0x00, 0xE4, 0x0F, 0xC0, 0xDF, 0xF9,
  0xFE, 0xFF, 0xFF, 0xFC, 0xCF, 0x33, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C,
  0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0xC0, 0xF0, 0x3C,
  0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03,
  0xC0, 0xF0, 0x3F, 0xFD, 0xFE, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0,
  0x36, 0x19, 0x86, 0x73, 0x8C, 0xC3, 0x30, 0xFC, 0x1E, 0x07, 0x80, 0xC0,
  0x30, 0x00, 0x00, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF3, 0x3C, 0xCF,
  0x33, 0xCC, 0xF3, 0x3C, 0xCF, 0x33, 0xCC, 0xF3, 0x37, 0xF9, 0xFE, 0x00,
  0x1C, 0x0D, 0x83, 0x38, 0xE3, 0x18, 0x77, 0x06, 0xC0, 0x78, 0x0E, 0x01,
  0xC0, 0x7C, 0x0D, 0x83, 0x98, 0x63, 0x9C, 0x37, 0x07, 0x40, 0x60, 0xC0,
  0xF0, 0x3C, 0x0F, 0x87, 0x73, 0x8C, 0xC3, 0xF0, 0x78, 0x0C, 0x03, 0x00,
  0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0xFF, 0xFF, 0xF8, 0x07, 0x00,
  0xC0, 0x38, 0x0E, 0x01, 0x80, 0x70, 0x0C, 0x03, 0x80, 0xE0, 0x18, 0x07,
  0x00, 0xC0, 0x3F, 0xF7, 0xFE, 0xFF, 0xFF, 0xFD, 0x83, 0x60, 0xD8, 0x36,
  0x0D, 0x83, 0x60, 0xD8, 0x36, 0x0D, 0x83, 0x60, 0xD8, 0x36, 0x0F, 0xFF,
  0xFF, 0xE0, 0x0C, 0x01, 0xC0, 0x18, 0x03, 0x80, 0x30, 0x03, 0x00, 0x70,
  0x06, 0x00, 0xE0, 0x0C, 0x00, 0xC0, 0x1C, 0x01, 0x80, 0x38, 0x03, 0xFF,
  0xFF, 0xF0, 0x6C, 0x1B, 0x06, 0xC1, 0xB0, 0x6C, 0x1B, 0x06, 0xC1, 0xB0,
  0x6C, 0x1B, 0x06, 0xC1, 0xBF, 0xFF, 0xFF, 0x06, 0x01, 0xC0, 0x3C, 0x0F,
  0x81, 0xF8, 0x77, 0x0C, 0x73, 0x86, 0xE0, 0xE8, 0x0C, 0x7F, 0xEF, 0xFC,
  0x60, 0x7C, 0x1F, 0x07, 0x81, 0xE0, 0x78, 0x0E, 0x03, 0x3F, 0x8F, 0xF0,
  0x0C, 0x03, 0x00, 0xDF, 0xFF, 0xFF, 0x03, 0xC0, 0xF0, 0x7F, 0xFD, 0xFB,
  0xC0, 0x30, 0x0C, 0x03, 0x00, 0xDF, 0x3F, 0xEF, 0x1F, 0x83, 0xC0, 0xF0,
  0x3C, 0x0F, 0x03, 0xE0, 0xFC, 0x7F, 0xFB, 0x7C, 0x1F, 0xC7, 0xF9, 0xC0,
  0x70, 0x0C, 0x01, 0x80, 0x30, 0x06, 0x00, 0xE0, 0x0E, 0x00, 0xFF, 0x0F,
  0xE0, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x3E, 0xDF, 0xFE, 0x3F, 0x07, 0xC0,
  0xF0, 0x3C, 0x0F, 0x03, 0xC1, 0xF8, 0xF7, 0xFC, 0xFB, 0x3F, 0x1F, 0xEE,
  0x1F, 0x03, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0xC0, 0x38, 0x07, 0xFC, 0xFF,
  0x0F, 0x8F, 0xCC, 0x06, 0x0F, 0xE7, 0xF0, 0xC0, 0x60, 0x30, 0x18, 0x0C,
  0x06, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x3E, 0xDF, 0xFE, 0x3F, 0x07, 0xC0,
  0xF0, 0x3C, 0x0F, 0x07, 0xE3, 0xDF, 0xF3, 0xEC, 0x03, 0x00, 0xC0, 0x77,
  0xF9, 0xFC, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xCF, 0xBF, 0xFF, 0x8F, 0x83,
  0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0x38, 0x38,
  0x38, 0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
  0x18, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x00, 0x00, 0x3F, 0x3F, 0x03, 0x03,
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x83, 0xC3, 0xFF, 0x7E,
  0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC1, 0xB0, 0xEC, 0x73, 0x38, 0xDC, 0x3E,
  0x0F, 0xC3, 0x38, 0xC7, 0x30, 0xEC, 0x1F, 0x03, 0xF8, 0xF8, 0x18, 0x18,
  0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF,
  0xFB, 0xDF, 0xFF, 0xB9, 0xE6, 0x3C, 0xC7, 0x98, 0xF3, 0x1E, 0x63, 0xCC,
  0x79, 0x8F, 0x31, 0xE6, 0x30, 0xCF, 0xBF, 0xFF, 0x8F, 0x83, 0xC0, 0xF0,
  0x3C, 0x0F, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0x3F, 0x1F, 0xEE, 0x1F,
  0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF8, 0x77, 0xF8, 0xFC, 0xDE,
  0x3F, 0xCF, 0x3B, 0x87, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xE1, 0xFC, 0xEF,
  0xF3, 0x78, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0x3E, 0xDF, 0xFE, 0x3F, 0x07,
  0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC1, 0xF8, 0xF7, 0xFC, 0xFB, 0x00, 0xC0,
  0x30, 0x0C, 0x03, 0xCF, 0xB7, 0xFF, 0x8F, 0xC3, 0xC0, 0x30, 0x0C, 0x03,
  0x00, 0xC0, 0x30, 0x0C, 0x01, 0x00, 0x3F, 0xCF, 0xFD, 0x81, 0x38, 0x07,
  0xC0, 0x3E, 0x01, 0xF0, 0x0F, 0x00, 0x68, 0x1F, 0xFF, 0x1F, 0xC0, 0x00,
  0x0C, 0x03, 0x00, 0xC0, 0xFF, 0xBF, 0xE3, 0x00, 0xC0, 0x30, 0x0C, 0x03,
  0x00, 0xC0, 0x30, 0x4C, 0x33, 0xFC, 0x7E, 0xC0, 0xF0, 0x3C, 0x0F, 0x03,
  0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC1, 0xF1, 0xFF, 0xFD, 0xF3, 0xC0, 0xF0,
  0x3C, 0x0F, 0x03, 0x61, 0x98, 0x67, 0x38, 0xCC, 0x33, 0x07, 0x81, 0xE0,
  0x78, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xCC, 0xF3, 0x3C, 0xCF, 0x33, 0xDE,
  0xDF, 0xE7, 0x39, 0xCE, 0x60, 0x4C, 0x1D, 0xC7, 0x1D, 0xC1, 0xF0, 0x1C,
  0x03, 0xC0, 0xF8, 0x3B, 0x8E, 0x3B, 0x83, 0xA0, 0x30, 0xC0, 0xF0, 0x3C,
  0x0F, 0x87, 0x61, 0x98, 0x63, 0x30, 0xCC, 0x3F, 0x07, 0x80, 0xE0, 0x30,
  0x0C, 0x06, 0x0F, 0x83, 0xE0, 0x7F, 0xDF, 0xF0, 0x1C, 0x0E, 0x07, 0x03,
  0x81, 0xC0, 0xE0, 0x70, 0x38, 0x0F, 0xFF, 0xFF, 0x07, 0xC3, 0xF0, 0xC0,
  0x30, 0x0C, 0x03, 0x00, 0xC3, 0xF0, 0xFC, 0x03, 0x00, 0xC0, 0x30, 0x0C,
  0x03, 0x00, 0xFC, 0x1F, 0xFF, 0xFC, 0x3F, 0xFF, 0xF8, 0x1F, 0x80, 0x30,
  0x06, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x7E, 0x0F, 0xC1, 0x80, 0x30, 0x06,
  0x00, 0xC0, 0x18, 0x3F, 0x07, 0xC0, 0x00, 0x1E, 0x0F, 0xCF, 0x33, 0xCC,
  0xF3, 0x3C, 0xFC, 0x1E };

const GFXglyph ocra20pt7bGlyphs[] = {
  {     0,   1,   1,  16,    0,    0 },   // 0x20 ' '
  {     1,   3,  16,  16,    6,  -15 },   // 0x21 '!'
  {     7,  10,   8,  16,    2,  -15 },   // 0x22 '"'
  {    17,  10,  14,  16,    2,  -16 },   // 0x23 '#'
  {    35,  10,  17,  16,    2,  -15 },   // 0x24 '$'
  {    57,  10,  16,  16,    2,  -15 },   // 0x25 '%'
  {    77,  10,  15,  16,    2,  -14 },   // 0x26 '&'
  {    96,   4,   9,  16,    6,  -15 },   // 0x27 '''
  {   101,   5,  16,  16,    6,  -15 },   // 0x28 '('
  {   111,   5,  16,  16,    5,  -15 },   // 0x29 ')'
  {   121,  10,  13,  16,    3,  -14 },   // 0x2A '*'
  {   138,  10,  11,  16,    2,  -13 },   // 0x2B '+'
  {   152,   6,   7,  16,    5,   -6 },   // 0x2C ','
  {   158,  10,   3,  16,    2,   -8 },   // 0x2D '-'
  {   162,   4,   4,  16,    6,   -6 },   // 0x2E '.'
  {   164,  11,  16,  16,    2,  -15 },   // 0x2F '/'
  {   186,  10,  16,  16,    2,  -15 },   // 0x30 '0'
  {   206,  10,  16,  16,    2,  -15 },   // 0x31 '1'
  {   226,  10,  16,  16,    2,  -15 },   // 0x32 '2'
  {   246,  11,  16,  16,    2,  -15 },   // 0x33 '3'
  {   268,   9,  16,  16,    3,  -15 },   // 0x34 '4'
  {   286,  10,  16,  16,    2,  -15 },   // 0x35 '5'
  {   306,  10,  16,  16,    2,  -15 },   // 0x36 '6'
  {   326,  10,  16,  16,    3,  -15 },   // 0x37 '7'
  {   346,  10,  16,  16,    2,  -15 },   // 0x38 '8'
  {   366,  10,  16,  16,    2,  -15 },   // 0x39 '9'
  {   386,   4,  11,  16,    6,  -13 },   // 0x3A ':'
  {   392,   6,  14,  16,    4,  -13 },   // 0x3B ';'
  {   403,  11,  13,  16,    2,  -14 },   // 0x3C '<'
  {   421,  11,   6,  16,    2,  -11 },   // 0x3D '='
  {   430,  10,  13,  16,    3,  -14 },   // 0x3E '>'
  {   447,  10,  16,  16,    2,  -15 },   // 0x3F '?'
  {   467,  10,  16,  16,    2,  -15 },   // 0x40 '@'
  {   487,  11,  17,  16,    2,  -15 },   // 0x41 'A'
  {   511,  10,  16,  16,    2,  -15 },   // 0x42 'B'
  {   531,  11,  16,  16,    2,  -15 },   // 0x43 'C'
  {   553,  11,  16,  16,    2,  -15 },   // 0x44 'D'
  {   575,  10,  16,  16,    2,  -15 },   // 0x45 'E'
  {   595,  10,  16,  16,    2,  -15 },   // 0x46 'F'
  {   615,  10,  16,  16,    2,  -15 },   // 0x47 'G'
  {   635,  10,  16,  16,    2,  -15 },   // 0x48 'H'
  {   655,  10,  16,  16,    2,  -15 },   // 0x49 'I'
  {   675,   8,  16,  16,    3,  -15 },   // 0x4A 'J'
  {   691,  10,  16,  16,    2,  -15 },   // 0x4B 'K'
  {   711,  10,  16,  16,    2,  -15 },   // 0x4C 'L'
  {   731,  10,  16,  16,    2,  -15 },   // 0x4D 'M'
  {   751,  10,  16,  16,    2,  -15 },   // 0x4E 'N'
  {   771,  11,  17,  16,    2,  -15 },   // 0x4F 'O'
  {   795,  10,  16,  16,    2,  -15 },   // 0x50 'P'
  {   815,  10,  16,  16,    2,  -15 },   // 0x51 'Q'
  {   835,  10,  16,  16,    2,  -15 },   // 0x52 'R'
  {   855,  11,  16,  16,    2,  -15 },   // 0x53 'S'
  {   877,  10,  16,  16,    2,  -15 },   // 0x54 'T'
  {   897,  10,  16,  16,    2,  -15 },   // 0x55 'U'
  {   917,  10,  17,  16,    2,  -15 },   // 0x56 'V'
  {   939,  10,  16,  16,    2,  -15 },   // 0x57 'W'
  {   959,  11,  17,  16,    2,  -16 },   // 0x58 'X'
  {   983,  10,  16,  16,    2,  -15 },   // 0x59 'Y'
  {  1003,  11,  16,  16,    2,  -15 },   // 0x5A 'Z'
  {  1025,  10,  16,  16,    2,  -15 },   // 0x5B '['
  {  1045,  11,  16,  16,    2,  -15 },   // 0x5C '\'
  {  1067,  10,  16,  16,    2,  -15 },   // 0x5D ']'
  {  1087,  11,  10,  16,    2,  -12 },   // 0x5E '^'
  {  1101,  11,   2,  16,    2,    1 },   // 0x5F '_'
  {  1104,   9,   8,  16,    3,  -16 },   // 0x60 '`'
  {  1113,  10,  12,  16,    2,  -11 },   // 0x61 'a'
  {  1128,  10,  16,  16,    2,  -15 },   // 0x62 'b'
  {  1148,  11,  12,  16,    2,  -11 },   // 0x63 'c'
  {  1165,  10,  16,  16,    2,  -15 },   // 0x64 'd'
  {  1185,  10,  12,  16,    2,  -11 },   // 0x65 'e'
  {  1200,   9,  16,  16,    3,  -15 },   // 0x66 'f'
  {  1218,  10,  16,  16,    2,  -11 },   // 0x67 'g'
  {  1238,  10,  16,  16,    2,  -15 },   // 0x68 'h'
  {  1258,   8,  17,  16,    3,  -16 },   // 0x69 'i'
  {  1275,   8,  21,  16,    4,  -16 },   // 0x6A 'j'
  {  1296,  10,  16,  16,    2,  -15 },   // 0x6B 'k'
  {  1316,   8,  16,  16,    3,  -15 },   // 0x6C 'l'
  {  1332,  11,  12,  16,    2,  -11 },   // 0x6D 'm'
  {  1349,  10,  12,  16,    2,  -11 },   // 0x6E 'n'
  {  1364,  10,  12,  16,    2,  -11 },   // 0x6F 'o'
  {  1379,  10,  16,  16,    2,  -11 },   // 0x70 'p'
  {  1399,  10,  16,  16,    2,  -11 },   // 0x71 'q'
  {  1419,  10,  12,  16,    2,  -11 },   // 0x72 'r'
  {  1434,  11,  12,  16,    2,  -11 },   // 0x73 's'
  {  1451,  10,  16,  16,    2,  -15 },   // 0x74 't'
  {  1471,  10,  12,  16,    3,  -11 },   // 0x75 'u'
  {  1486,  10,  12,  16,    2,  -11 },   // 0x76 'v'
  {  1501,  10,  12,  16,    2,  -11 },   // 0x77 'w'
  {  1516,  11,  12,  16,    2,  -11 },   // 0x78 'x'
  {  1533,  10,  16,  16,    2,  -11 },   // 0x79 'y'
  {  1553,  10,  12,  16,    2,  -11 },   // 0x7A 'z'
  {  1568,  10,  16,  16,    2,  -15 },   // 0x7B '{'
  {  1588,   2,  16,  16,    7,  -15 },   // 0x7C '|'
  {  1592,  11,  16,  16,    2,  -15 },   // 0x7D '}'
  {  1614,  10,   8,  16,    2,  -16 } }; // 0x7E '~'

const GFXfont ocra20pt7b = {
  (uint8_t  *)ocra20pt7bBitmaps,
  (GFXglyph *)ocra20pt7bGlyphs,
  0x20, 0x7E, 20 };//B

// Approx. 2296 bytes
