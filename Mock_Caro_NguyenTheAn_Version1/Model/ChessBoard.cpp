#include "ChessBoard.h"

char ChessBoard::getPosition(int row, int column){
    return Board[row][column];
}
void ChessBoard::setPosition(int row, int column, char value){
    Board[row][column]=value;
}

void ChessBoard::resetChessBoard(){
    for(int i=0; i< 10; i++){
        for(int j=0; j<10; j++){
            Board[i][j] = ' ';
        }
    }
}