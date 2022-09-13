#ifndef GAME_H
#define GAME_H
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

class Game
{
public:
    Game();
    Game(short max);
    ~Game();
    short playTheGame();


private:
    short randomValue;
    short userValue;
    short maxNumber;
    short count;
    void resetValues();
    void setMaxNumber(short max);
    void askUserInput(string s);
    void askMaxNumber(string s);
    void drawRandomNumber();
};

#endif // GAME_H
