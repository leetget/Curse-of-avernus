//================
#include <stdio.h>
#include "menu.h"
#include "game.h"
#include "graphics.h"
// ��������� �������=================================
void init(); // ������������� ���������� ����
void zastavka();
//============================
void about();
void rules();
void close_pr();
//============================
int main(){
   int st = 1;
   init();
   zastavka();
   do{
      st = menu(st);
      switch(st){
         //case 1: new_game(); break;
         case 2: about(); break;
      }// ����� � ���������� ������
   } while(st != 3);
   close_pr(); 
   return 0;
}
//============================
void init(){ // ������������� ���������
   initwindow(wx, wy, "�������", 200, 200);
   init_menu(); // ������������� ����   
} // init()

void zastavka(){ // zastavka(rework)
   int sx = wx/2;
   int sy = wy/2;
   IMAGE * zastavka1 = loadBMP("pic/zast.bmp");
   putimage(0, 0, zastavka1, COPY_PUT);
   outtextxy(560, 360, "����� ����� �������");
   getch();
   freeimage(zastavka1);
}// zastavka()

//==========================================
void about(){ // about dopil // ��������� �������� ��� ������� �� ������� �������(�������� �������� ������� �� " � ���������")
   clearviewport();
   IMAGE *aboutme = loadBMP("pic/about.BMP");
   putimage(0,0,aboutme,COPY_PUT);
   getch();
   freeimage(aboutme);
}
void close_pr(){ // exit
   closegraph();
}