#include "Caro.h"
#include<string>
#include "../Model/ChessBoard.h"
#include "GameMonitor.h"
#include<vector>

void Caro::NewGame(){
    gameControll.chessBoard.resetChessBoard();
    Player person1 = playerInformation.EnterPerson("Enter name player1: ");
    Player person2 = playerInformation.EnterPerson("Enter name player2: ");
    gameMonitor.Run(gameControll, replayGame, person1, person2);
}
void Caro::Replay(){
    replayMonitor.ReplayShow(replayGame);
}
void Caro::RankBoard(){
    rankBoard.showRankBoard();
    
}
void Caro::Exit(){}

void Caro::Run(){
    while (true) {
    int choice;
    cout << "\n\nMenu:\n";
    cout << NEW_GAME << ". New game\n";
    cout << REPLAY << ". Replay\n";
    cout << Show_RANK_BOARD << ". Show rank board\n";
    cout << EXIT << ". Exit\n";
    cout << "Enter choice: ";
    cin >> choice;
    switch (static_cast<MenuChoice>(choice)) {
        case NEW_GAME: {
            NewGame();
            break;
        }
        case REPLAY: {
            Replay();
            break;
        }
        
        case Show_RANK_BOARD: {
            RankBoard();
            break;
        }
        case EXIT: {
            return;
        }
        default: {
            cout << "\nInvalid choice. Please try again.\n";
            break;
        }
}
    }}