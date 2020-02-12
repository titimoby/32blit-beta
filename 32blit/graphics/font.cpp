#include <stdint.h>

#include "font.hpp"

static const uint8_t outline_font_data[96][6] = {
  {0x00,0x00,0x00,0x00,0x00,0x00}, //  
  {0x7f,0x51,0x7f,0x00,0x00,0x00}, // !
  {0x0f,0x09,0x0f,0x09,0x0f,0x00}, // "
  {0x3e,0x6b,0x41,0x6b,0x41,0x6b}, // #
  {0x7f,0xd1,0x94,0xc5,0x7f,0x00}, // $
  {0x77,0x4d,0x77,0x59,0x77,0x00}, // %
  {0x7f,0x49,0x55,0x49,0x6f,0x54}, // &
  {0x0f,0x09,0x0f,0x00,0x00,0x00}, // '
  {0x7f,0xc1,0xbe,0xe3,0x00,0x00}, // (
  {0xe3,0xbe,0xc1,0x7f,0x00,0x00}, // )
  {0x3e,0x2a,0x77,0x41,0x77,0x2a}, // *
  {0x1c,0x14,0x77,0x41,0x77,0x14}, // +
  {0xe0,0xb0,0xd0,0x70,0x00,0x00}, // ,
  {0x1c,0x14,0x14,0x14,0x1c,0x00}, // -
  {0x70,0x50,0x70,0x00,0x00,0x00}, // .
  {0x78,0x4c,0x77,0x19,0x0f,0x00}, // /
  {0x7f,0x41,0x5d,0x41,0x7f,0x00}, // 0
  {0x7f,0x41,0x7f,0x00,0x00,0x00}, // 1
  {0x7f,0x45,0x55,0x51,0x7f,0x00}, // 2
  {0x7f,0x55,0x55,0x41,0x7f,0x00}, // 3
  {0x1f,0x11,0x77,0x41,0x7f,0x00}, // 4
  {0x7f,0x51,0x55,0x45,0x7f,0x00}, // 5
  {0x7f,0x41,0x55,0x45,0x7f,0x00}, // 6
  {0x07,0x7d,0x45,0x79,0x0f,0x00}, // 7
  {0x7f,0x49,0x55,0x49,0x7f,0x00}, // 8
  {0x7f,0x51,0x55,0x41,0x7f,0x00}, // 9
  {0x3e,0x2a,0x3e,0x00,0x00,0x00}, // :
  {0xe0,0xbe,0xda,0x7e,0x00,0x00}, // ;
  {0x1c,0x36,0x6b,0x5d,0x77,0x00}, // <
  {0x3e,0x2a,0x2a,0x2a,0x2a,0x3e}, // =
  {0x77,0x5d,0x6b,0x36,0x1c,0x00}, // >
  {0x07,0x7d,0x55,0x71,0x1f,0x00}, // ?
  {0x7f,0x41,0x5d,0x55,0x51,0x7f}, // @
  {0x7f,0x41,0x75,0x41,0x7f,0x00}, // A
  {0x7f,0x41,0x55,0x41,0x7f,0x00}, // B
  {0x7f,0x41,0x5d,0x55,0x77,0x00}, // C
  {0x7f,0x41,0x5d,0x63,0x3e,0x00}, // D
  {0x7f,0x41,0x55,0x55,0x7f,0x00}, // E
  {0x7f,0x41,0x75,0x15,0x1f,0x00}, // F
  {0x7f,0x41,0x5d,0x45,0x7f,0x00}, // G
  {0x7f,0x41,0x77,0x41,0x7f,0x00}, // H
  {0x7f,0x41,0x7f,0x00,0x00,0x00}, // I
  {0x78,0x48,0x5f,0x41,0x7f,0x00}, // J
  {0x7f,0x41,0x77,0x49,0x7f,0x00}, // K
  {0x7f,0x41,0x5f,0x50,0x70,0x00}, // L
  {0x7f,0x41,0x3b,0x3b,0x41,0x7f}, // M
  {0x7f,0x41,0x3b,0x76,0x41,0x7f}, // N
  {0x7f,0x41,0x5d,0x41,0x7f,0x00}, // O
  {0x7f,0x41,0x75,0x11,0x1f,0x00}, // P
  {0x7f,0x41,0x1d,0x41,0x7f,0x00}, // Q
  {0x7f,0x41,0x6d,0x51,0x6f,0x00}, // R
  {0x7f,0x51,0x55,0x45,0x7f,0x00}, // S
  {0x07,0x7d,0x41,0x7d,0x07,0x00}, // T
  {0x7f,0x41,0x5f,0x41,0x7f,0x00}, // U
  {0x3f,0x61,0x5f,0x61,0x3f,0x00}, // V
  {0x7f,0x41,0x6e,0x6e,0x41,0x7f}, // W
  {0x7f,0x49,0x77,0x49,0x7f,0x00}, // X
  {0x1f,0x71,0x47,0x71,0x1f,0x00}, // Y
  {0x7b,0x4d,0x55,0x59,0x6f,0x00}, // Z
  {0xff,0x80,0xbe,0xe3,0x00,0x00}, // [
  {0x0f,0x19,0x77,0x4c,0x78,0x00}, // "\"
  {0xe3,0xbe,0x80,0xff,0x00,0x00}, // ]
  {0x0e,0x0b,0x0d,0x0b,0x0e,0x00}, // ^
  {0xe0,0xa0,0xa0,0xa0,0xa0,0xe0}, // _
  {0x07,0x0d,0x0b,0x0e,0x00,0x00}, // `
  {0x7f,0x41,0x75,0x41,0x7f,0x00}, // a
  {0x7f,0x41,0x55,0x41,0x7f,0x00}, // b
  {0x7f,0x41,0x5d,0x55,0x77,0x00}, // c
  {0x7f,0x41,0x5d,0x63,0x3e,0x00}, // d
  {0x7f,0x41,0x55,0x55,0x7f,0x00}, // e
  {0x7f,0x41,0x75,0x15,0x1f,0x00}, // f
  {0x7f,0x41,0x5d,0x45,0x7f,0x00}, // g
  {0x7f,0x41,0x77,0x41,0x7f,0x00}, // h
  {0x7f,0x41,0x7f,0x00,0x00,0x00}, // i
  {0x78,0x48,0x5f,0x41,0x7f,0x00}, // j
  {0x7f,0x41,0x77,0x49,0x7f,0x00}, // k
  {0x7f,0x41,0x5f,0x50,0x70,0x00}, // l
  {0x7f,0x41,0x3b,0x3b,0x41,0x7f}, // m
  {0x7f,0x41,0x3b,0x76,0x41,0x7f}, // n
  {0x7f,0x41,0x5d,0x41,0x7f,0x00}, // o
  {0x7f,0x41,0x75,0x11,0x1f,0x00}, // p
  {0x7f,0x41,0x1d,0x41,0x7f,0x00}, // q
  {0x7f,0x41,0x6d,0x51,0x6f,0x00}, // r
  {0x7f,0x51,0x55,0x45,0x7f,0x00}, // s
  {0x07,0x7d,0x41,0x7d,0x07,0x00}, // t
  {0x7f,0x41,0x5f,0x41,0x7f,0x00}, // u
  {0x3f,0x61,0x5f,0x61,0x3f,0x00}, // v
  {0x7f,0x41,0x6e,0x6e,0x41,0x7f}, // w
  {0x7f,0x49,0x77,0x49,0x7f,0x00}, // x
  {0x1f,0x71,0x47,0x71,0x1f,0x00}, // y
  {0x7b,0x4d,0x55,0x59,0x6f,0x00}, // z
  {0x1c,0xf7,0x88,0xbe,0xe3,0x00}, // {
  {0xff,0x80,0xff,0x00,0x00,0x00}, // |
  {0xe3,0xbe,0x88,0xf7,0x1c,0x00}, // }
  {0x0f,0x09,0x0d,0x09,0x0b,0x09}, // ~
  {0x00,0x00,0x00,0x00,0x00,0x00}
};

static const uint8_t fat_font_data[96][6] = {
  {0x00,0x00,0x00,0x00,0x00,0x00}, //  
  {0x5e,0x06,0x06,0x00,0x00,0x00}, // !
  {0x1e,0x00,0x00,0x1e,0x00,0x00}, // "
  {0x20,0x7c,0x38,0x38,0x7c,0x08}, // #
  {0x48,0xfe,0x64,0x64,0x00,0x00}, // $
  {0x64,0x60,0x60,0x18,0x0c,0x0c}, // %
  {0x74,0x4a,0x4a,0x7e,0x48,0x00}, // &
  {0x1e,0x00,0x00,0x00,0x00,0x00}, // '
  {0x3c,0x7e,0x7e,0x42,0x00,0x00}, // (
  {0x42,0x7e,0x7e,0x3c,0x00,0x00}, // )
  {0x04,0x0c,0x04,0x06,0x0c,0x04}, // *
  {0x10,0x3c,0x3c,0x3c,0x10,0x00}, // +
  {0x00,0x60,0xe0,0x00,0x00,0x00}, // ,
  {0x08,0x08,0x08,0x00,0x00,0x00}, // -
  {0x60,0x60,0x60,0x00,0x00,0x00}, // .
  {0x60,0x78,0x78,0x1e,0x06,0x00}, // /
  {0x3c,0x3c,0x7e,0x42,0x7e,0x7e}, // 0
  {0x04,0x7e,0x7e,0x7e,0x00,0x00}, // 1
  {0x76,0x7a,0x7e,0x7e,0x4c,0x00}, // 2
  {0x4a,0x7e,0x7e,0x7c,0x00,0x00}, // 3
  {0x0e,0x08,0x7e,0x7e,0x7e,0x00}, // 4
  {0x4e,0x4e,0x4e,0x7a,0x1a,0x00}, // 5
  {0x3c,0x7e,0x7e,0x4a,0x7a,0x00}, // 6
  {0x02,0x02,0x0a,0x7e,0x7e,0x7e}, // 7
  {0x7e,0x7e,0x7e,0x4a,0x7e,0x00}, // 8
  {0x0c,0x4a,0x7e,0x7e,0x3c,0x00}, // 9
  {0x66,0x66,0x66,0x00,0x00,0x00}, // :
  {0x66,0xe6,0x00,0x00,0x00,0x00}, // ;
  {0x08,0x3c,0x7e,0x7e,0x62,0x00}, // <
  {0x14,0x14,0x14,0x00,0x00,0x00}, // =
  {0x62,0x7e,0x7e,0x3c,0x08,0x00}, // >
  {0x02,0x4a,0x0e,0x0e,0x0c,0x00}, // ?
  {0x3c,0x7e,0x7e,0x4a,0x72,0x30}, // @
  {0x7a,0x4a,0x7e,0x7e,0x7c,0x00}, // A
  {0x7e,0x7e,0x7e,0x4a,0x24,0x00}, // B
  {0x3c,0x7e,0x7e,0x7e,0x46,0x00}, // C
  {0x7e,0x7e,0x7e,0x62,0x3c,0x00}, // D
  {0x7e,0x7e,0x7e,0x4a,0x00,0x00}, // E
  {0x7e,0x7e,0x7e,0x0a,0x00,0x00}, // F
  {0x3c,0x7e,0x7e,0x42,0x62,0x00}, // G
  {0x7e,0x7e,0x7e,0x18,0x7e,0x00}, // H
  {0x7e,0x7e,0x7e,0x00,0x00,0x00}, // I
  {0x40,0x7e,0x7e,0x7e,0x00,0x00}, // J
  {0x7e,0x7e,0x7e,0x3c,0x66,0x00}, // K
  {0x7e,0x7e,0x7e,0x40,0x00,0x00}, // L
  {0x7e,0x3e,0x3e,0x7c,0x3e,0x3e}, // M
  {0x7e,0x3e,0x7e,0x7c,0x7e,0x00}, // N
  {0x3c,0x3c,0x7e,0x62,0x7e,0x7e}, // O
  {0x7e,0x7e,0x7e,0x22,0x0c,0x00}, // P
  {0x3c,0x7e,0x7e,0x62,0x7e,0x7c}, // Q
  {0x7e,0x7e,0x7e,0x0a,0x64,0x00}, // R
  {0x4c,0x4e,0x4e,0x7a,0x1a,0x00}, // S
  {0x02,0x7e,0x7e,0x7e,0x02,0x00}, // T
  {0x7e,0x60,0x7e,0x7e,0x7e,0x00}, // U
  {0x3e,0x60,0x7e,0x7e,0x3e,0x00}, // V
  {0x7e,0x7c,0x7c,0x3e,0x7c,0x7c}, // W
  {0x46,0x7e,0x08,0x7e,0x62,0x62}, // X
  {0x5e,0x5e,0x5e,0x70,0x3e,0x00}, // Y
  {0x66,0x7a,0x7a,0x5e,0x66,0x00}, // Z
  {0x7e,0x7e,0x7e,0x42,0x00,0x00}, // [
  {0x06,0x1e,0x1e,0x78,0x60,0x00}, // "\"
  {0x42,0x7e,0x7e,0x7e,0x00,0x00}, // ]
  {0x0c,0x06,0x0c,0x00,0x00,0x00}, // ^
  {0x40,0x40,0x40,0x40,0x40,0x00}, // _
  {0x02,0x06,0x06,0x04,0x00,0x00}, // `
  {0x78,0x24,0x7c,0x7c,0x78,0x00}, // a
  {0x7c,0x7c,0x7c,0x48,0x20,0x00}, // b
  {0x18,0x7c,0x7c,0x7c,0x4c,0x00}, // c
  {0x20,0x48,0x7c,0x7c,0x7c,0x00}, // d
  {0x18,0x7c,0x7c,0x74,0x4c,0x00}, // e
  {0x78,0x7c,0x7c,0x24,0x00,0x00}, // f
  {0x18,0x7c,0x7c,0x44,0x74,0x00}, // g
  {0x7c,0x7c,0x7c,0x08,0x60,0x00}, // h
  {0x7c,0x7c,0x7c,0x00,0x00,0x00}, // i
  {0x40,0x7c,0x7c,0x7c,0x00,0x00}, // j
  {0x7c,0x7c,0x7c,0x20,0x48,0x00}, // k
  {0x7c,0x7c,0x7c,0x40,0x00,0x00}, // l
  {0x7c,0x3c,0x3c,0x78,0x3c,0x3c}, // m
  {0x7c,0x7c,0x7c,0x04,0x78,0x00}, // n
  {0x18,0x18,0x7c,0x44,0x7c,0x7c}, // o
  {0x7c,0x7c,0x7c,0x24,0x08,0x00}, // p
  {0x18,0x18,0x7c,0x44,0x7c,0x7c}, // q
  {0x7c,0x7c,0x7c,0x04,0x00,0x00}, // r
  {0x5c,0x7c,0x7c,0x74,0x00,0x00}, // s
  {0x08,0x7c,0x7c,0x7c,0x48,0x00}, // t
  {0x7c,0x60,0x7c,0x7c,0x7c,0x00}, // u
  {0x3c,0x60,0x7c,0x7c,0x3c,0x00}, // v
  {0x7c,0x78,0x78,0x3c,0x78,0x78}, // w
  {0x4c,0x3c,0x3c,0x78,0x64,0x00}, // x
  {0x4c,0x4c,0x4c,0x78,0x3c,0x00}, // y
  {0x5c,0x74,0x44,0x5c,0x74,0x00}, // z
  {0x24,0x7e,0x42,0x42,0x00,0x00}, // {
  {0x7e,0x00,0x00,0x00,0x00,0x00}, // |
  {0x42,0x7e,0x24,0x00,0x00,0x00}, // }
  {0x04,0x06,0x06,0x02,0x04,0x06}, // ~
  {0x00,0x00,0x00,0x00,0x00,0x00}
};

static const uint8_t minimal_font_data[96][6] = {
  {0x00,0x00,0x00,0x00,0x00,0x00}, //  
  {0x2e,0x00,0x00,0x00,0x00,0x00}, // !
  {0x06,0x00,0x06,0x00,0x00,0x00}, // "
  {0x14,0x3e,0x14,0x3e,0x14,0x00}, // #
  {0x04,0x2a,0x3e,0x2a,0x10,0x00}, // $
  {0x22,0x10,0x08,0x04,0x22,0x00}, // %
  {0x14,0x2a,0x2a,0x2c,0x10,0x28}, // &
  {0x06,0x00,0x00,0x00,0x00,0x00}, // '
  {0x1c,0x22,0x00,0x00,0x00,0x00}, // (
  {0x22,0x1c,0x00,0x00,0x00,0x00}, // )
  {0x14,0x08,0x14,0x00,0x00,0x00}, // *
  {0x08,0x1c,0x08,0x00,0x00,0x00}, // +
  {0x60,0x00,0x00,0x00,0x00,0x00}, // ,
  {0x08,0x08,0x08,0x00,0x00,0x00}, // -
  {0x20,0x00,0x00,0x00,0x00,0x00}, // .
  {0x30,0x0c,0x02,0x00,0x00,0x00}, // /
  {0x1c,0x22,0x22,0x22,0x1e,0x00}, // 0
  {0x02,0x3e,0x00,0x00,0x00,0x00}, // 1
  {0x32,0x2a,0x2a,0x24,0x00,0x00}, // 2
  {0x2a,0x2a,0x2a,0x16,0x00,0x00}, // 3
  {0x0e,0x10,0x10,0x3e,0x10,0x00}, // 4
  {0x2e,0x2a,0x2a,0x12,0x00,0x00}, // 5
  {0x3c,0x2a,0x2a,0x2a,0x12,0x00}, // 6
  {0x06,0x02,0x22,0x12,0x0e,0x00}, // 7
  {0x14,0x2a,0x2a,0x2a,0x16,0x00}, // 8
  {0x04,0x2a,0x2a,0x2a,0x1e,0x00}, // 9
  {0x24,0x00,0x00,0x00,0x00,0x00}, // :
  {0x64,0x00,0x00,0x00,0x00,0x00}, // ;
  {0x08,0x14,0x22,0x00,0x00,0x00}, // <
  {0x14,0x14,0x14,0x00,0x00,0x00}, // =
  {0x22,0x14,0x08,0x00,0x00,0x00}, // >
  {0x02,0x2a,0x0a,0x04,0x00,0x00}, // ?
  {0x3c,0x02,0x1a,0x2a,0x22,0x1e}, // @
  {0x3c,0x12,0x12,0x12,0x3e,0x00}, // A
  {0x3c,0x2a,0x2a,0x2e,0x10,0x00}, // B
  {0x1c,0x22,0x22,0x22,0x00,0x00}, // C
  {0x3c,0x22,0x22,0x22,0x1c,0x00}, // D
  {0x3c,0x2a,0x2a,0x2a,0x00,0x00}, // E
  {0x3c,0x12,0x12,0x12,0x00,0x00}, // F
  {0x3c,0x22,0x22,0x2a,0x1a,0x00}, // G
  {0x3e,0x08,0x08,0x3e,0x00,0x00}, // H
  {0x22,0x3e,0x22,0x00,0x00,0x00}, // I
  {0x30,0x22,0x22,0x1e,0x00,0x00}, // J
  {0x3e,0x08,0x0c,0x32,0x00,0x00}, // K
  {0x3e,0x20,0x20,0x20,0x00,0x00}, // L
  {0x3c,0x02,0x3c,0x02,0x3c,0x00}, // M
  {0x3c,0x02,0x02,0x02,0x3e,0x00}, // N
  {0x1c,0x22,0x22,0x22,0x1e,0x00}, // O
  {0x3c,0x12,0x12,0x12,0x0e,0x00}, // P
  {0x1c,0x22,0x22,0x62,0x1e,0x00}, // Q
  {0x3c,0x12,0x12,0x32,0x0e,0x00}, // R
  {0x24,0x2a,0x2a,0x12,0x00,0x00}, // S
  {0x02,0x02,0x3e,0x02,0x02,0x00}, // T
  {0x1e,0x20,0x20,0x20,0x1e,0x00}, // U
  {0x0e,0x10,0x20,0x10,0x0e,0x00}, // V
  {0x3e,0x20,0x1e,0x20,0x1e,0x00}, // W
  {0x36,0x08,0x08,0x36,0x00,0x00}, // X
  {0x26,0x28,0x28,0x1e,0x00,0x00}, // Y
  {0x32,0x2a,0x2a,0x26,0x00,0x00}, // Z
  {0x3e,0x22,0x00,0x00,0x00,0x00}, // [
  {0x02,0x0c,0x30,0x00,0x00,0x00}, // "\"
  {0x22,0x3e,0x00,0x00,0x00,0x00}, // ]
  {0x04,0x02,0x04,0x00,0x00,0x00}, // ^
  {0x20,0x20,0x20,0x00,0x00,0x00}, // _
  {0x02,0x04,0x00,0x00,0x00,0x00}, // `
  {0x3c,0x12,0x12,0x12,0x3e,0x00}, // a
  {0x3c,0x2a,0x2a,0x2e,0x10,0x00}, // b
  {0x1c,0x22,0x22,0x22,0x00,0x00}, // c
  {0x3c,0x22,0x22,0x22,0x1c,0x00}, // d
  {0x3c,0x2a,0x2a,0x2a,0x00,0x00}, // e
  {0x3c,0x12,0x12,0x12,0x00,0x00}, // f
  {0x3c,0x22,0x22,0x2a,0x1a,0x00}, // g
  {0x3e,0x08,0x08,0x3e,0x00,0x00}, // h
  {0x22,0x3e,0x22,0x00,0x00,0x00}, // i
  {0x30,0x22,0x22,0x1e,0x00,0x00}, // j
  {0x3e,0x08,0x0c,0x32,0x00,0x00}, // k
  {0x3e,0x20,0x20,0x20,0x00,0x00}, // l
  {0x3c,0x02,0x3c,0x02,0x3e,0x00}, // m
  {0x3c,0x02,0x02,0x02,0x3e,0x00}, // n
  {0x1c,0x22,0x22,0x22,0x1e,0x00}, // o
  {0x3c,0x12,0x12,0x12,0x0e,0x00}, // p
  {0x1c,0x22,0x22,0x62,0x1e,0x00}, // q
  {0x3c,0x12,0x12,0x32,0x0e,0x00}, // r
  {0x24,0x2a,0x2a,0x12,0x00,0x00}, // s
  {0x02,0x02,0x3e,0x02,0x02,0x00}, // t
  {0x1e,0x20,0x20,0x20,0x1e,0x00}, // u
  {0x0e,0x10,0x20,0x10,0x0e,0x00}, // v
  {0x3e,0x20,0x1e,0x20,0x1e,0x00}, // w
  {0x36,0x08,0x08,0x36,0x00,0x00}, // x
  {0x26,0x28,0x28,0x1e,0x00,0x00}, // y
  {0x32,0x2a,0x2a,0x26,0x00,0x00}, // z
  {0x08,0x3e,0x22,0x00,0x00,0x00}, // {
  {0x3e,0x00,0x00,0x00,0x00,0x00}, // |
  {0x22,0x3e,0x08,0x00,0x00,0x00}, // }
  {0x04,0x02,0x02,0x00,0x00,0x00}, // ~
  {0x00,0x00,0x00,0x00,0x00,0x00}
};

namespace blit {
  const Font outline_font(&outline_font_data[0][0], 6, 8);
  const Font fat_font(&fat_font_data[0][0], 6, 8);
  const Font minimal_font(&minimal_font_data[0][0], 6, 8);
}