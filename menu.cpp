#include <stdio.h>
#include "menu.h"
#include "graphics.h"
IMAGE *background;//��� ��������� �����
Button but[3];// �� �������� ��� ������ 

//============= ���� =============
void init_menu(){ // ������������� ������ ����
   char s[11];
   IMAGE *background = loadBMP("background.BMP");// �� �� �������� ��
   putimage(0,0,background,COPY_PUT);
   for(int i=0; i <3; i++){
         but[i].dx = 200; but[i].dy = 60; 
         but[i].x = 270; but[i].y = 150 + i * (but[i].dy+5);   
         sprintf(s,"buttons/menu%d.bmp", i+1);// �������� ������ �� ����� buttons
        printf("%s\n", s);// � ��� ���������� ����������� �����
         but[i].bmp = loadBMP(s);
   }
}
void draw_menu(){ // ��������� ������ ����
   clearviewport();
   for(int i=0; i <3; i++){
        putimage(but[i].x , but[i].y, but[i].bmp, COPY_PUT);
   }
}

int menu(int st){
   int flag = 0; // ���� �� ������ ����� ����
   int x, y;
   draw_menu(); // ��������� ������
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
                  }// ����� ����� esc ��� ����� ������ ������
   } while(!flag);
   
   return st;
} // menu()