#include "GameController.h"
#include "../View/ReplayMonitor.h"
#include<string>
#include <ctime>
void GameController::choose(int row, int col, Player person1, Player person2){
    char value = turn_player?'X':'O';
    chessBoard.setPosition(row, col, value);
    if(Record.size()==0){
        string nameRecord = (person1.getName()+'_'+person2.getName())+getLocalTime();
        GameController::Record.push_back(nameRecord);
    }
        string step = value+to_string(row)+to_string(col);
        GameController::Record.push_back(step);
    
}

bool GameController::checkWinner(int row, int col, bool turn_player){
    int count=1;
    char value = turn_player?'X':'O';
    // row
    for(int i=1; i<5;i++){
        if((col-i)>=0 && value==chessBoard.getPosition(row,col-i)){count++;}else{break;}
    }
    for(int i=1; i<5;i++){
        if((col+i)<=9 && value==chessBoard.getPosition(row,col+i)){count++;}else{break;}
    }
    if(count>=4){return true;}
    count = 1;
    // column
    for(int i=1; i<5 ;i++){
        if((row-i)>=0 && value==chessBoard.getPosition(row-i,col)){count++;}else{break;}

    }
     for(int i=1; i<5 ;i++){
       
        if((row+i)<=9 && value==chessBoard.getPosition(row+i,col)){count++;}else{break;}
    }
    if(count>=4){return true;}
    count =1;
    //Main diagnol
    for(int i=1; i<5 ;i++){
        if((row-i)>=0 && (col-i)>=0 && value==chessBoard.getPosition(row-i,col-i)){count++;}else{break;}
    }
    for(int i=1; i<5 ;i++){
        if((row+i)<=9 && (col+i)<=9 && value==chessBoard.getPosition(row+i,col+i)){count++;}else{break;}
    }
    if(count>=4){return true;}
    count=1;
    // Sub diagnol
    for(int i=1; i<5 ;i++){
        if((row-i)>=0 && (col+i)<=9 && value==chessBoard.getPosition(row-i,col+i)){count++;}else{break;}
    }
    for(int i=1; i<5 ;i++){
        if((row+i)<=9 && (col-i)>=0 && value==chessBoard.getPosition(row+i,col-i)){count++;}else{break;}
    }
    if(count>=4){return true;}
    return false;
        
}
string GameController::getLocalTime(){

    std::time_t now = std::time(0);

    std::string dt = std::ctime(&now);

    return dt;

}

