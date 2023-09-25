#include "PlayerInformation.h"
#include<fstream>
#include <sstream>
#include<string>
#include<algorithm>
using namespace std;
void PlayerInformation::SavePerson(Player person1){
    std::ofstream file;
    // Open the file with the name path
    string path = "D:/C++ projects/Mock_Caro_NguyenTheAn_Version1/Controller/Players.txt";
    file.open(path, fstream::app);
    if (file.is_open()) {
        file<<person1;
        // file.write((char*)&person2, sizeof(person2));
        file.close();
    }
}

void PlayerInformation::LoadPlayerInformation(){
  string path = "D:/C++ projects/Mock_Caro_NguyenTheAn_Version1/Controller/Players.txt";
  std::ifstream file (path);
  if (file.is_open ()) {
    std::string line;
    std::getline (file, line);
    while (!file.eof ()) {
      listPlayer.push_back(getObject(line));
      std::getline (file, line);
    }
    file.close ();
  }
  else {
    std::cerr << "File could not be opened\n";
  }

}
Player PlayerInformation::EnterPerson(string message){
    string name; //key
    LoadPlayerInformation(); //load all players
    // cout << listPlayer.size() << endl;
    while(!listPlayer.empty()){
        cout << message;
        cin >> name;
        for(Player player: listPlayer){
            if(player.getName()==name){return player;}
        }
        break;
    }
    Player player;
    player.setName(name);
    player.setRank(0);
    player.setWin_count(0);
    player.setLose_count(0);
    player.setDraw_count(0);
    return player;
}
bool PlayerInformation::searchByName(string name){
  LoadPlayerInformation();
  for(Player player: listPlayer){
    if(player.getName()==name){return true;}
  }
  return false;
}
Player PlayerInformation::getObject(string playerString) {
  
  // Create an istringstream object from the string
  istringstream iss (playerString);
  // Declare a vector to store the words
  vector<string> words;
  // Declare a string to store each word
  string word;
  Player player;
  // Extract each word from the stream using >> operator
  while (iss >> word) {
    // Push the word into the vector
    words.push_back (word);
  }
  player.setName(words[0]);
  player.setRank(stoi(words[1]));
  player.setWin_count(stoi(words[2]));
  player.setLose_count(stoi(words[3]));
  player.setDraw_count(stoi(words[4]));

  return player;
}
void PlayerInformation::updatePlayer(Player person1, Player person2){
    listPlayer.clear();
    LoadPlayerInformation();
    std::ofstream file;
    // Open the file with the name path
    string path = "D:/C++ projects/Mock_Caro_NguyenTheAn_Version1/Controller/Players.txt";
    file.open(path);
    cout << listPlayer.size() << endl;
    if (file.is_open()) {
        for(int i=0; i < listPlayer.size(); i++){
          if(listPlayer[i].getName() == person1.getName()){
            listPlayer[i] = person1;
          }
          if(listPlayer[i].getName() == person2.getName()){
            listPlayer[i] = person2;
          }
          file<<listPlayer[i];
  }
        // file.write((char*)&person2, sizeof(person2));
        file.close();

}
  

}
string PlayerInformation::objectToString(Player player){
  string player_string = player.getName()+" "+to_string(player.getRank()) +" "+ to_string(player.getWin_count())+" "+to_string(player.getLose_count())+" "+to_string(player.getDraw_count());
  return player_string;
}
void PlayerInformation::sortByRank(){
  std::sort(listPlayer.begin(), listPlayer.end());
}