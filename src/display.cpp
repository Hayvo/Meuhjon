#pragma once

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

void displayer::display(plateau p)
{
    init();
    for(int i = 0; i < p.getNx(); i++)
    {
        for(int j = 0; j < p.getNy(); j++)
        {
            attron(COLOR_PAIR(1));
            move(i,j);
            addch(p.bg[i][j]);
            attroff(COLOR_PAIR(1));
        }
    }
}

