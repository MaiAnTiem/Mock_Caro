#ifndef REPLAYGAME_H
#define REPLAYGAME_H
#include<queue>
#include<string>
#include "../Model/ChessBoard.h"
#include<vector>
#include "GameController.h"
using namespace std;
class ReplayGame{
    public:
        vector<vector<string>> list_record;
        ChessBoard replayChessBoard; // 
    public:
        ReplayGame(){}
        ~ReplayGame(){}

        // void saveRecord(GameController& gameControl);
        void addRecord(vector<string> Record);
        // void showAllRecord();

};

#endif