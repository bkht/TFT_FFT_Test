// FontName : HD44780_12x18
// FontSize : 12 x 18

__align(2) 
const unsigned char HD44780_12x18[] = {
        37, 12, 18, 3, // Length,hor,vert,bytes/vert
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char  
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x31, 0x00, 0xFF, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char !
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char "
        0x0A, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char #
        0x0A, 0x30, 0x0C, 0x00, 0x78, 0x0C, 0x00, 0xFC, 0x0C, 0x00, 0xCC, 0x0C, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xCC, 0x0C, 0x00, 0xCC, 0x0F, 0x00, 0x8C, 0x07, 0x00, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char $
        0x0A, 0x06, 0x0C, 0x00, 0x0F, 0x0E, 0x00, 0x0F, 0x07, 0x00, 0x86, 0x03, 0x00, 0xC0, 0x01, 0x00, 0xE0, 0x00, 0x00, 0x70, 0x18, 0x00, 0x38, 0x3C, 0x00, 0x1C, 0x3C, 0x00, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char %
        0x0A, 0x1C, 0x0F, 0x00, 0xBE, 0x1F, 0x00, 0xF7, 0x39, 0x00, 0xE3, 0x30, 0x00, 0xF7, 0x31, 0x00, 0xBE, 0x3B, 0x00, 0x1C, 0x1F, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x1F, 0x00, 0x80, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char &
        0x04, 0x20, 0x00, 0x00, 0x37, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char '
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x03, 0x00, 0xF8, 0x07, 0x00, 0x0C, 0x0C, 0x00, 0x06, 0x18, 0x00, 0x03, 0x30, 0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char (
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x00, 0x03, 0x30, 0x00, 0x06, 0x18, 0x00, 0x0C, 0x0C, 0x00, 0xF8, 0x07, 0x00, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char )
        0x0A, 0x18, 0x06, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0xE0, 0x01, 0x00, 0xFC, 0x0F, 0x00, 0xFC, 0x0F, 0x00, 0xE0, 0x01, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x18, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char *
        0x0A, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xFC, 0x0F, 0x00, 0xFC, 0x0F, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char +
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x37, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ,
        0x0A, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char -
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char .
        0x0A, 0x00, 0x1C, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 0xC0, 0x01, 0x00, 0xE0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char /
        0x0A, 0xFC, 0x0F, 0x00, 0xFE, 0x1F, 0x00, 0x07, 0x3F, 0x00, 0x83, 0x33, 0x00, 0xC3, 0x31, 0x00, 0xE3, 0x30, 0x00, 0x73, 0x30, 0x00, 0x3F, 0x38, 0x00, 0xFE, 0x1F, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 0
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x30, 0x00, 0x0E, 0x30, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 1
        0x0A, 0x0C, 0x30, 0x00, 0x0E, 0x38, 0x00, 0x07, 0x3C, 0x00, 0x03, 0x3E, 0x00, 0x03, 0x37, 0x00, 0x83, 0x33, 0x00, 0xC3, 0x31, 0x00, 0xE7, 0x30, 0x00, 0x7E, 0x30, 0x00, 0x3C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 2
        0x0A, 0x03, 0x0C, 0x00, 0x03, 0x1C, 0x00, 0x03, 0x38, 0x00, 0x03, 0x30, 0x00, 0x23, 0x30, 0x00, 0x73, 0x30, 0x00, 0xFB, 0x30, 0x00, 0xCF, 0x39, 0x00, 0x87, 0x1F, 0x00, 0x03, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 3
        0x0A, 0xC0, 0x03, 0x00, 0xE0, 0x03, 0x00, 0x70, 0x03, 0x00, 0x38, 0x03, 0x00, 0x1C, 0x03, 0x00, 0x0E, 0x03, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 4
        0x0A, 0x3F, 0x0C, 0x00, 0x3F, 0x1C, 0x00, 0x33, 0x38, 0x00, 0x33, 0x30, 0x00, 0x33, 0x30, 0x00, 0x33, 0x30, 0x00, 0x33, 0x30, 0x00, 0x73, 0x38, 0x00, 0xE3, 0x1F, 0x00, 0xC3, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 5
        0x0A, 0xF0, 0x0F, 0x00, 0xF8, 0x1F, 0x00, 0xDC, 0x39, 0x00, 0xCE, 0x30, 0x00, 0xC7, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x39, 0x00, 0x80, 0x1F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 6
        0x0A, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x3F, 0x00, 0x83, 0x3F, 0x00, 0xC3, 0x01, 0x00, 0xE3, 0x00, 0x00, 0x73, 0x00, 0x00, 0x3B, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 7
        0x0A, 0x3C, 0x0F, 0x00, 0xFE, 0x1F, 0x00, 0xE7, 0x39, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xE7, 0x39, 0x00, 0xFE, 0x1F, 0x00, 0x3C, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 8
        0x0A, 0x3C, 0x00, 0x00, 0x7E, 0x00, 0x00, 0xE7, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x38, 0x00, 0xC3, 0x1C, 0x00, 0xE7, 0x0E, 0x00, 0xFE, 0x07, 0x00, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char 9
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x07, 0x00, 0x1C, 0x07, 0x00, 0x1C, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char :
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x1C, 0x37, 0x00, 0x1C, 0x1F, 0x00, 0x1C, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ;
        0x09, 0xC0, 0x00, 0x00, 0xE0, 0x01, 0x00, 0xF0, 0x03, 0x00, 0x38, 0x07, 0x00, 0x1C, 0x0E, 0x00, 0x0E, 0x1C, 0x00, 0x07, 0x38, 0x00, 0x03, 0x30, 0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char <
        0x0A, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char =
        0x0A, 0x00, 0x00, 0x00, 0x01, 0x20, 0x00, 0x03, 0x30, 0x00, 0x07, 0x38, 0x00, 0x0E, 0x1C, 0x00, 0x1C, 0x0E, 0x00, 0x38, 0x07, 0x00, 0xF0, 0x03, 0x00, 0xE0, 0x01, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char >
        0x0A, 0x0C, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x37, 0x00, 0x83, 0x37, 0x00, 0xC3, 0x01, 0x00, 0xE7, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ?
        0x0A, 0x0C, 0x0F, 0x00, 0x8E, 0x1F, 0x00, 0xC7, 0x39, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x3F, 0x00, 0x83, 0x3F, 0x00, 0x03, 0x30, 0x00, 0x07, 0x38, 0x00, 0xFE, 0x1F, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char @
        0x0A, 0xFC, 0x3F, 0x00, 0xFE, 0x3F, 0x00, 0x07, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x07, 0x03, 0x00, 0xFE, 0x3F, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char A
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xE7, 0x39, 0x00, 0xFE, 0x1F, 0x00, 0x3C, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char B
        0x0A, 0xFC, 0x0F, 0x00, 0xFE, 0x1F, 0x00, 0x07, 0x38, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x07, 0x38, 0x00, 0x0E, 0x1C, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char C
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x07, 0x38, 0x00, 0x0E, 0x1C, 0x00, 0x1C, 0x0E, 0x00, 0xF8, 0x07, 0x00, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char D
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char E
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char F
        0x0A, 0xFC, 0x0F, 0x00, 0xFE, 0x1F, 0x00, 0x07, 0x38, 0x00, 0x03, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC7, 0x30, 0x00, 0xCE, 0x3F, 0x00, 0xCC, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char G
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char H
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char I
        0x0A, 0x00, 0x0C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x38, 0x00, 0xFF, 0x1F, 0x00, 0xFF, 0x0F, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char J
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC0, 0x00, 0x00, 0xE0, 0x01, 0x00, 0xF0, 0x03, 0x00, 0x38, 0x07, 0x00, 0x1C, 0x0E, 0x00, 0x0E, 0x1C, 0x00, 0x07, 0x38, 0x00, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char K
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char L
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x78, 0x00, 0x00, 0x78, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x0E, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char M
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x38, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x80, 0x03, 0x00, 0x00, 0x07, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char N
        0x0A, 0xFC, 0x0F, 0x00, 0xFE, 0x1F, 0x00, 0x07, 0x38, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x07, 0x38, 0x00, 0xFE, 0x1F, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char O
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x00, 0x00, 0xE7, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char P
        0x0A, 0xFC, 0x0F, 0x00, 0xFE, 0x1F, 0x00, 0x07, 0x38, 0x00, 0x03, 0x30, 0x00, 0x03, 0x33, 0x00, 0x03, 0x37, 0x00, 0x03, 0x3E, 0x00, 0x07, 0x1C, 0x00, 0xFE, 0x3F, 0x00, 0xFC, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Q
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC3, 0x00, 0x00, 0xC3, 0x01, 0x00, 0xC3, 0x03, 0x00, 0xC3, 0x07, 0x00, 0xC3, 0x0E, 0x00, 0xE7, 0x1C, 0x00, 0x7E, 0x38, 0x00, 0x3C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char R
        0x0A, 0x3C, 0x30, 0x00, 0x7E, 0x30, 0x00, 0xE7, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x30, 0x00, 0xC3, 0x39, 0x00, 0x83, 0x1F, 0x00, 0x03, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char S
        0x0A, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char T
        0x0A, 0xFF, 0x0F, 0x00, 0xFF, 0x1F, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x38, 0x00, 0xFF, 0x1F, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char U
        0x0A, 0xFF, 0x03, 0x00, 0xFF, 0x07, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x0E, 0x00, 0xFF, 0x07, 0x00, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char V
        0x0A, 0xFF, 0x0F, 0x00, 0xFF, 0x1F, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0xC0, 0x1F, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0xFF, 0x1F, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char W
        0x0A, 0x0F, 0x3C, 0x00, 0x1F, 0x3E, 0x00, 0x38, 0x07, 0x00, 0xF0, 0x03, 0x00, 0xE0, 0x01, 0x00, 0xE0, 0x01, 0x00, 0xF0, 0x03, 0x00, 0x38, 0x07, 0x00, 0x1F, 0x3E, 0x00, 0x0F, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char X
        0x0A, 0x3F, 0x00, 0x00, 0x7F, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x80, 0x3F, 0x00, 0x80, 0x3F, 0x00, 0xC0, 0x01, 0x00, 0xE0, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Y
        0x0A, 0x03, 0x3C, 0x00, 0x03, 0x3E, 0x00, 0x03, 0x37, 0x00, 0x83, 0x33, 0x00, 0xC3, 0x31, 0x00, 0xE3, 0x30, 0x00, 0x73, 0x30, 0x00, 0x3B, 0x30, 0x00, 0x1F, 0x30, 0x00, 0x0F, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char Z
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char [
        0x0A, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x80, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char BackSlash
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ]
        0x0A, 0x30, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ^
        0x0A, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char _
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char `
        0x0A, 0x00, 0x0C, 0x00, 0x00, 0x1E, 0x00, 0x30, 0x3F, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x70, 0x33, 0x00, 0xE0, 0x3F, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char a
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC0, 0x31, 0x00, 0xE0, 0x30, 0x00, 0x70, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x70, 0x38, 0x00, 0xE0, 0x1F, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char b
        0x0A, 0xC0, 0x0F, 0x00, 0xE0, 0x1F, 0x00, 0x70, 0x38, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x70, 0x38, 0x00, 0x60, 0x1C, 0x00, 0x40, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char c
        0x0A, 0xC0, 0x0F, 0x00, 0xE0, 0x1F, 0x00, 0x70, 0x38, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x70, 0x30, 0x00, 0xE0, 0x30, 0x00, 0xC0, 0x31, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char d
        0x0A, 0xC0, 0x0F, 0x00, 0xE0, 0x1F, 0x00, 0x70, 0x3B, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x70, 0x33, 0x00, 0xE0, 0x03, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char e
        0x0A, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xFC, 0x3F, 0x00, 0xFE, 0x3F, 0x00, 0xC7, 0x00, 0x00, 0xC3, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char f
        0x0A, 0xF0, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x9C, 0x33, 0x00, 0x0C, 0x33, 0x00, 0x0C, 0x33, 0x00, 0x0C, 0x33, 0x00, 0x0C, 0x33, 0x00, 0x0C, 0x3B, 0x00, 0xFC, 0x1F, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char g
        0x0A, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0xC0, 0x01, 0x00, 0xE0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x3F, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char h
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0xF3, 0x3F, 0x00, 0xF3, 0x3F, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char i
        0x08, 0x00, 0x0C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x38, 0x00, 0xF3, 0x1F, 0x00, 0xF3, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char j
        0x09, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x03, 0x00, 0x80, 0x07, 0x00, 0xC0, 0x0F, 0x00, 0xE0, 0x1C, 0x00, 0x70, 0x38, 0x00, 0x30, 0x30, 0x00, 0x10, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char k
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x30, 0x00, 0x03, 0x30, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char l
        0x0A, 0xF0, 0x3F, 0x00, 0xF0, 0x3F, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x03, 0x00, 0xE0, 0x03, 0x00, 0x70, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x3F, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char m
        0x0A, 0xF0, 0x3F, 0x00, 0xF0, 0x3F, 0x00, 0xC0, 0x01, 0x00, 0xE0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x3F, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char n
        0x0A, 0xC0, 0x0F, 0x00, 0xE0, 0x1F, 0x00, 0x70, 0x38, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x30, 0x30, 0x00, 0x70, 0x38, 0x00, 0xE0, 0x1F, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char o
        0x0A, 0xF0, 0x3F, 0x00, 0xF0, 0x3F, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0xF0, 0x03, 0x00, 0xE0, 0x01, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char p
        0x0A, 0xC0, 0x00, 0x00, 0xE0, 0x01, 0x00, 0xF0, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x70, 0x03, 0x00, 0xE0, 0x03, 0x00, 0xC0, 0x03, 0x00, 0xF0, 0x3F, 0x00, 0xF0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char q
        0x0A, 0xF0, 0x3F, 0x00, 0xF0, 0x3F, 0x00, 0xC0, 0x01, 0x00, 0xE0, 0x00, 0x00, 0x70, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x70, 0x00, 0x00, 0xE0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char r
        0x0A, 0xC0, 0x30, 0x00, 0xE0, 0x31, 0x00, 0xF0, 0x33, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x30, 0x33, 0x00, 0x30, 0x3F, 0x00, 0x30, 0x1E, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char s
        0x0A, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0xFF, 0x1F, 0x00, 0x30, 0x38, 0x00, 0x30, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char t
        0x0A, 0xF0, 0x0F, 0x00, 0xF0, 0x1F, 0x00, 0x00, 0x38, 0x00, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x0E, 0x00, 0xF0, 0x3F, 0x00, 0xF0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char u
        0x0A, 0xF0, 0x03, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x0E, 0x00, 0xF0, 0x07, 0x00, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char v
        0x0A, 0xF0, 0x0F, 0x00, 0xF0, 0x1F, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x38, 0x00, 0x00, 0x38, 0x00, 0xF0, 0x1F, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char w
        0x0A, 0x30, 0x30, 0x00, 0x70, 0x38, 0x00, 0xE0, 0x1C, 0x00, 0xC0, 0x0F, 0x00, 0x80, 0x07, 0x00, 0x80, 0x07, 0x00, 0xC0, 0x0F, 0x00, 0xE0, 0x1C, 0x00, 0x70, 0x38, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char x
        0x0A, 0xF0, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x80, 0x33, 0x00, 0x00, 0x33, 0x00, 0x00, 0x33, 0x00, 0x00, 0x33, 0x00, 0x00, 0x33, 0x00, 0x00, 0x3B, 0x00, 0xF0, 0x1F, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char y
        0x0A, 0x30, 0x30, 0x00, 0x30, 0x38, 0x00, 0x30, 0x3C, 0x00, 0x30, 0x3E, 0x00, 0x30, 0x37, 0x00, 0xB0, 0x33, 0x00, 0xF0, 0x31, 0x00, 0xF0, 0x30, 0x00, 0x70, 0x30, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char z
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xE0, 0x01, 0x00, 0xFC, 0x0F, 0x00, 0x3E, 0x1F, 0x00, 0x07, 0x38, 0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char {
        0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char |
        0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x20, 0x00, 0x07, 0x38, 0x00, 0x3E, 0x1F, 0x00, 0xFC, 0x0F, 0x00, 0xE0, 0x01, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char }
        0x0A, 0x00, 0x06, 0x00, 0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 0x80, 0x01, 0x00, 0x80, 0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x06, 0x00, 0x00, 0x07, 0x00, 0x80, 0x03, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // Code for char ~
        0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x77, 0x00, 0x00, 0x63, 0x00, 0x00, 0x77, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00   // Code for char 
        };
