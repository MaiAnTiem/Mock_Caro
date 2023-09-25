#include "GameMonitor.h"
#include "../Controller/GameController.h"
#include<iostream>
#include<string>
#include "../Controller/ReplayGame.h"
#include "../Controller/PlayerInformation.h"
using namespace std;



void GameMonitor::drawConsole(ChessBoard board){
    int row=10;
    int col=10;
    cout << "Play 1 <O> - Player 2 <X>"<<endl;
    for(int i=0; i < 20; i++){
        if(i%2==0){
            for(int j=0; j<10; j++){
              cout << " " << board.getPosition(i/2, j) <<" ";
              cout << "|";
            }
        }else{
        if(i%2){
          for(int j=0; j<10; j++){
              cout << "----";
            }
        }
    }
     cout << "\n";
}
}

void GameMonitor::Run(GameController& gameControll, ReplayGame& replayGame, Player& person1, Player& person2){
    int row=0;
    int col=0;
    while(true){
        drawConsole(gameControll.chessBoard);
        if(gameControll.turn_player){
            cout << "Player 2:\n";
        }else{
            cout << "Player 1:\n";;
        }
        cout << "Enter row: ";
        cin >> row;
        cout << "Enter col: ";
        cin >> col;
        if(gameControll.chessBoard.getPosition(row, col)!= ' '){
            cout << "Invalid\n";
            continue; 
        }
        gameControll.choose(row, col, person1, person2);
        if(gameControll.checkWinner(row, col, gameControll.turn_player)){
            break;
        }
        gameControll.turn_player=!gameControll.turn_player;
    }
    gameControll.choose(row, col, person1, person2);
    drawConsole(gameControll.chessBoard);
    string winner = gameControll.turn_player?"player 2":"player 1";
    cout << "Winner is " << winner << endl;
    replayGame.addRecord(gameControll.Record); //listRecord
    PlayerInformation playerInformation;
    if(!playerInformation.searchByName(person1.getName())){
        playerInformation.SavePerson(person1);
    }
    if(!playerInformation.searchByName(person2.getName())){
        playerInformation.SavePerson(person2);
    }
    
    if(gameControll.turn_player){
        // win rank+1, lose rank-1 (Person2 win)
        person2.setWin_count(person2.getWin_count()+1);
        person2.setRank(person2.getRank()+2);
        person1.setLose_count(person1.getLose_count()+1);
        if(person1.getRank()){
            person1.setRank(person1.getRank()-1);
        }
    }else{
        person1.setWin_count(person1.getWin_count()+1);
        person1.setRank(person1.getRank()+2);
        person2.setLose_count(person2.getLose_count()+1);
        if(person2.getRank()){
            person2.setRank(person2.getRank()-1);
        }
    }
    
    playerInformation.updatePlayer(person1, person2);

    
    }
