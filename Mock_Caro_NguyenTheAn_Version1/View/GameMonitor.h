#ifndef GAMEMONITOR_H
#define GAMEMONITOR_H
#include<string>
#include "../Controller/GameController.h"
#include "ReplayMonitor.h"
// #include "../Model/ChessBoard.h"
class GameMonitor{
    public:
        void Run(GameController& gameControll,  ReplayGame& replayGame,Player& person1, Player& person2);
        void drawConsole( ChessBoard board);
        string getLocalTime();
};
#endif 