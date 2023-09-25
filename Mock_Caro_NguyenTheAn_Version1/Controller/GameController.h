#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H
#include<string>
#include<vector>
#include "../Model/PLayer.h"
#include "../Model/ChessBoard.h"
#include<vector>
class GameController{
    vector<Player> players;
    public:
        ChessBoard chessBoard;
        vector<string> Record;
        bool turn_player=false;
    public:
    GameController(){}
    ~GameController(){}
    void choose(int row, int column, Player person1, Player person2);

    bool checkWinner(int row, int col, bool turn_player);

    string getLocalTime();
};
#endif