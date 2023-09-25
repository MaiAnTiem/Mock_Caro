#include <string>
#include "GameMonitor.h"
#include "ReplayMonitor.h"
#include "RankBoard.h"
#include "../Controller/GameController.h"
#include "../Model/ChessBoard.h"
#include "../Model/Player.h"
#include "../Controller/PlayerInformation.h"
#include "../Controller/ReplayGame.h"
class Caro{
    public:
        GameController gameControll;
        ChessBoard board;
        GameMonitor gameMonitor;
        ReplayMonitor replayMonitor;
        PlayerInformation playerInformation;
        ReplayGame replayGame;
        RankBoard rankBoard;
        Player person1;
        Player person2;
        enum MenuChoice {
        NEW_GAME = 1,
        REPLAY,
        Show_RANK_BOARD,
        EXIT
    };
    public:
        Caro(){}
        ~Caro(){}
        void Run();
        void NewGame();
        void Replay();
        void RankBoard();
        void Exit();
        //vector<Player> listPeople
};