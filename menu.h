#include "graphics.h"
#ifndef _MENU_
#define _MENU_
// =========== ��������� ����
typedef struct button{
   int  x, y, dx, dy;
   IMAGE *zastavka1, *aboutme,*bmp;// pics
} Button;
void init_menu();
void draw_menu();
void load();
int menu(int st);
void init_menu(); // ������������� ����
#endif // _MENU_ 