#include "ReplayMonitor.h"
#include "GameMonitor.h"



void ReplayMonitor::ReplayShow(ReplayGame& replayGame){
    replayGame.replayChessBoard.resetChessBoard();
    if(replayGame.list_record[0].empty()){
        cout << "Empty record" << endl;
        return;
    }
    cout << "Replay game:\n";
    for(int i=1; i<replayGame.list_record[0].size(); i++){
        string step = replayGame.list_record[0][i];
        char value = step[0];
        int row = step[1]-48;
        int col = step[2]-48;
        replayChessBoard.setPosition(row, col, value);
        GameMonitor gameMonitor;
        gameMonitor.drawConsole(replayChessBoard);
    }

}