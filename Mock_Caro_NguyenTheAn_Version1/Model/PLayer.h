#ifndef PLAYER_H
#define PLAYER_H
#include<string>
#include<iostream>
using namespace std;

class Player{
    string name;
    int rank;
    int win_count;
    int lose_count;
    int draw_count;
    public:
        Player(){}
        ~Player(){}
        string getName();
        void setName(string newName);
        int getRank();
        void setRank(int newRank);
        int getWin_count();
        void setWin_count(int newWin_count);
        int getLose_count();
        void setLose_count(int newLose_count);
        int getDraw_count();
        void setDraw_count(int newDraw_count);
        friend ostream& operator<< (ostream& os,  Player& p) {
            os << p.name << " " << p.rank << " " << p.win_count << " "<< p.lose_count << " "<< p.draw_count << "\n";
            return os;
        }
        bool operator< (const Player &other) const {
            return rank > other.rank;
        }
};
#endif