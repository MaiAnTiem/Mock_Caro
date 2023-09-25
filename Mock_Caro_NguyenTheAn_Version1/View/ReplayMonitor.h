#ifndef REPLAYMONITOR_H
#define REPLAYMONITOR_H
#include "../Model/ChessBoard.h"
#include "../Controller/ReplayGame.h"
#include<string>
#include<queue>
#include<vector>
using namespace std;
class ReplayMonitor{
    ChessBoard replayChessBoard;
    public:
        // void showAllNameRecords(ReplayGame& replayGame);
        void ReplayShow(ReplayGame& replayGame);
};
#endif