
#include <ncurses.h>
#include <iostream>
#include <stdlib.h>

#include "../include/plateau.h"
#include "../include/display.h"

void displayer::init () {
  initscr();
  init_color();
  clear();
  noecho();  
  cbreak(); 
  keypad(stdscr, TRUE);
  refresh();
}

void displayer::init_color()
{
  if (has_colors()) 
  {
    start_color();
    init_pair(BLACK, COLOR_BLACK, COLOR_BLACK);
    init_pair(RED, COLOR_RED, COLOR_BLACK);
    init_pair(BLUE, COLOR_BLUE, COLOR_BLACK);
    init_pair(GREEN, COLOR_GREEN, COLOR_BLACK);
    init_pair(CYAN, COLOR_CYAN, COLOR_BLACK);
    init_pair(YELLOW, COLOR_YELLOW, COLOR_BLACK);
  }
}

void displayer::display_bg(plateau p)
{
  init();
  
  for(int i = 0; i < p.getNx(); i++)
  {
      for(int j = 0; j < p.getNy(); j++)
      {
          move(i,j);
          int m = p.bg[i][j];
          if(m == 1 or m == 0)
          {
            attron(COLOR_PAIR(6));
            addch('.');
            attroff(COLOR_PAIR(6));
          }
          if(m == 2)
          {
            attron(COLOR_PAIR(0));
            addch('.');
            attroff(COLOR_PAIR(0));
          }
          if(m == 3)
          {
            attron(COLOR_PAIR(4));
            addch('.');
            attroff(COLOR_PAIR(4));
          }
          if(m == 4)
          {
            attron(COLOR_PAIR(1));
            addch('.');
            attroff(COLOR_PAIR(1));
          }
      }
  }
refresh();
}

void displayer::display_hero(hero h)
{
  move(h.m_pos[0],h.m_pos[1]);
  attron(COLOR_PAIR(3));
  addch('@');
  attroff(COLOR_PAIR(3));
  refresh();
}

void displayer::display_ennemi(ennemi e)
{
  move(e.m_pos[0],e.m_pos[1]);
  attron(COLOR_PAIR(3));
  addch('M');
  attroff(COLOR_PAIR(3));
  refresh();
}

/*void displayer::display_potion(potion p)
{
  move(p.m_pos[0],p.m_pos[1]);
  attron(COLOR_PAIR(3));
  addch('M');
  attroff(COLOR_PAIR(3));
  refresh();
}*/


void displayer::remove_hero(hero h)
{
  move(h.m_pos[0],h.m_pos[1]);
  attron(COLOR_PAIR(0));
  addch('.');
  attroff(COLOR_PAIR(0));
  refresh();
}

void displayer::remove_ennemi(ennemi e)
{
  move(e.m_pos[0],e.m_pos[1]);
  attron(COLOR_PAIR(0));
  addch('.');
  attroff(COLOR_PAIR(0));
  refresh();
}

