#ifndef READFILE_H
#define READFILE_H

#include <iostream>
#include <fstream>
#include <string>
#include "Board.h"

using namespace std;

class ReadFile
{
  public:
    ReadFile();
    ~ReadFile();
    Board* return_board(string path);

  private:
    string path;
    Board* board_to_return;
};

#endif