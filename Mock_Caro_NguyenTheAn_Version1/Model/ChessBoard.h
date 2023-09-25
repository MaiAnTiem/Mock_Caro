#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include<vector>
#include<iostream>
using namespace std;
class ChessBoard{
    int row = 10; 
    int col = 10; 
    char ch = ' '; 
    char Board[10][10] = { 
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
        {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',},
    };
    public:
        ChessBoard(){}
        ~ChessBoard(){}
        char getPosition(int row, int column);
        void setPosition(int row, int column, char value);
        void resetChessBoard();
};
#endif