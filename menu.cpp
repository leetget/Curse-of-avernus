#include <stdio.h>
#include "menu.h"
#include "graphics.h"
IMAGE *background;//тож нерабочая хуйня
Button but[3];// мб добавить еще кнопок 

//============= МЕНЮ =============
void init_menu(){ // инициализация кнопок меню
   char s[11];
   IMAGE *background = loadBMP("background.BMP");// че не работает то
   putimage(0,0,background,COPY_PUT);
   for(int i=0; i <3; i++){
         but[i].dx = 200; but[i].dy = 60; 
         but[i].x = 270; but[i].y = 150 + i * (but[i].dy+5);   
         sprintf(s,"buttons/menu%d.bmp", i+1);// загрузка кнопок из папки buttons
        printf("%s\n", s);// в кмд показывает выгружаемые файлы
         but[i].bmp = loadBMP(s);
   }
}
void draw_menu(){ // отрисовка кнопок меню
   clearviewport();
   for(int i=0; i <3; i++){
        putimage(but[i].x , but[i].y, but[i].bmp, COPY_PUT);
   }
}

int menu(int st){
   int flag = 0; // пока не выбран пункт меню
   int x, y;
   draw_menu(); // отрисовка кнопок
   do {
         while(mousebuttons() != 1) {  x = mousex();    y = mousey();  }
         for (int i=0; i < 3; i++)
               if (x >= but[i].x && x <= but[i].x +but[i].dx &&
                    y >= but[i].y && y <= but[i].y +but[i].dy) 
                  {        
                           flag = 1;
                           st = i+1;
                           break;
                           printf("st=%d\n", st);
                  }// выход через esc или любую другую кнопку
   } while(!flag);
   
   return st;
} // menu()