#include "RankBoard.h"
#include "../Controller/PlayerInformation.h"
void RankBoard::showRankBoard(){
    PlayerInformation playerInformation;
    playerInformation.listPlayer.clear();
    playerInformation.LoadPlayerInformation();
    if(playerInformation.listPlayer.empty()){
        cout << "Empty rank board\n";
        return;
    }

    playerInformation.sortByRank();
    int count=1;
    for(Player p: playerInformation.listPlayer){
        cout << count << ".";
        count++;
        cout << p.getName() << "\t\t" <<p.getRank() << endl;

    }

}
