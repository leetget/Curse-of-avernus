//================
#include <stdio.h>
#include "menu.h"
#include "game.h"
#include "graphics.h"
// прототипы функций=================================
void init(); // инициализация параметров игры
void zastavka();
//void load();
//============================
void about();
void rules();
void close_pr();
//============================
int main(){
   int st = 1;
   init();
   zastavka();
   //load();
   do{
      st = menu(st);
      switch(st){
         //case 1: new_game(); break;
         case 2: about(); break;
      }// кейсы с содержимым кнопок
   } while(st != 3);
   close_pr(); 
   return 0;
}
//============================
void init(){ // инициализация программы
   initwindow(wx, wy, "Крестики-нолики", 200, 200);
   init_menu(); // инициализация меню   
} // init()

void zastavka(){ // zastavka(rework)
   int sx = wx/2;
   int sy = wy/2;
   IMAGE * bmp1 = loadBMP("zast.bmp");
   putimage(0, 0, bmp1, COPY_PUT);
   outtextxy(325, 300, "Нажми любую клавишу");
   getch();
   freeimage(bmp1);
}// zastavka()

//==========================================
void about(){ // about dopil
   clearviewport();
   outtextxy(100, 100, "О программе");
   getch();
}
void close_pr(){ // exit
   closegraph();
}