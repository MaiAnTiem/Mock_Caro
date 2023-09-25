#ifndef PLAYERINFORMATION_H
#define PLAYERINFORMATION_H
#include<string>
#include<vector>
#include "../Model/PLayer.h"
class PlayerInformation{
    public:
        Player temp;
        vector<Player> listPlayer;
    public:
        PlayerInformation(){}
        ~PlayerInformation(){}
        
        void SavePerson(Player person1);
        
        void LoadPlayerInformation();  
        Player EnterPerson(string message);
        Player getObject(string playerString);

        void updatePlayer(Player person1, Player person2);
        string objectToString(Player player);

        void sortByRank();

        bool searchByName(string name);
};
#endif