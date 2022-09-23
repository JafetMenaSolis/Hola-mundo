// g++ -Wall 1.cpp -lncurses -o test && ./test
#include <ncurses.h>
#include <cstdlib>
#include <unistd.h>

#define DELAY 30000

int main(void) 
{

  int y = 0,x=0;
  initscr();
  noecho();
  curs_set(FALSE);
  
  
  mvprintw(24,80,"Hello World");55
  refresh();
  sleep(1);

  // close graphic mode and finish 
  endwin();
}

       
       
