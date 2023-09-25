#include "PLayer.h"
#include<string>


string Player::getName()
{
    return name;
}


void Player::setName(string newName)
{
    name = newName;
}

int Player::getRank()
{
    return rank;
}


void Player::setRank(int newRank)
{
    rank = newRank;
}

int Player::getWin_count()
{
    return win_count;
}

void Player::setWin_count(int newWin_count)
{
    win_count = newWin_count;
}

int Player::getLose_count()
{
    return lose_count;
}


void Player::setLose_count(int newLose_count)
{
    lose_count = newLose_count;
}


int Player::getDraw_count()
{
    return draw_count;
}


void Player::setDraw_count(int newDraw_count)
{
    draw_count = newDraw_count;
}

