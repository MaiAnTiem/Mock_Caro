#include "ReplayGame.h"
#include "GameController.h"
#include <fstream>

void ReplayGame::addRecord(vector<string> Record){
    list_record.push_back(Record);
}

