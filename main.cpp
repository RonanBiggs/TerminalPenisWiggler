#include <ncurses.h>
#include <unistd.h>
#include <math.h>
#include "shaft.h"
#include "wiggler.h"
//speed of wiggle
#define DELAY 100000
int x = 0, y = 0, bounceTime = 0;



void balls(){
    for (double j = 0; j < 10; j += 0.01)
      {
          x = 6*cos(j);
          y = 6*sin(j);
         mvprintw(y+8, x+10, "#");
          
      }

      for (double j = 0; j < 10; j += 0.01)
      {
          x = 6*cos(j);
          y = 6*sin(j);
         mvprintw(y+18, x+10, "#");
          
      }
      mvprintw(18, 16, " ");
      mvprintw(8, 16, " ");


}

void tip(int w, int yWiggle){
    int yy = 0;
    int xx = 0;
    for(int i = 0; i < 11; i++){
        mvprintw(w+i, 45, "|");
      
    }

      for (double j = 0; j < 10; j += 0.01)
      {
          xx = 6*cos(j);
          yy = 6*sin(j);
          if(xx+46 > 46){
         mvprintw(yy+yWiggle+5, xx + 46, "=");
          }
          
      }

}


int main(int argc, char *argv[]) {


Shaft shaft1(16,10);
Shaft shaft2(19,11);
Shaft shaft3(21,12);
Shaft shaft4(24,13);
Shaft shaft5(27,14);
Shaft shaft6(30,15);
Shaft shaft7(33,16);
Shaft shaft8(36,17);
Shaft shaft9(39,18);
Shaft shaft10(42,19);
TipWiggler wig;

Shaft lowershaft1(16,10+8);
Shaft lowershaft2(19,11+8);
Shaft lowershaft3(21,12+8);
Shaft lowershaft4(24,13+8);
Shaft lowershaft5(27,14+8);
Shaft lowershaft6(30,15+8);
Shaft lowershaft7(33,16+8);
Shaft lowershaft8(36,17+8);
Shaft lowershaft9(39,18+8);
Shaft lowershaft10(42,19+8);

 initscr();
 noecho();
 curs_set(FALSE);

 while(1) {
 
 clear(); 
 balls();
 shaft1.wiggle();
 shaft2.wiggle();
 shaft3.wiggle();
 shaft4.wiggle();
 shaft5.wiggle();
 shaft6.wiggle();
 shaft7.wiggle();
 shaft8.wiggle();
 shaft9.wiggle();
 shaft10.wiggle();

 lowershaft1.downwiggle();
 lowershaft2.downwiggle();
 lowershaft3.downwiggle();
 lowershaft4.downwiggle();
 lowershaft5.downwiggle();
 lowershaft6.downwiggle();
 lowershaft7.downwiggle();
 lowershaft8.downwiggle();
 lowershaft9.downwiggle();
 lowershaft10.downwiggle();

 tip(shaft10.y, wig.wiggle());
 refresh();

 usleep(DELAY); // Shorter delay between movements



 
 }



 endwin();
}

