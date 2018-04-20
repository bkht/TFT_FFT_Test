/* mbed GraphicsDisplay Display Library Base Class
 * Copyright (c) 2007-2009 sford
 * Released under the MIT License: http://mbed.org/license/mit
 */
 
#include "GraphicsDisplay.h"
    
GraphicsDisplay::GraphicsDisplay(const char *name):TextDisplay(name) {
    foreground(0xFFFF);
    background(0x0000);
}
    
void GraphicsDisplay::character(int column, int row, int value) { 
    blitbit(column * 8, row * 8, 8, 8, (char*)&(FONT8x8[value - 0x1F][0]));
}

void GraphicsDisplay::window(unsigned int x,unsigned  int y,unsigned  int w,unsigned  int h) {
    // current pixel location
    _x = x;
    _y = y;
    // window settings
    _x1 = x;
    _x2 = x + w - 1;
    _y1 = y;
    _y2 = y + h - 1;
}
    
void GraphicsDisplay::putp(int colour) {
    // put pixel at current pixel location
    pixel(_x, _y, colour);
    // update pixel location based on window settings
    _x++;
    if(_x > _x2) {
        _x = _x1;
        _y++;
        if(_y > _y2) {
            _y = _y1;
        }
    }
}

void GraphicsDisplay::fill(int x, int y, int w, int h, int colour) { 
    window(x, y, w, h);
    for(int i=0; i<w*h; i++) {
        putp(colour);
    }
}
    
void GraphicsDisplay::cls() {
    fill(0, 0, width(), height(), _background);
}
    
void GraphicsDisplay::blit(int x, int y, int w, int h, const int *colour) { 
    window(x, y, w, h);
    for(int i=0; i<w*h; i++) {
        putp(colour[i]);
    }
}
    
void GraphicsDisplay::blitbit(int x, int y, int w, int h, const char* colour) {
    window(x, y, w, h);
    for(int i = 0; i < w*h; i++) {
        char byte = colour[i >> 3];
        int offset = i & 0x7;
        int c = ((byte << offset) & 0x80) ? _foreground : _background;
        putp(c);
    }
}
    
int GraphicsDisplay::columns() { 
    return width() / 8; 
}

int GraphicsDisplay::rows() { 
    return height() / 8; 
}

