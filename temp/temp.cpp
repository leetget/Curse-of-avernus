


Buttun buttons[N_BUTTONS];
IMAGE *background, *logo, *board, *about_the_program;

void load() {
   background = loadBMP("");
   logo = loadBMP("");
   board = loadBMP("");
   about_the_program = loadBMP("");
   
   create_button(NEW_GAME,100,100,300,"");
   create_button(ABOUT,100,100,300,"");
   create_button(EXIT,100,100,300,"");
}
void create_button(int i,int x0,int y0,int size,const char *file_name){
   buttons[i].image = loadBMP(file_name);
   buttons[i].x0 = x0;
   buttons[i].y0 = y0;
   buttons[i].x1 = imagewidth(buttons[i].image);
   buttons[i].y1 = imageheight(buttons[i].image);
   _abracadabra_cast(buttons[i]);