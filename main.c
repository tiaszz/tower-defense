#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

#define cols 20
#define rows 20

char board[cols * rows];

void fill_board() {
  int x,y;

  for (y=0; y<rows; y++){
    for (x=0; x<cols; x++){
      if(x==0||y==0||x==cols-1||y==rows-1){
        board[y*cols + x] = '#';
      }
    }
  }
}

void print_board() {
  int x,y;

  for (y=0; y<rows; y++){
    for (x=0; x<cols; x++){
      putch(board[y*cols + x]);
    }
    putch('\n');
  }
}

int main() {
  fill_board();
  print_board();


  return 0;
}

