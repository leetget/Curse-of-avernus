#include "graphics.h"
#ifndef _MENU_
#define _MENU_
// =========== параметры меню
typedef struct button{
   int  x, y, dx, dy;
   IMAGE *bmp;
} Button;
void init_menu();
void draw_menu();
int menu(int st);
void init_menu(); // инициализация меню
#endif // _MENU_ 